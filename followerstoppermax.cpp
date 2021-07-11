//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: followerstoppermax.cpp
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
#include "followerstoppermax.h"
#include "followerstoppermax_private.h"

// Block signals (default storage)
B_followerstoppermax_T followerstoppermax_B;

// Block states (default storage)
DW_followerstoppermax_T followerstoppermax_DW;

// Real-time model
RT_MODEL_followerstoppermax_T followerstoppermax_M_ =
  RT_MODEL_followerstoppermax_T();
RT_MODEL_followerstoppermax_T *const followerstoppermax_M =
  &followerstoppermax_M_;

// Model step function
void followerstoppermax_step(void)
{
  SL_Bus_followerstoppermax_std_msgs_Float64 b_varargout_2;
  SL_Bus_followerstoppermax_std_msgs_Float64 rtb_BusAssignment1_n;
  SL_Bus_followerstoppermax_std_msgs_UInt8 rtb_BusAssignment1_a;
  real_T b_idx_0;
  real_T rtb_Subtract1;
  real_T u0;
  real_T value;
  real_T value_0;
  boolean_T b_varargout_1;

  // Outputs for Atomic SubSystem: '<Root>/Subscribe4'
  // MATLABSystem: '<S6>/SourceBlock' incorporates:
  //   Inport: '<S14>/In1'

  b_varargout_1 = Sub_followerstoppermax_430.getLatestMessage
    (&followerstoppermax_B.BusAssignment1);

  // Outputs for Enabled SubSystem: '<S6>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S14>/Enable'

  if (b_varargout_1) {
    followerstoppermax_B.In1_p = followerstoppermax_B.BusAssignment1;
  }

  // End of MATLABSystem: '<S6>/SourceBlock'
  // End of Outputs for SubSystem: '<S6>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<Root>/Subscribe4'

  // Outputs for Atomic SubSystem: '<Root>/Subscribe5'
  // MATLABSystem: '<S7>/SourceBlock' incorporates:
  //   Inport: '<S15>/In1'

  b_varargout_1 = Sub_followerstoppermax_431.getLatestMessage
    (&followerstoppermax_B.BusAssignment1);

  // Outputs for Enabled SubSystem: '<S7>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S15>/Enable'

  if (b_varargout_1) {
    followerstoppermax_B.In1 = followerstoppermax_B.BusAssignment1;
  }

  // End of MATLABSystem: '<S7>/SourceBlock'
  // End of Outputs for SubSystem: '<S7>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<Root>/Subscribe5'

  // Sum: '<Root>/Subtract1'
  rtb_Subtract1 = followerstoppermax_B.In1_p.Linear.Z +
    followerstoppermax_B.In1.Linear.X;

  // Outputs for Atomic SubSystem: '<Root>/Subscribe'
  // MATLABSystem: '<S5>/SourceBlock' incorporates:
  //   Inport: '<S13>/In1'

  b_varargout_1 = Sub_followerstoppermax_429.getLatestMessage(&b_varargout_2);

  // Outputs for Enabled SubSystem: '<S5>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S13>/Enable'

  if (b_varargout_1) {
    followerstoppermax_B.In1_m = b_varargout_2;
  }

  // End of MATLABSystem: '<S5>/SourceBlock'
  // End of Outputs for SubSystem: '<S5>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<Root>/Subscribe'

  // MATLABSystem: '<S2>/Get Parameter2'
  ParamGet_followerstoppermax_448.get_parameter(&followerstoppermax_B.value);

  // MATLABSystem: '<S2>/Get Parameter1'
  ParamGet_followerstoppermax_447.get_parameter(&followerstoppermax_B.x2);

  // MATLABSystem: '<S2>/Get Parameter3'
  ParamGet_followerstoppermax_449.get_parameter(&followerstoppermax_B.x3);

  // MATLABSystem: '<S2>/Get Parameter4'
  ParamGet_followerstoppermax_450.get_parameter(&followerstoppermax_B.x1);

  // MATLABSystem: '<S2>/Get Parameter5'
  ParamGet_followerstoppermax_463.get_parameter(&value);

  // MATLABSystem: '<S2>/Get Parameter6'
  ParamGet_followerstoppermax_465.get_parameter(&value_0);

  // MATLAB Function: '<S2>/MATLAB Function1' incorporates:
  //   MATLABSystem: '<S2>/Get Parameter1'
  //   MATLABSystem: '<S2>/Get Parameter2'
  //   MATLABSystem: '<S2>/Get Parameter3'
  //   MATLABSystem: '<S2>/Get Parameter4'
  //   MATLABSystem: '<S2>/Get Parameter5'
  //   MATLABSystem: '<S2>/Get Parameter6'

  b_idx_0 = followerstoppermax_B.In1_p.Linear.Z;
  if (followerstoppermax_B.In1_p.Linear.Z >= 0.0) {
    b_idx_0 = 0.0;
  }

  u0 = followerstoppermax_B.value * followerstoppermax_B.In1.Linear.X;
  if ((u0 > followerstoppermax_B.x1) || rtIsNaN(followerstoppermax_B.x1)) {
    followerstoppermax_B.x1 = u0;
  }

  b_idx_0 = b_idx_0 * b_idx_0 * 0.5;
  followerstoppermax_B.x1 += b_idx_0 / 1.5;
  u0 = followerstoppermax_B.x2 * followerstoppermax_B.In1.Linear.X;
  if ((u0 > value) || rtIsNaN(value)) {
    value = u0;
  }

  followerstoppermax_B.x2 = b_idx_0 + value;
  u0 = followerstoppermax_B.x3 * followerstoppermax_B.In1.Linear.X;
  if ((u0 > value_0) || rtIsNaN(value_0)) {
    value_0 = u0;
  }

  followerstoppermax_B.x3 = b_idx_0 / 0.5 + value_0;
  value_0 = rtb_Subtract1;
  if (rtb_Subtract1 < 0.0) {
    value_0 = 0.0;
  }

  u0 = 0.0;
  if (followerstoppermax_B.In1_m.Data > followerstoppermax_B.x3) {
    u0 = rtb_Subtract1;
  }

  if ((followerstoppermax_B.In1_m.Data > followerstoppermax_B.x2) &&
      (followerstoppermax_B.In1_m.Data <= followerstoppermax_B.x3)) {
    u0 = (rtb_Subtract1 - value_0) * (followerstoppermax_B.In1_m.Data -
      followerstoppermax_B.x2) / (followerstoppermax_B.x3 -
      followerstoppermax_B.x2) + value_0;
  }

  if ((followerstoppermax_B.In1_m.Data > followerstoppermax_B.x1) &&
      (followerstoppermax_B.In1_m.Data <= followerstoppermax_B.x2)) {
    u0 = (followerstoppermax_B.In1_m.Data - followerstoppermax_B.x1) * value_0 /
      (followerstoppermax_B.x2 - followerstoppermax_B.x1);
  }

  if (followerstoppermax_B.In1_m.Data > followerstoppermax_B.x3) {
    // BusAssignment: '<S3>/Bus Assignment1'
    rtb_BusAssignment1_a.Data = 0U;
  } else if ((followerstoppermax_B.In1_m.Data > followerstoppermax_B.x2) &&
             (followerstoppermax_B.In1_m.Data <= followerstoppermax_B.x3)) {
    // BusAssignment: '<S3>/Bus Assignment1'
    rtb_BusAssignment1_a.Data = 1U;
  } else if ((followerstoppermax_B.In1_m.Data > followerstoppermax_B.x1) &&
             (followerstoppermax_B.In1_m.Data <= followerstoppermax_B.x2)) {
    // BusAssignment: '<S3>/Bus Assignment1'
    rtb_BusAssignment1_a.Data = 2U;
  } else {
    // BusAssignment: '<S3>/Bus Assignment1'
    rtb_BusAssignment1_a.Data = 3U;
  }

  // Outputs for Atomic SubSystem: '<S3>/Publish1'
  // MATLABSystem: '<S12>/SinkBlock'
  Pub_followerstoppermax_406.publish(&rtb_BusAssignment1_a);

  // End of Outputs for SubSystem: '<S3>/Publish1'

  // BusAssignment: '<Root>/Bus Assignment1' incorporates:
  //   Constant: '<Root>/Constant1'
  //   Constant: '<S1>/Constant'
  //   MATLAB Function: '<S2>/MATLAB Function1'

  followerstoppermax_B.BusAssignment1 = followerstoppermax_P.Constant_Value;
  followerstoppermax_B.BusAssignment1.Linear.X = u0;
  followerstoppermax_B.BusAssignment1.Angular.Z =
    followerstoppermax_P.Constant1_Value;

  // Outputs for Atomic SubSystem: '<Root>/Publish1'
  // MATLABSystem: '<S4>/SinkBlock'
  Pub_followerstoppermax_401.publish(&followerstoppermax_B.BusAssignment1);

  // End of Outputs for SubSystem: '<Root>/Publish1'

  // BusAssignment: '<S2>/Bus Assignment1' incorporates:
  //   MATLABSystem: '<S2>/Get Parameter2'

  rtb_BusAssignment1_n.Data = followerstoppermax_B.value;

  // Outputs for Atomic SubSystem: '<S2>/Publish1'
  // MATLABSystem: '<S10>/SinkBlock'
  Pub_followerstoppermax_452.publish(&rtb_BusAssignment1_n);

  // End of Outputs for SubSystem: '<S2>/Publish1'
}

