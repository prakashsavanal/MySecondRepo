/*
 * Prerelease License - for engineering feedback and testing purposes
 * only. Not for sale.
 *
 * File: BMS_Software_private.h
 *
 * Code generated for Simulink model 'BMS_Software'.
 *
 * Model version                  : 6.36
 * Simulink Coder version         : 9.9 (R2023a) 19-Nov-2022
 * C/C++ source code generated on : Thu Mar  9 18:38:44 2023
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_BMS_Software_private_h_
#define RTW_HEADER_BMS_Software_private_h_
#include "rtwtypes.h"
#include "BMS_Software_types.h"
#include "BMS_Software.h"

extern float32 look1_iflf_binlc(float32 u0, const float32 bp0[], const float32
  table[], uint32 maxIndex);
extern float32 look1_iflf_binlx(float32 u0, const float32 bp0[], const float32
  table[], uint32 maxIndex);
extern void BMS_Software_EnabledSubsystem_Init(boolean *rty_y);
extern void BMS_Software_EnabledSubsystem(boolean rtu_Enable, boolean rtu_u,
  boolean *rty_y);
  extern void BMS_Software_EnabledSubsystem1(boolean rtu_Enable, boolean rtu_u,
  boolean *rty_y);


#endif                                 /* RTW_HEADER_BMS_Software_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
