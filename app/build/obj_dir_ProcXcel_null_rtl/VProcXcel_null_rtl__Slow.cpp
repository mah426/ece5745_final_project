// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VProcXcel_null_rtl.h for the primary calling header

#include "VProcXcel_null_rtl.h"
#include "VProcXcel_null_rtl__Syms.h"

#include "verilated_dpi.h"

//==========
CData/*0:0*/ VProcXcel_null_rtl::__Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[128];

VL_CTOR_IMP(VProcXcel_null_rtl) {
    VProcXcel_null_rtl__Syms* __restrict vlSymsp = __VlSymsp = new VProcXcel_null_rtl__Syms(this, name());
    VProcXcel_null_rtl* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VProcXcel_null_rtl::__Vconfigure(VProcXcel_null_rtl__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

VProcXcel_null_rtl::~VProcXcel_null_rtl() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void VProcXcel_null_rtl::_settle__TOP__1(VProcXcel_null_rtl__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcXcel_null_rtl::_settle__TOP__1\n"); );
    VProcXcel_null_rtl* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp302[3];
    WData/*95:0*/ __Vtemp303[3];
    // Body
    vlTOPp->xmem___05Freqstream___05Fmsg[0U] = 0U;
    vlTOPp->xmem___05Freqstream___05Fmsg[1U] = 0U;
    vlTOPp->xmem___05Freqstream___05Fmsg[2U] = 0U;
    vlTOPp->xmem___05Freqstream___05Fval = 0U;
    vlTOPp->xmem___05Frespstream___05Frdy = 0U;
    vlTOPp->stats_en = (0U != vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__stats_en_W);
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__xcel_reqstream_enq_msg 
        = ((0x1fffffffffULL & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__xcel_reqstream_enq_msg) 
           | ((QData)((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__xcelreq_msg_type_X)) 
              << 0x25U));
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__xcel_reqstream_enq_msg 
        = ((0x3f00000000ULL & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__xcel_reqstream_enq_msg) 
           | (IData)((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__op1_X)));
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__xcel_reqstream_enq_msg 
        = ((0x20ffffffffULL & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__xcel_reqstream_enq_msg) 
           | ((QData)((IData)((0x1fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__op2_X))) 
              << 0x20U));
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul_ostream_msg_tmp_X 
        = ((vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__a_reg_out 
            * vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__b_reg_out) 
           & (- (IData)((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__val_reg_out))));
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
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imulresp_q__DOT__genblk1__DOT__ctrl__DOT__do_enq 
        = ((~ (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imulresp_q__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__val_reg_out));
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
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__rf_wen_W 
        = ((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_W) 
           & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__rf_wen_pending_W));
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__empty 
        = ((~ (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__full)) 
           & ((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__enq_ptr) 
              == (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__deq_ptr)));
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__ostall_W 
        = (((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_W) 
            & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__proc2mngr_val_W)) 
           & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full));
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imul_ostream_val_X 
        = ((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imulresp_q__DOT__genblk1__DOT__ctrl__DOT__full) 
           | (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__val_reg_out));
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__ostall_M 
        = ((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_M) 
           & (((0U != (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__dmem_reqstream_type_M)) 
               & (~ (IData)(vlTOPp->dmem___05Frespstream___05Fval))) 
              | ((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__xcelreq_M) 
                 & (~ (IData)(vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__ctrl__DOT__full)))));
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
    __Vtemp302[0U] = (IData)((QData)((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_enq_msg_data)));
    __Vtemp302[1U] = ((0xfffffffcU & (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__alu_result_X 
                                      << 2U)) | (IData)(
                                                        ((QData)((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_enq_msg_data)) 
                                                         >> 0x20U)));
    __Vtemp302[2U] = (3U & (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__alu_result_X 
                            >> 0x1eU));
    VL_EXTEND_WW(74,66, __Vtemp303, __Vtemp302);
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_enq_msg[0U] 
        = __Vtemp303[0U];
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_enq_msg[1U] 
        = __Vtemp303[1U];
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_enq_msg[2U] 
        = ((0xfffffc00U & (((2U == (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__dmem_reqstream_type_X))
                             ? 1U : 0U) << 0xaU)) | 
           __Vtemp303[2U]);
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
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__wb_result_M 
        = ((0U == (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__wb_result_sel_M))
            ? vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__ex_result_M
            : ((1U == (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__wb_result_sel_M))
                ? (IData)(vlTOPp->dmem___05Frespstream___05Fmsg)
                : ((2U == (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__wb_result_sel_M))
                    ? (IData)(vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT____Vcellout__v__xcel_respstream_msg)
                    : 0U)));
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_W 
        = ((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_W) 
           & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__ostall_W));
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__ostall_X 
        = ((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_X) 
           & ((((0U != (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__dmem_reqstream_type_X)) 
                & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
               | ((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__mul_X) 
                  & (~ (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imul_ostream_val_X)))) 
              | ((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__xcelreq_X) 
                 & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__xcel_queue__DOT__genblk1__DOT__ctrl__DOT__full))));
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_M 
        = ((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_M) 
           & ((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__ostall_M) 
              | (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__ostall_W)));
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
    vlTOPp->commit_inst = ((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_W) 
                           & (~ (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_W)));
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__proc2mngr_enq_val 
        = (((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_W) 
            & (~ (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_W))) 
           & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__proc2mngr_val_W));
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_X 
        = ((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_X) 
           & (((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__ostall_X) 
               | (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__ostall_M)) 
              | (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__ostall_W)));
    vlTOPp->ProcXcel_null_rtl__DOT__proc_dmem_respstream_rdy 
        = (((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_M) 
            & (~ (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_M))) 
           & (0U != (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__dmem_reqstream_type_M)));
    vlTOPp->ProcXcel_null_rtl__DOT__proc_xcel_respstream_rdy 
        = (((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_M) 
            & (~ (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_M))) 
           & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__xcelreq_M));
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__jal_target_D 
        = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__pc_D 
           + vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imm_D);
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__pc_sel_F 
        = ((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X)
            ? ((7U == (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__br_type_X))
                ? 3U : 1U) : ((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_D)
                               ? 2U : 0U));
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__op1_D 
        = ((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__op1_sel_D)
            ? ((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__op1_sel_D)
                ? vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__pc_D
                : 0U) : ((2U & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__op1_byp_sel_D))
                          ? ((1U & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__op1_byp_sel_D))
                              ? vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__wb_result_W
                              : vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__wb_result_M)
                          : ((1U & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__op1_byp_sel_D))
                              ? vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__ex_result_X
                              : ((0U == (0x1fU & (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D 
                                                  >> 0xfU)))
                                  ? 0U : vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile
                                 [(0x1fU & (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D 
                                            >> 0xfU))]))));
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__op2_byp_D 
        = ((2U & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__op2_byp_sel_D))
            ? ((1U & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__op2_byp_sel_D))
                ? vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__wb_result_W
                : vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__wb_result_M)
            : ((1U & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__op2_byp_sel_D))
                ? vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__ex_result_X
                : ((0U == (0x1fU & (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D 
                                    >> 0x14U))) ? 0U
                    : vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile
                   [(0x1fU & (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D 
                              >> 0x14U))])));
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__ostall_D 
        = ((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_D) 
           & (((((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_D) 
                 & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__mngr2proc_rdy_D)) 
                & (~ (IData)(vlTOPp->mngr2proc___05Fval))) 
               | (((((((((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__rs1_en_D) 
                         & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_X)) 
                        & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__rf_wen_X)) 
                       & ((0x1fU & (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D 
                                    >> 0xfU)) == (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__rf_waddr_X))) 
                      & (0U != (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__rf_waddr_X))) 
                     & (1U == (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__dmem_reqstream_type_X))) 
                    | ((((((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__rs2_en_D) 
                           & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_X)) 
                          & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__rf_wen_X)) 
                         & ((0x1fU & (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D 
                                      >> 0x14U)) == (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__rf_waddr_X))) 
                        & (0U != (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__rf_waddr_X))) 
                       & (1U == (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__dmem_reqstream_type_X)))) 
                   | (((((((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__rs1_en_D) 
                           & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_X)) 
                          & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__rf_wen_X)) 
                         & ((0x1fU & (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D 
                                      >> 0xfU)) == (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__rf_waddr_X))) 
                        & (0U != (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__rf_waddr_X))) 
                       & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__xcelreq_X)) 
                      & (~ (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__xcelreq_msg_type_X)))) 
                  | (((((((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__rs2_en_D) 
                          & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_X)) 
                         & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__rf_wen_X)) 
                        & ((0x1fU & (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D 
                                     >> 0x14U)) == (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__rf_waddr_X))) 
                       & (0U != (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__rf_waddr_X))) 
                      & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__xcelreq_X)) 
                     & (~ (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__xcelreq_msg_type_X))))) 
              | ((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__mul_D) 
                 & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imulresp_q__DOT__genblk1__DOT__ctrl__DOT__full))));
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq 
        = ((~ (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__proc2mngr_enq_val));
    vlTOPp->ProcXcel_null_rtl__DOT__proc_proc2mngr_val 
        = ((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
           | (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__proc2mngr_enq_val));
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imulresp_q__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_X) 
             & (~ (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_X))) 
            & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__mul_X)) 
           & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imul_ostream_val_X));
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_enq_val 
        = (((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_X) 
            & (~ (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_X))) 
           & (0U != (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__dmem_reqstream_type_X)));
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__xcel_reqstream_enq_val 
        = (((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_X) 
            & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__xcelreq_X)) 
           & (~ (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_X)));
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__osquash_X 
        = (((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_X) 
            & (~ (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_X))) 
           & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X));
    vlTOPp->dmem___05Frespstream___05Frdy = vlTOPp->ProcXcel_null_rtl__DOT__proc_dmem_respstream_rdy;
    vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc_xcel_respstream_rdy) 
           & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__ctrl__DOT__full));
    vlTOPp->ProcXcel_null_rtl__DOT__xcel_xcel_reqstream_rdy 
        = (1U & ((~ (IData)(vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__ctrl__DOT__full)) 
                 | ((IData)(vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__ctrl__DOT__full) 
                    & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc_xcel_respstream_rdy))));
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__pc_next_F 
        = ((2U & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__pc_sel_F))
            ? ((1U & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__pc_sel_F))
                ? vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__alu_result_X
                : vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__jal_target_D)
            : ((1U & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__pc_sel_F))
                ? vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__br_target_X
                : ((IData)(4U) + vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__pc_F)));
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__op2_D 
        = ((0U == (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__op2_sel_D))
            ? vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__op2_byp_D
            : ((1U == (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__op2_sel_D))
                ? vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imm_D
                : ((2U == (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__op2_sel_D))
                    ? ((0U == (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__csrr_sel_D))
                        ? vlTOPp->mngr2proc___05Fmsg
                        : ((1U == (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__csrr_sel_D))
                            ? 1U : 0U)) : 0U)));
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_D 
        = ((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_D) 
           & ((((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__ostall_D) 
                | (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__ostall_X)) 
               | (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__ostall_M)) 
              | (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__ostall_W)));
    vlTOPp->proc2mngr___05Fval = vlTOPp->ProcXcel_null_rtl__DOT__proc_proc2mngr_val;
    vlTOPp->proc2mngr___05Fmsg = (((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full)
                                    ? vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore
                                    : ((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full)
                                        ? 0U : vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__wb_result_W)) 
                                  & (- (IData)((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc_proc2mngr_val))));
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((IData)(vlTOPp->proc2mngr___05Frdy) & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc_proc2mngr_val));
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imulresp_q__DOT__genblk1__DOT__ctrl__DOT__do_bypass 
        = (((~ (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imulresp_q__DOT__genblk1__DOT__ctrl__DOT__full)) 
            & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imulresp_q__DOT__genblk1__DOT__ctrl__DOT__do_enq)) 
           & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imulresp_q__DOT__genblk1__DOT__ctrl__DOT__do_deq));
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq 
        = ((~ (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_enq_val));
    vlTOPp->ProcXcel_null_rtl__DOT__proc_dmem_reqstream_val 
        = ((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
           | (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_enq_val));
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__xcel_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq 
        = ((~ (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__xcel_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__xcel_reqstream_enq_val));
    vlTOPp->ProcXcel_null_rtl__DOT__proc_xcel_reqstream_val 
        = ((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__xcel_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
           | (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__xcel_reqstream_enq_val));
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__squash_D 
        = ((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_D) 
           & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__osquash_X));
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
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul_istream_msg_D 
        = (((QData)((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__op1_D)) 
            << 0x20U) | (QData)((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__op2_D)));
    vlTOPp->mngr2proc___05Frdy = (((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_D) 
                                   & (~ (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_D))) 
                                  & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__mngr2proc_rdy_D));
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__squash_F 
        = ((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_F) 
           & ((((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_D) 
                & (~ (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_D))) 
               & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_D)) 
              | (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__osquash_X)));
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass 
        = (((~ (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
            & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq)) 
           & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq));
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imulresp_q__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = ((~ (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imulresp_q__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
           & (((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imulresp_q__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
               & (~ (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imulresp_q__DOT__genblk1__DOT__ctrl__DOT__do_bypass))) 
              | (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imulresp_q__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlTOPp->dmem___05Freqstream___05Fval = vlTOPp->ProcXcel_null_rtl__DOT__proc_dmem_reqstream_val;
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT____Vcellout__v__dmem_reqstream_msg[0U] = 0U;
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT____Vcellout__v__dmem_reqstream_msg[1U] = 0U;
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT____Vcellout__v__dmem_reqstream_msg[2U] = 0U;
    if (vlTOPp->ProcXcel_null_rtl__DOT__proc_dmem_reqstream_val) {
        if (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full) {
            vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT____Vcellout__v__dmem_reqstream_msg[0U] 
                = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U];
            vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT____Vcellout__v__dmem_reqstream_msg[1U] 
                = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U];
            vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT____Vcellout__v__dmem_reqstream_msg[2U] 
                = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U];
        } else {
            vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT____Vcellout__v__dmem_reqstream_msg[0U] 
                = ((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full)
                    ? 0U : vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_enq_msg[0U]);
            vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT____Vcellout__v__dmem_reqstream_msg[1U] 
                = ((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full)
                    ? 0U : vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_enq_msg[1U]);
            vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT____Vcellout__v__dmem_reqstream_msg[2U] 
                = ((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full)
                    ? 0U : vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_enq_msg[2U]);
        }
        if ((0U == (7U & (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT____Vcellout__v__dmem_reqstream_msg[2U] 
                          >> 0xaU)))) {
            vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT____Vcellout__v__dmem_reqstream_msg[0U] = 0U;
        }
    }
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((IData)(vlTOPp->dmem___05Freqstream___05Frdy) 
           & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc_dmem_reqstream_val));
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT____Vcellout__v__xcel_reqstream_msg 
        = (((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__xcel_queue__DOT__genblk1__DOT__ctrl__DOT__full)
             ? vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__xcel_queue__DOT__genblk1__DOT__dpath__DOT__qstore
             : ((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__xcel_queue__DOT__genblk1__DOT__ctrl__DOT__full)
                 ? 0ULL : vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__xcel_reqstream_enq_msg)) 
           & (- (QData)((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc_xcel_reqstream_val))));
    vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__ctrl__DOT__do_enq 
        = ((IData)(vlTOPp->ProcXcel_null_rtl__DOT__xcel_xcel_reqstream_rdy) 
           & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc_xcel_reqstream_val));
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__xcel_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((IData)(vlTOPp->ProcXcel_null_rtl__DOT__xcel_xcel_reqstream_rdy) 
           & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc_xcel_reqstream_val));
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__reg_en_D 
        = (1U & ((~ (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_D)) 
                 | (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__squash_D)));
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imul_istream_val_D 
        = ((((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_D) 
             & (~ (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_D))) 
            & (~ (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__squash_D))) 
           & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__mul_D));
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_F 
        = ((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_F) 
           & ((((((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_F) 
                  & (~ ((~ (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_drop_unit__DOT__state)) 
                        & ((IData)(vlTOPp->imem___05Frespstream___05Fval) 
                           & (~ (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__squash_F)))))) 
                 | (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__ostall_D)) 
                | (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__ostall_X)) 
               | (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__ostall_M)) 
              | (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__ostall_W)));
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = ((~ (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
           & (((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
               & (~ (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass))) 
              | (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlTOPp->dmem___05Freqstream___05Fmsg[0U] = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT____Vcellout__v__dmem_reqstream_msg[0U];
    vlTOPp->dmem___05Freqstream___05Fmsg[1U] = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT____Vcellout__v__dmem_reqstream_msg[1U];
    vlTOPp->dmem___05Freqstream___05Fmsg[2U] = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT____Vcellout__v__dmem_reqstream_msg[2U];
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass 
        = (((~ (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
            & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq)) 
           & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq));
    vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = ((~ ((IData)(vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
               & (~ (((IData)(vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__ctrl__DOT__full) 
                      & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__ctrl__DOT__do_enq)) 
                     & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__ctrl__DOT__do_deq))))) 
           & ((IData)(vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
              | (IData)(vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__xcel_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass 
        = (((~ (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__xcel_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
            & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__xcel_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq)) 
           & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__xcel_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq));
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__reg_en_F 
        = (1U & ((~ (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_F)) 
                 | (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__squash_F)));
    vlTOPp->ProcXcel_null_rtl__DOT__proc_imem_respstream_rdy 
        = (1U & ((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_drop_unit__DOT__state) 
                 | ((~ (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_F)) 
                    | (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__squash_F))));
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_enq_val 
        = (1U & (((~ (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_F)) 
                  | (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__squash_F)) 
                 & (~ (IData)(vlTOPp->reset))));
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = ((~ (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
           & (((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
               & (~ (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass))) 
              | (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__xcel_queue__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = ((~ (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__xcel_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
           & (((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__xcel_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
               & (~ (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__xcel_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass))) 
              | (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__xcel_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlTOPp->imem___05Frespstream___05Frdy = vlTOPp->ProcXcel_null_rtl__DOT__proc_imem_respstream_rdy;
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_drop_unit__DOT__istream_go 
        = ((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc_imem_respstream_rdy) 
           & (IData)(vlTOPp->imem___05Frespstream___05Fval));
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__do_enq 
        = ((~ (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__full)) 
           & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_enq_val));
    vlTOPp->ProcXcel_null_rtl__DOT__proc_imem_reqstream_val 
        = (1U & ((~ (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__empty)) 
                 | ((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__empty) 
                    & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_enq_val))));
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_drop_unit__DOT__next_state 
        = (1U & ((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_drop_unit__DOT__state)
                  ? (~ (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_drop_unit__DOT__istream_go))
                  : ((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__squash_F) 
                     & (~ (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_drop_unit__DOT__istream_go)))));
    vlTOPp->imem___05Freqstream___05Fval = vlTOPp->ProcXcel_null_rtl__DOT__proc_imem_reqstream_val;
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT____Vcellout__v__imem_reqstream_msg[0U] 
        = (((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__empty)
             ? ((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__empty)
                 ? vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_enq_msg[0U]
                 : 0U) : vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__dpath__DOT__qstore__DOT__rfile
            [vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__deq_ptr][0U]) 
           & (- (IData)((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc_imem_reqstream_val))));
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT____Vcellout__v__imem_reqstream_msg[1U] 
        = (((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__empty)
             ? ((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__empty)
                 ? vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_enq_msg[1U]
                 : 0U) : vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__dpath__DOT__qstore__DOT__rfile
            [vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__deq_ptr][1U]) 
           & (- (IData)((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc_imem_reqstream_val))));
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT____Vcellout__v__imem_reqstream_msg[2U] 
        = (((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__empty)
             ? ((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__empty)
                 ? vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_enq_msg[2U]
                 : 0U) : vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__dpath__DOT__qstore__DOT__rfile
            [vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__deq_ptr][2U]) 
           & (- (IData)((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc_imem_reqstream_val))));
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__do_deq 
        = ((IData)(vlTOPp->imem___05Freqstream___05Frdy) 
           & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc_imem_reqstream_val));
    vlTOPp->imem___05Freqstream___05Fmsg[0U] = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT____Vcellout__v__imem_reqstream_msg[0U];
    vlTOPp->imem___05Freqstream___05Fmsg[1U] = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT____Vcellout__v__imem_reqstream_msg[1U];
    vlTOPp->imem___05Freqstream___05Fmsg[2U] = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT____Vcellout__v__imem_reqstream_msg[2U];
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__full_next 
        = ((((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__do_enq) 
             & (~ (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__do_deq))) 
            & ((1U & ((IData)(1U) + (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__enq_ptr))) 
               == (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__deq_ptr))) 
           | ((~ ((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__full))) 
              & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__full)));
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__do_bypass 
        = (((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__empty) 
            & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__do_enq)) 
           & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__do_deq));
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__deq_ptr_next 
        = (1U & (((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__do_deq) 
                  & (~ (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__do_bypass)))
                  ? ((IData)(1U) + (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__deq_ptr))
                  : (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__deq_ptr)));
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__enq_ptr_next 
        = (1U & (((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__do_enq) 
                  & (~ (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__do_bypass)))
                  ? ((IData)(1U) + (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__enq_ptr))
                  : (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__enq_ptr)));
}

void VProcXcel_null_rtl::_eval_initial(VProcXcel_null_rtl__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcXcel_null_rtl::_eval_initial\n"); );
    VProcXcel_null_rtl* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

void VProcXcel_null_rtl::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcXcel_null_rtl::final\n"); );
    // Variables
    VProcXcel_null_rtl__Syms* __restrict vlSymsp = this->__VlSymsp;
    VProcXcel_null_rtl* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VProcXcel_null_rtl::_eval_settle(VProcXcel_null_rtl__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcXcel_null_rtl::_eval_settle\n"); );
    VProcXcel_null_rtl* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__1(vlSymsp);
}

void VProcXcel_null_rtl::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcXcel_null_rtl::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    commit_inst = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    stats_en = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(77, dmem___05Freqstream___05Fmsg);
    dmem___05Freqstream___05Frdy = VL_RAND_RESET_I(1);
    dmem___05Freqstream___05Fval = VL_RAND_RESET_I(1);
    dmem___05Frespstream___05Fmsg = VL_RAND_RESET_Q(47);
    dmem___05Frespstream___05Frdy = VL_RAND_RESET_I(1);
    dmem___05Frespstream___05Fval = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(77, imem___05Freqstream___05Fmsg);
    imem___05Freqstream___05Frdy = VL_RAND_RESET_I(1);
    imem___05Freqstream___05Fval = VL_RAND_RESET_I(1);
    imem___05Frespstream___05Fmsg = VL_RAND_RESET_Q(47);
    imem___05Frespstream___05Frdy = VL_RAND_RESET_I(1);
    imem___05Frespstream___05Fval = VL_RAND_RESET_I(1);
    mngr2proc___05Fmsg = VL_RAND_RESET_I(32);
    mngr2proc___05Frdy = VL_RAND_RESET_I(1);
    mngr2proc___05Fval = VL_RAND_RESET_I(1);
    proc2mngr___05Fmsg = VL_RAND_RESET_I(32);
    proc2mngr___05Frdy = VL_RAND_RESET_I(1);
    proc2mngr___05Fval = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(77, xmem___05Freqstream___05Fmsg);
    xmem___05Freqstream___05Frdy = VL_RAND_RESET_I(1);
    xmem___05Freqstream___05Fval = VL_RAND_RESET_I(1);
    xmem___05Frespstream___05Fmsg = VL_RAND_RESET_Q(47);
    xmem___05Frespstream___05Frdy = VL_RAND_RESET_I(1);
    xmem___05Frespstream___05Fval = VL_RAND_RESET_I(1);
    ProcXcel_null_rtl__DOT__proc_dmem_reqstream_val = VL_RAND_RESET_I(1);
    ProcXcel_null_rtl__DOT__proc_dmem_respstream_rdy = VL_RAND_RESET_I(1);
    ProcXcel_null_rtl__DOT__proc_imem_reqstream_val = VL_RAND_RESET_I(1);
    ProcXcel_null_rtl__DOT__proc_imem_respstream_rdy = VL_RAND_RESET_I(1);
    ProcXcel_null_rtl__DOT__proc_proc2mngr_val = VL_RAND_RESET_I(1);
    ProcXcel_null_rtl__DOT__proc_xcel_reqstream_val = VL_RAND_RESET_I(1);
    ProcXcel_null_rtl__DOT__proc_xcel_respstream_rdy = VL_RAND_RESET_I(1);
    ProcXcel_null_rtl__DOT__xcel_xcel_reqstream_rdy = VL_RAND_RESET_I(1);
    ProcXcel_null_rtl__DOT__proc__DOT____Vcellout__v__xcel_reqstream_msg = VL_RAND_RESET_Q(38);
    VL_RAND_RESET_W(77, ProcXcel_null_rtl__DOT__proc__DOT____Vcellout__v__imem_reqstream_msg);
    VL_RAND_RESET_W(77, ProcXcel_null_rtl__DOT__proc__DOT____Vcellout__v__dmem_reqstream_msg);
    VL_RAND_RESET_W(77, ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_enq_msg);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_enq_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(77, ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_enq_msg);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_enq_val = VL_RAND_RESET_I(1);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_enq_msg_data = VL_RAND_RESET_I(32);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__proc2mngr_enq_val = VL_RAND_RESET_I(1);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__xcel_reqstream_enq_msg = VL_RAND_RESET_Q(38);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__xcel_reqstream_enq_val = VL_RAND_RESET_I(1);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__reg_en_F = VL_RAND_RESET_I(1);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__pc_sel_F = VL_RAND_RESET_I(2);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__reg_en_D = VL_RAND_RESET_I(1);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__op1_byp_sel_D = VL_RAND_RESET_I(2);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__op2_byp_sel_D = VL_RAND_RESET_I(2);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__op1_sel_D = VL_RAND_RESET_I(1);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__op2_sel_D = VL_RAND_RESET_I(2);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__csrr_sel_D = VL_RAND_RESET_I(2);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imm_type_D = VL_RAND_RESET_I(3);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imul_istream_val_D = VL_RAND_RESET_I(1);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__alu_fn_X = VL_RAND_RESET_I(4);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ex_result_sel_X = VL_RAND_RESET_I(2);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__wb_result_sel_M = VL_RAND_RESET_I(2);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__rf_waddr_W = VL_RAND_RESET_I(5);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__rf_wen_W = VL_RAND_RESET_I(1);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D = VL_RAND_RESET_I(32);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imul_ostream_val_X = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(4096, ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__str);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(1);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(1);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(1);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(1);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__do_enq = VL_RAND_RESET_I(1);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__do_deq = VL_RAND_RESET_I(1);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__empty = VL_RAND_RESET_I(1);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__do_bypass = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            VL_RAND_RESET_W(77, ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }}
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_drop_unit__DOT__state = VL_RAND_RESET_I(1);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_drop_unit__DOT__next_state = VL_RAND_RESET_I(1);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_drop_unit__DOT__istream_go = VL_RAND_RESET_I(1);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq = VL_RAND_RESET_I(1);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq = VL_RAND_RESET_I(1);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(77, ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq = VL_RAND_RESET_I(1);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq = VL_RAND_RESET_I(1);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass = VL_RAND_RESET_I(1);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore = VL_RAND_RESET_I(32);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__xcel_queue__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__xcel_queue__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__xcel_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq = VL_RAND_RESET_I(1);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__xcel_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq = VL_RAND_RESET_I(1);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__xcel_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass = VL_RAND_RESET_I(1);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__xcel_queue__DOT__genblk1__DOT__dpath__DOT__qstore = VL_RAND_RESET_Q(38);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_F = VL_RAND_RESET_I(1);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_D = VL_RAND_RESET_I(1);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_X = VL_RAND_RESET_I(1);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_M = VL_RAND_RESET_I(1);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_W = VL_RAND_RESET_I(1);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__ostall_D = VL_RAND_RESET_I(1);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__ostall_X = VL_RAND_RESET_I(1);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__ostall_M = VL_RAND_RESET_I(1);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__ostall_W = VL_RAND_RESET_I(1);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_F = VL_RAND_RESET_I(1);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_D = VL_RAND_RESET_I(1);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_X = VL_RAND_RESET_I(1);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_M = VL_RAND_RESET_I(1);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_W = VL_RAND_RESET_I(1);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__osquash_X = VL_RAND_RESET_I(1);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__squash_F = VL_RAND_RESET_I(1);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__squash_D = VL_RAND_RESET_I(1);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_D = VL_RAND_RESET_I(1);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X = VL_RAND_RESET_I(1);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__br_type_X = VL_RAND_RESET_I(3);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__br_type_D = VL_RAND_RESET_I(3);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__jal_D = VL_RAND_RESET_I(1);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__rs1_en_D = VL_RAND_RESET_I(1);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__rs2_en_D = VL_RAND_RESET_I(1);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__alu_fn_D = VL_RAND_RESET_I(4);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__dmem_reqstream_type_D = VL_RAND_RESET_I(3);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__ex_result_sel_D = VL_RAND_RESET_I(2);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__wb_result_sel_D = VL_RAND_RESET_I(2);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__rf_wen_D = VL_RAND_RESET_I(1);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__mul_D = VL_RAND_RESET_I(1);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__csrr_D = VL_RAND_RESET_I(1);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__csrw_D = VL_RAND_RESET_I(1);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__proc2mngr_val_D = VL_RAND_RESET_I(1);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__mngr2proc_rdy_D = VL_RAND_RESET_I(1);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stats_en_wen_D = VL_RAND_RESET_I(1);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__xcelreq_D = VL_RAND_RESET_I(1);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__xcelreq_msg_type_D = VL_RAND_RESET_I(1);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__rf_wen_X = VL_RAND_RESET_I(1);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__rf_waddr_X = VL_RAND_RESET_I(5);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__dmem_reqstream_type_X = VL_RAND_RESET_I(2);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__rf_wen_M = VL_RAND_RESET_I(1);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__rf_waddr_M = VL_RAND_RESET_I(5);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__rf_wen_pending_W = VL_RAND_RESET_I(1);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__xcelreq_X = VL_RAND_RESET_I(1);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__xcelreq_msg_type_X = VL_RAND_RESET_I(1);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__inst_X = VL_RAND_RESET_I(32);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__wb_result_sel_X = VL_RAND_RESET_I(2);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__proc2mngr_val_X = VL_RAND_RESET_I(1);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stats_en_wen_X = VL_RAND_RESET_I(1);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__mul_X = VL_RAND_RESET_I(1);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__inst_M = VL_RAND_RESET_I(32);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__dmem_reqstream_type_M = VL_RAND_RESET_I(3);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__proc2mngr_val_M = VL_RAND_RESET_I(1);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stats_en_wen_M = VL_RAND_RESET_I(1);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__xcelreq_M = VL_RAND_RESET_I(1);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__inst_W = VL_RAND_RESET_I(32);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__proc2mngr_val_W = VL_RAND_RESET_I(1);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stats_en_wen_pending_W = VL_RAND_RESET_I(1);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__pc_F = VL_RAND_RESET_I(32);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__pc_next_F = VL_RAND_RESET_I(32);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__br_target_X = VL_RAND_RESET_I(32);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__jal_target_D = VL_RAND_RESET_I(32);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__pc_D = VL_RAND_RESET_I(32);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imm_D = VL_RAND_RESET_I(32);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__op1_D = VL_RAND_RESET_I(32);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__op2_byp_D = VL_RAND_RESET_I(32);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__op2_D = VL_RAND_RESET_I(32);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul_istream_msg_D = VL_RAND_RESET_Q(64);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul_ostream_msg_tmp_X = VL_RAND_RESET_I(32);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__pc_X = VL_RAND_RESET_I(32);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__op1_X = VL_RAND_RESET_I(32);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__op2_X = VL_RAND_RESET_I(32);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__alu_result_X = VL_RAND_RESET_I(32);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__ex_result_X = VL_RAND_RESET_I(32);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__ex_result_M = VL_RAND_RESET_I(32);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__wb_result_M = VL_RAND_RESET_I(32);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__wb_result_W = VL_RAND_RESET_I(32);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__stats_en_W = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
            ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[__Vi0] = VL_RAND_RESET_I(32);
    }}
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__val_reg_out = VL_RAND_RESET_I(1);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__a_reg_out = VL_RAND_RESET_I(32);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__b_reg_out = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__str);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len1 = VL_RAND_RESET_I(32);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imulresp_q__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imulresp_q__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imulresp_q__DOT__genblk1__DOT__ctrl__DOT__do_enq = VL_RAND_RESET_I(1);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imulresp_q__DOT__genblk1__DOT__ctrl__DOT__do_deq = VL_RAND_RESET_I(1);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imulresp_q__DOT__genblk1__DOT__ctrl__DOT__do_bypass = VL_RAND_RESET_I(1);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imulresp_q__DOT__genblk1__DOT__dpath__DOT__qstore = VL_RAND_RESET_I(32);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__rs1_str = VL_RAND_RESET_I(24);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__rs2_str = VL_RAND_RESET_I(24);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__rd_str = VL_RAND_RESET_I(24);
    VL_RAND_RESET_W(72, ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__csr_str);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__funct_str = VL_RAND_RESET_I(16);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__rs1 = VL_RAND_RESET_I(5);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__rs2 = VL_RAND_RESET_I(5);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__rd = VL_RAND_RESET_I(5);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__csr = VL_RAND_RESET_I(12);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__funct = VL_RAND_RESET_I(7);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__type_str = VL_RAND_RESET_I(16);
    VL_RAND_RESET_W(4096, ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__str);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len1 = VL_RAND_RESET_I(32);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__type_str = VL_RAND_RESET_I(16);
    VL_RAND_RESET_W(4096, ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__str);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len1 = VL_RAND_RESET_I(32);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__type_str = VL_RAND_RESET_I(16);
    VL_RAND_RESET_W(4096, ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__str);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len1 = VL_RAND_RESET_I(32);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__type_str = VL_RAND_RESET_I(16);
    VL_RAND_RESET_W(4096, ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__str);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len1 = VL_RAND_RESET_I(32);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    ProcXcel_null_rtl__DOT__xcel__DOT____Vcellout__v__xcel_respstream_msg = VL_RAND_RESET_Q(33);
    ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xr0 = VL_RAND_RESET_I(32);
    ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__ctrl__DOT__do_enq = VL_RAND_RESET_I(1);
    ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__ctrl__DOT__do_deq = VL_RAND_RESET_I(1);
    ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__dpath__DOT__qstore = VL_RAND_RESET_Q(38);
    ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__type_str = VL_RAND_RESET_I(16);
    VL_RAND_RESET_W(4096, ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__str);
    ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len1 = VL_RAND_RESET_I(32);
    ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__type_str = VL_RAND_RESET_I(16);
    VL_RAND_RESET_W(4096, ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__str);
    ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len1 = VL_RAND_RESET_I(32);
    ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    __Vtableidx1 = 0;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[0] = 0U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[1] = 0U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[2] = 0U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[3] = 1U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[4] = 0U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[5] = 0U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[6] = 0U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[7] = 0U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[8] = 0U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[9] = 0U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[10] = 0U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[11] = 1U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[12] = 0U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[13] = 1U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[14] = 0U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[15] = 1U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[16] = 0U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[17] = 0U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[18] = 0U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[19] = 1U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[20] = 0U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[21] = 0U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[22] = 0U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[23] = 1U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[24] = 0U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[25] = 0U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[26] = 0U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[27] = 1U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[28] = 0U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[29] = 0U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[30] = 0U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[31] = 1U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[32] = 0U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[33] = 0U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[34] = 0U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[35] = 1U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[36] = 0U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[37] = 1U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[38] = 0U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[39] = 0U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[40] = 0U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[41] = 0U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[42] = 0U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[43] = 0U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[44] = 0U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[45] = 1U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[46] = 0U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[47] = 1U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[48] = 0U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[49] = 0U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[50] = 0U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[51] = 1U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[52] = 0U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[53] = 1U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[54] = 0U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[55] = 1U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[56] = 0U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[57] = 0U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[58] = 0U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[59] = 0U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[60] = 0U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[61] = 0U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[62] = 0U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[63] = 1U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[64] = 0U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[65] = 0U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[66] = 0U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[67] = 0U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[68] = 0U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[69] = 0U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[70] = 0U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[71] = 0U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[72] = 0U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[73] = 1U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[74] = 0U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[75] = 1U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[76] = 0U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[77] = 1U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[78] = 0U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[79] = 1U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[80] = 0U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[81] = 0U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[82] = 0U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[83] = 0U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[84] = 0U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[85] = 0U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[86] = 0U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[87] = 1U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[88] = 0U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[89] = 1U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[90] = 0U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[91] = 1U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[92] = 0U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[93] = 0U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[94] = 0U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[95] = 1U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[96] = 0U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[97] = 0U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[98] = 0U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[99] = 0U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[100] = 0U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[101] = 1U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[102] = 0U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[103] = 0U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[104] = 0U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[105] = 1U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[106] = 0U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[107] = 0U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[108] = 0U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[109] = 1U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[110] = 0U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[111] = 1U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[112] = 0U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[113] = 0U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[114] = 0U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[115] = 0U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[116] = 0U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[117] = 1U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[118] = 0U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[119] = 1U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[120] = 0U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[121] = 1U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[122] = 0U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[123] = 0U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[124] = 0U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[125] = 0U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[126] = 0U;
    __Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[127] = 1U;
}