// Model initialize function
void followerstoppermax_initialize(void)
{
  // Registration code

  // initialize non-finites
  rt_InitInfAndNaN(sizeof(real_T));

  {
    int32_T i;
    char_T b_zeroDelimTopic_3[12];
    char_T b_zeroDelimTopic_1[10];
    char_T b_zeroDelimTopic[8];
    char_T b_zeroDelimTopic_2[7];
    char_T b_zeroDelimTopic_0[4];
    char_T b_zeroDelimName[3];
    static const char_T tmp[7] = { 'r', 'e', 'l', '_', 'v', 'e', 'l' };

    static const char_T tmp_0[9] = { 'l', 'e', 'a', 'd', '_', 'd', 'i', 's', 't'
    };

    static const char_T tmp_1[6] = { 'r', 'e', 'g', 'i', 'o', 'n' };

    static const char_T tmp_2[7] = { 'c', 'm', 'd', '_', 'v', 'e', 'l' };

    static const char_T tmp_3[11] = { 't', 'i', 'm', 'h', 'e', 'a', 'd', 'w',
      'a', 'y', '1' };

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe4'
    // SystemInitialize for Enabled SubSystem: '<S6>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S14>/Out1' incorporates:
    //   Inport: '<S14>/In1'

    followerstoppermax_B.In1_p = followerstoppermax_P.Out1_Y0;

    // End of SystemInitialize for SubSystem: '<S6>/Enabled Subsystem'

    // Start for MATLABSystem: '<S6>/SourceBlock'
    followerstoppermax_DW.obj_o.matlabCodegenIsDeleted = false;
    followerstoppermax_DW.obj_o.isInitialized = 1;
    for (i = 0; i < 7; i++) {
      b_zeroDelimTopic[i] = tmp[i];
    }

    b_zeroDelimTopic[7] = '\x00';
    Sub_followerstoppermax_430.createSubscriber(&b_zeroDelimTopic[0], 1);
    followerstoppermax_DW.obj_o.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S6>/SourceBlock'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe4'

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe5'
    // SystemInitialize for Enabled SubSystem: '<S7>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S15>/Out1' incorporates:
    //   Inport: '<S15>/In1'

    followerstoppermax_B.In1 = followerstoppermax_P.Out1_Y0_k;

    // End of SystemInitialize for SubSystem: '<S7>/Enabled Subsystem'

    // Start for MATLABSystem: '<S7>/SourceBlock'
    followerstoppermax_DW.obj_is.matlabCodegenIsDeleted = false;
    followerstoppermax_DW.obj_is.isInitialized = 1;
    b_zeroDelimTopic_0[0] = 'v';
    b_zeroDelimTopic_0[1] = 'e';
    b_zeroDelimTopic_0[2] = 'l';
    b_zeroDelimTopic_0[3] = '\x00';
    Sub_followerstoppermax_431.createSubscriber(&b_zeroDelimTopic_0[0], 1);
    followerstoppermax_DW.obj_is.isSetupComplete = true;

    // End of SystemInitialize for SubSystem: '<Root>/Subscribe5'

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe'
    // SystemInitialize for Enabled SubSystem: '<S5>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S13>/Out1' incorporates:
    //   Inport: '<S13>/In1'

    followerstoppermax_B.In1_m = followerstoppermax_P.Out1_Y0_f;

    // End of SystemInitialize for SubSystem: '<S5>/Enabled Subsystem'

    // Start for MATLABSystem: '<S5>/SourceBlock'
    followerstoppermax_DW.obj_f.matlabCodegenIsDeleted = false;
    followerstoppermax_DW.obj_f.isInitialized = 1;
    for (i = 0; i < 9; i++) {
      b_zeroDelimTopic_1[i] = tmp_0[i];
    }

    b_zeroDelimTopic_1[9] = '\x00';
    Sub_followerstoppermax_429.createSubscriber(&b_zeroDelimTopic_1[0], 1);
    followerstoppermax_DW.obj_f.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S5>/SourceBlock'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe'

    // SystemInitialize for Atomic SubSystem: '<S3>/Publish1'
    // Start for MATLABSystem: '<S12>/SinkBlock'
    followerstoppermax_DW.obj_nc.matlabCodegenIsDeleted = false;
    followerstoppermax_DW.obj_nc.isInitialized = 1;
    for (i = 0; i < 6; i++) {
      b_zeroDelimTopic_2[i] = tmp_1[i];
    }

    b_zeroDelimTopic_2[6] = '\x00';
    Pub_followerstoppermax_406.createPublisher(&b_zeroDelimTopic_2[0], 1);
    followerstoppermax_DW.obj_nc.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S12>/SinkBlock'
    // End of SystemInitialize for SubSystem: '<S3>/Publish1'

    // SystemInitialize for Atomic SubSystem: '<Root>/Publish1'
    // Start for MATLABSystem: '<S4>/SinkBlock'
    followerstoppermax_DW.obj_c.matlabCodegenIsDeleted = false;
    followerstoppermax_DW.obj_c.isInitialized = 1;
    for (i = 0; i < 7; i++) {
      b_zeroDelimTopic[i] = tmp_2[i];
    }

    b_zeroDelimTopic[7] = '\x00';
    Pub_followerstoppermax_401.createPublisher(&b_zeroDelimTopic[0], 1);
    followerstoppermax_DW.obj_c.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S4>/SinkBlock'
    // End of SystemInitialize for SubSystem: '<Root>/Publish1'

    // SystemInitialize for Atomic SubSystem: '<S2>/Publish1'
    // Start for MATLABSystem: '<S10>/SinkBlock'
    followerstoppermax_DW.obj_ij.matlabCodegenIsDeleted = false;
    followerstoppermax_DW.obj_ij.isInitialized = 1;
    for (i = 0; i < 11; i++) {
      b_zeroDelimTopic_3[i] = tmp_3[i];
    }

    b_zeroDelimTopic_3[11] = '\x00';
    Pub_followerstoppermax_452.createPublisher(&b_zeroDelimTopic_3[0], 1);
    followerstoppermax_DW.obj_ij.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S10>/SinkBlock'
    // End of SystemInitialize for SubSystem: '<S2>/Publish1'

    // Start for MATLABSystem: '<S2>/Get Parameter2'
    followerstoppermax_DW.obj_p.matlabCodegenIsDeleted = false;
    followerstoppermax_DW.obj_p.isInitialized = 1;
    b_zeroDelimTopic_0[0] = 't';
    b_zeroDelimTopic_0[1] = 'h';
    b_zeroDelimTopic_0[2] = '1';
    b_zeroDelimTopic_0[3] = '\x00';
    ParamGet_followerstoppermax_448.initialize(&b_zeroDelimTopic_0[0]);
    ParamGet_followerstoppermax_448.initialize_error_codes(0, 1, 2, 3);
    ParamGet_followerstoppermax_448.set_initial_value(0.4);
    followerstoppermax_DW.obj_p.isSetupComplete = true;

    // Start for MATLABSystem: '<S2>/Get Parameter1'
    followerstoppermax_DW.obj_n.matlabCodegenIsDeleted = false;
    followerstoppermax_DW.obj_n.isInitialized = 1;
    b_zeroDelimTopic_0[0] = 't';
    b_zeroDelimTopic_0[1] = 'h';
    b_zeroDelimTopic_0[2] = '2';
    b_zeroDelimTopic_0[3] = '\x00';
    ParamGet_followerstoppermax_447.initialize(&b_zeroDelimTopic_0[0]);
    ParamGet_followerstoppermax_447.initialize_error_codes(0, 1, 2, 3);
    ParamGet_followerstoppermax_447.set_initial_value(1.2);
    followerstoppermax_DW.obj_n.isSetupComplete = true;

    // Start for MATLABSystem: '<S2>/Get Parameter3'
    followerstoppermax_DW.obj_i.matlabCodegenIsDeleted = false;
    followerstoppermax_DW.obj_i.isInitialized = 1;
    b_zeroDelimTopic_0[0] = 't';
    b_zeroDelimTopic_0[1] = 'h';
    b_zeroDelimTopic_0[2] = '3';
    b_zeroDelimTopic_0[3] = '\x00';
    ParamGet_followerstoppermax_449.initialize(&b_zeroDelimTopic_0[0]);
    ParamGet_followerstoppermax_449.initialize_error_codes(0, 1, 2, 3);
    ParamGet_followerstoppermax_449.set_initial_value(1.8);
    followerstoppermax_DW.obj_i.isSetupComplete = true;

    // Start for MATLABSystem: '<S2>/Get Parameter4'
    followerstoppermax_DW.obj_k.matlabCodegenIsDeleted = false;
    followerstoppermax_DW.obj_k.isInitialized = 1;
    b_zeroDelimName[0] = 'w';
    b_zeroDelimName[1] = '1';
    b_zeroDelimName[2] = '\x00';
    ParamGet_followerstoppermax_450.initialize(&b_zeroDelimName[0]);
    ParamGet_followerstoppermax_450.initialize_error_codes(0, 1, 2, 3);
    ParamGet_followerstoppermax_450.set_initial_value(4.5);
    followerstoppermax_DW.obj_k.isSetupComplete = true;

    // Start for MATLABSystem: '<S2>/Get Parameter5'
    followerstoppermax_DW.obj_e.matlabCodegenIsDeleted = false;
    followerstoppermax_DW.obj_e.isInitialized = 1;
    b_zeroDelimName[0] = 'w';
    b_zeroDelimName[1] = '2';
    b_zeroDelimName[2] = '\x00';
    ParamGet_followerstoppermax_463.initialize(&b_zeroDelimName[0]);
    ParamGet_followerstoppermax_463.initialize_error_codes(0, 1, 2, 3);
    ParamGet_followerstoppermax_463.set_initial_value(5.25);
    followerstoppermax_DW.obj_e.isSetupComplete = true;

    // Start for MATLABSystem: '<S2>/Get Parameter6'
    followerstoppermax_DW.obj.matlabCodegenIsDeleted = false;
    followerstoppermax_DW.obj.isInitialized = 1;
    b_zeroDelimName[0] = 'w';
    b_zeroDelimName[1] = '3';
    b_zeroDelimName[2] = '\x00';
    ParamGet_followerstoppermax_465.initialize(&b_zeroDelimName[0]);
    ParamGet_followerstoppermax_465.initialize_error_codes(0, 1, 2, 3);
    ParamGet_followerstoppermax_465.set_initial_value(6.0);
    followerstoppermax_DW.obj.isSetupComplete = true;
  }
}

