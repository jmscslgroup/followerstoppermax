//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: followerstoppermax.h
//
// Code generated for Simulink model 'followerstoppermax'.
//
// Model version                  : 3.42
// Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
// C/C++ source code generated on : Sun Jul 11 14:28:53 2021
//
// Target selection: ert.tlc
// Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_followerstoppermax_h_
#define RTW_HEADER_followerstoppermax_h_
#include <stddef.h>
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "slros_initialize.h"
#include "followerstoppermax_types.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

// Macros for accessing real-time model data structure
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

// Block signals (default storage)
struct B_followerstoppermax_T {
  SL_Bus_followerstoppermax_geometry_msgs_Twist In1;// '<S15>/In1'
  SL_Bus_followerstoppermax_geometry_msgs_Twist In1_p;// '<S14>/In1'
  SL_Bus_followerstoppermax_geometry_msgs_Twist BusAssignment1;// '<Root>/Bus Assignment1' 
  real_T x1;
  real_T x2;
  real_T x3;
  real_T value;
  SL_Bus_followerstoppermax_std_msgs_Float64 In1_m;// '<S13>/In1'
};

// Block states (default storage) for system '<Root>'
struct DW_followerstoppermax_T {
  ros_slros_internal_block_GetP_T obj; // '<S2>/Get Parameter6'
  ros_slros_internal_block_GetP_T obj_e;// '<S2>/Get Parameter5'
  ros_slros_internal_block_GetP_T obj_k;// '<S2>/Get Parameter4'
  ros_slros_internal_block_GetP_T obj_i;// '<S2>/Get Parameter3'
  ros_slros_internal_block_GetP_T obj_p;// '<S2>/Get Parameter2'
  ros_slros_internal_block_GetP_T obj_n;// '<S2>/Get Parameter1'
  ros_slroscpp_internal_block_P_T obj_c;// '<S4>/SinkBlock'
  ros_slroscpp_internal_block_P_T obj_nc;// '<S12>/SinkBlock'
  ros_slroscpp_internal_block_P_T obj_ij;// '<S10>/SinkBlock'
  ros_slroscpp_internal_block_S_T obj_is;// '<S7>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_o;// '<S6>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_f;// '<S5>/SourceBlock'
};

// Parameters (default storage)
struct P_followerstoppermax_T_ {
  SL_Bus_followerstoppermax_geometry_msgs_Twist Constant_Value;// Computed Parameter: Constant_Value
                                                                  //  Referenced by: '<S1>/Constant'

  SL_Bus_followerstoppermax_geometry_msgs_Twist Out1_Y0;// Computed Parameter: Out1_Y0
                                                           //  Referenced by: '<S14>/Out1'

  SL_Bus_followerstoppermax_geometry_msgs_Twist Constant_Value_p;// Computed Parameter: Constant_Value_p
                                                                    //  Referenced by: '<S6>/Constant'

  SL_Bus_followerstoppermax_geometry_msgs_Twist Out1_Y0_k;// Computed Parameter: Out1_Y0_k
                                                             //  Referenced by: '<S15>/Out1'

  SL_Bus_followerstoppermax_geometry_msgs_Twist Constant_Value_pq;// Computed Parameter: Constant_Value_pq
                                                                     //  Referenced by: '<S7>/Constant'

  SL_Bus_followerstoppermax_std_msgs_Float64 Constant_Value_d;// Computed Parameter: Constant_Value_d
                                                                 //  Referenced by: '<S8>/Constant'

  SL_Bus_followerstoppermax_std_msgs_Float64 Out1_Y0_f;// Computed Parameter: Out1_Y0_f
                                                          //  Referenced by: '<S13>/Out1'

  SL_Bus_followerstoppermax_std_msgs_Float64 Constant_Value_k;// Computed Parameter: Constant_Value_k
                                                                 //  Referenced by: '<S5>/Constant'

  SL_Bus_followerstoppermax_std_msgs_UInt8 Constant_Value_m;// Computed Parameter: Constant_Value_m
                                                               //  Referenced by: '<S11>/Constant'

  real_T Constant1_Value;              // Expression: 0
                                          //  Referenced by: '<Root>/Constant1'

};

// Real-time Model Data Structure
struct tag_RTM_followerstoppermax_T {
  const char_T *errorStatus;
};

// Block parameters (default storage)
#ifdef __cplusplus

extern "C" {

#endif

  extern P_followerstoppermax_T followerstoppermax_P;

#ifdef __cplusplus

}
#endif

// Block signals (default storage)
#ifdef __cplusplus

extern "C" {

#endif

  extern struct B_followerstoppermax_T followerstoppermax_B;

#ifdef __cplusplus

}
#endif

// Block states (default storage)
extern struct DW_followerstoppermax_T followerstoppermax_DW;

#ifdef __cplusplus

extern "C" {

#endif

  // Model entry point functions
  extern void followerstoppermax_initialize(void);
  extern void followerstoppermax_step(void);
  extern void followerstoppermax_terminate(void);

#ifdef __cplusplus

}
#endif

// Real-time Model object
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL_followerstoppermax_T *const followerstoppermax_M;

#ifdef __cplusplus

}
#endif

//-
//  The generated code includes comments that allow you to trace directly
//  back to the appropriate location in the model.  The basic format
//  is <system>/block_name, where system is the system number (uniquely
//  assigned by Simulink) and block_name is the name of the block.
//
//  Use the MATLAB hilite_system command to trace the generated code back
//  to the model.  For example,
//
//  hilite_system('<S3>')    - opens system 3
//  hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
//
//  Here is the system hierarchy for this model
//
//  '<Root>' : 'followerstoppermax'
//  '<S1>'   : 'followerstoppermax/Blank Message1'
//  '<S2>'   : 'followerstoppermax/Follower StopperMax Switch'
//  '<S3>'   : 'followerstoppermax/Publish Region1'
//  '<S4>'   : 'followerstoppermax/Publish1'
//  '<S5>'   : 'followerstoppermax/Subscribe'
//  '<S6>'   : 'followerstoppermax/Subscribe4'
//  '<S7>'   : 'followerstoppermax/Subscribe5'
//  '<S8>'   : 'followerstoppermax/Follower StopperMax Switch/Blank Message1'
//  '<S9>'   : 'followerstoppermax/Follower StopperMax Switch/MATLAB Function1'
//  '<S10>'  : 'followerstoppermax/Follower StopperMax Switch/Publish1'
//  '<S11>'  : 'followerstoppermax/Publish Region1/Blank Message1'
//  '<S12>'  : 'followerstoppermax/Publish Region1/Publish1'
//  '<S13>'  : 'followerstoppermax/Subscribe/Enabled Subsystem'
//  '<S14>'  : 'followerstoppermax/Subscribe4/Enabled Subsystem'
//  '<S15>'  : 'followerstoppermax/Subscribe5/Enabled Subsystem'

#endif                                 // RTW_HEADER_followerstoppermax_h_

//
// File trailer for generated code.
//
// [EOF]
//
