// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VProcXcel_null_rtl.h for the primary calling header

#include "VProcXcel_null_rtl.h"
#include "VProcXcel_null_rtl__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void VProcXcel_null_rtl::_combo__TOP__3(VProcXcel_null_rtl__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcXcel_null_rtl::_combo__TOP__3\n"); );
    VProcXcel_null_rtl* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__wb_result_M 
        = ((0U == (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__wb_result_sel_M))
            ? vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__ex_result_M
            : ((1U == (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__wb_result_sel_M))
                ? (IData)(vlTOPp->dmem___05Frespstream___05Fmsg)
                : ((2U == (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__wb_result_sel_M))
                    ? (IData)(vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT____Vcellout__v__xcel_respstream_msg)
                    : 0U)));
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__ostall_M 
        = ((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_M) 
           & (((0U != (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__dmem_reqstream_type_M)) 
               & (~ (IData)(vlTOPp->dmem___05Frespstream___05Fval))) 
              | ((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__xcelreq_M) 
                 & (~ (IData)(vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__ctrl__DOT__full)))));
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((IData)(vlTOPp->proc2mngr___05Frdy) & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc_proc2mngr_val));
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
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_M 
        = ((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_M) 
           & ((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__ostall_M) 
              | (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__ostall_W)));
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_X 
        = ((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_X) 
           & (((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__ostall_X) 
               | (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__ostall_M)) 
              | (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__ostall_W)));
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass 
        = (((~ (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
            & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq)) 
           & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq));
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_D 
        = ((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_D) 
           & ((((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__ostall_D) 
                | (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__ostall_X)) 
               | (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__ostall_M)) 
              | (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__ostall_W)));
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
    vlTOPp->ProcXcel_null_rtl__DOT__proc_dmem_respstream_rdy 
        = (((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_M) 
            & (~ (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_M))) 
           & (0U != (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__dmem_reqstream_type_M)));
    vlTOPp->ProcXcel_null_rtl__DOT__proc_xcel_respstream_rdy 
        = (((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_M) 
            & (~ (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_M))) 
           & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__xcelreq_M));
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
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = ((~ (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
           & (((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
               & (~ (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass))) 
              | (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlTOPp->mngr2proc___05Frdy = (((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_D) 
                                   & (~ (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_D))) 
                                  & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__mngr2proc_rdy_D));
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul_istream_msg_D 
        = (((QData)((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__op1_D)) 
            << 0x20U) | (QData)((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__op2_D)));
    vlTOPp->dmem___05Frespstream___05Frdy = vlTOPp->ProcXcel_null_rtl__DOT__proc_dmem_respstream_rdy;
    vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc_xcel_respstream_rdy) 
           & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__ctrl__DOT__full));
    vlTOPp->ProcXcel_null_rtl__DOT__xcel_xcel_reqstream_rdy 
        = (1U & ((~ (IData)(vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__ctrl__DOT__full)) 
                 | ((IData)(vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__ctrl__DOT__full) 
                    & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc_xcel_respstream_rdy))));
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
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__squash_F 
        = ((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_F) 
           & ((((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_D) 
                & (~ (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_D))) 
               & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_D)) 
              | (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__osquash_X)));
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

void VProcXcel_null_rtl::_eval(VProcXcel_null_rtl__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcXcel_null_rtl::_eval\n"); );
    VProcXcel_null_rtl* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__2(vlSymsp);
    }
    vlTOPp->_combo__TOP__3(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

VL_INLINE_OPT QData VProcXcel_null_rtl::_change_request(VProcXcel_null_rtl__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcXcel_null_rtl::_change_request\n"); );
    VProcXcel_null_rtl* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VProcXcel_null_rtl::_change_request_1(VProcXcel_null_rtl__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcXcel_null_rtl::_change_request_1\n"); );
    VProcXcel_null_rtl* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VProcXcel_null_rtl::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcXcel_null_rtl::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((dmem___05Freqstream___05Frdy & 0xfeU))) {
        Verilated::overWidthError("dmem__reqstream__rdy");}
    if (VL_UNLIKELY((dmem___05Frespstream___05Fval 
                     & 0xfeU))) {
        Verilated::overWidthError("dmem__respstream__val");}
    if (VL_UNLIKELY((imem___05Freqstream___05Frdy & 0xfeU))) {
        Verilated::overWidthError("imem__reqstream__rdy");}
    if (VL_UNLIKELY((imem___05Frespstream___05Fval 
                     & 0xfeU))) {
        Verilated::overWidthError("imem__respstream__val");}
    if (VL_UNLIKELY((mngr2proc___05Fval & 0xfeU))) {
        Verilated::overWidthError("mngr2proc__val");}
    if (VL_UNLIKELY((proc2mngr___05Frdy & 0xfeU))) {
        Verilated::overWidthError("proc2mngr__rdy");}
    if (VL_UNLIKELY((xmem___05Freqstream___05Frdy & 0xfeU))) {
        Verilated::overWidthError("xmem__reqstream__rdy");}
    if (VL_UNLIKELY((xmem___05Frespstream___05Fval 
                     & 0xfeU))) {
        Verilated::overWidthError("xmem__respstream__val");}
}
#endif  // VL_DEBUG