// Model terminate function
void followerstoppermax_terminate(void)
{
  // Terminate for Atomic SubSystem: '<Root>/Subscribe4'
  // Terminate for MATLABSystem: '<S6>/SourceBlock'
  if (!followerstoppermax_DW.obj_o.matlabCodegenIsDeleted) {
    followerstoppermax_DW.obj_o.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S6>/SourceBlock'
  // End of Terminate for SubSystem: '<Root>/Subscribe4'

  // Terminate for Atomic SubSystem: '<Root>/Subscribe5'
  // Terminate for MATLABSystem: '<S7>/SourceBlock'
  if (!followerstoppermax_DW.obj_is.matlabCodegenIsDeleted) {
    followerstoppermax_DW.obj_is.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S7>/SourceBlock'
  // End of Terminate for SubSystem: '<Root>/Subscribe5'

  // Terminate for Atomic SubSystem: '<Root>/Subscribe'
  // Terminate for MATLABSystem: '<S5>/SourceBlock'
  if (!followerstoppermax_DW.obj_f.matlabCodegenIsDeleted) {
    followerstoppermax_DW.obj_f.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S5>/SourceBlock'
  // End of Terminate for SubSystem: '<Root>/Subscribe'

  // Terminate for MATLABSystem: '<S2>/Get Parameter2'
  if (!followerstoppermax_DW.obj_p.matlabCodegenIsDeleted) {
    followerstoppermax_DW.obj_p.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S2>/Get Parameter2'

  // Terminate for MATLABSystem: '<S2>/Get Parameter1'
  if (!followerstoppermax_DW.obj_n.matlabCodegenIsDeleted) {
    followerstoppermax_DW.obj_n.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S2>/Get Parameter1'

  // Terminate for MATLABSystem: '<S2>/Get Parameter3'
  if (!followerstoppermax_DW.obj_i.matlabCodegenIsDeleted) {
    followerstoppermax_DW.obj_i.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S2>/Get Parameter3'

  // Terminate for MATLABSystem: '<S2>/Get Parameter4'
  if (!followerstoppermax_DW.obj_k.matlabCodegenIsDeleted) {
    followerstoppermax_DW.obj_k.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S2>/Get Parameter4'

  // Terminate for MATLABSystem: '<S2>/Get Parameter5'
  if (!followerstoppermax_DW.obj_e.matlabCodegenIsDeleted) {
    followerstoppermax_DW.obj_e.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S2>/Get Parameter5'

  // Terminate for MATLABSystem: '<S2>/Get Parameter6'
  if (!followerstoppermax_DW.obj.matlabCodegenIsDeleted) {
    followerstoppermax_DW.obj.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S2>/Get Parameter6'

  // Terminate for Atomic SubSystem: '<S3>/Publish1'
  // Terminate for MATLABSystem: '<S12>/SinkBlock'
  if (!followerstoppermax_DW.obj_nc.matlabCodegenIsDeleted) {
    followerstoppermax_DW.obj_nc.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S12>/SinkBlock'
  // End of Terminate for SubSystem: '<S3>/Publish1'

  // Terminate for Atomic SubSystem: '<Root>/Publish1'
  // Terminate for MATLABSystem: '<S4>/SinkBlock'
  if (!followerstoppermax_DW.obj_c.matlabCodegenIsDeleted) {
    followerstoppermax_DW.obj_c.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S4>/SinkBlock'
  // End of Terminate for SubSystem: '<Root>/Publish1'

  // Terminate for Atomic SubSystem: '<S2>/Publish1'
  // Terminate for MATLABSystem: '<S10>/SinkBlock'
  if (!followerstoppermax_DW.obj_ij.matlabCodegenIsDeleted) {
    followerstoppermax_DW.obj_ij.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S10>/SinkBlock'
  // End of Terminate for SubSystem: '<S2>/Publish1'
}

//
// File trailer for generated code.
//
// [EOF]
//
