/**
  ******************************************************************************
  * @file    network.c
  * @author  AST Embedded Analytics Research Platform
  * @date    Sun Sep 26 09:53:43 2021
  * @brief   AI Tool Automatic Code Generator for Embedded NN computing
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2021 STMicroelectronics.
  * All rights reserved.
  *
  * This software component is licensed by ST under Ultimate Liberty license
  * SLA0044, the "License"; You may not use this file except in compliance with
  * the License. You may obtain a copy of the License at:
  *                             www.st.com/SLA0044
  *
  ******************************************************************************
  */


#include "network.h"

#include "ai_platform_interface.h"
#include "ai_math_helpers.h"

#include "core_common.h"
#include "core_convert.h"

#include "layers.h"




#undef AI_NET_OBJ_INSTANCE
#define AI_NET_OBJ_INSTANCE g_network
 
#undef AI_NETWORK_MODEL_SIGNATURE
#define AI_NETWORK_MODEL_SIGNATURE     "6335eec134166ca0f3ffd2fcf267982b"

#ifndef AI_TOOLS_REVISION_ID
#define AI_TOOLS_REVISION_ID     ""
#endif

#undef AI_TOOLS_DATE_TIME
#define AI_TOOLS_DATE_TIME   "Sun Sep 26 09:53:43 2021"

#undef AI_TOOLS_COMPILE_TIME
#define AI_TOOLS_COMPILE_TIME    __DATE__ " " __TIME__

#undef AI_NETWORK_N_BATCHES
#define AI_NETWORK_N_BATCHES         (1)




/**  Array declarations section  **********************************************/
/* Array#0 */
AI_ARRAY_OBJ_DECLARE(
  mobilenetv2_0_35_224_input_output_array, AI_ARRAY_FORMAT_S8|AI_FMT_FLAG_IS_IO,
  NULL, NULL, 150528, AI_STATIC)

/* Array#1 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_1_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 200704, AI_STATIC)

/* Array#2 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_2_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 200704, AI_STATIC)

/* Array#3 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_3_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 100352, AI_STATIC)

/* Array#4 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_4_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 602112, AI_STATIC)

/* Array#5 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_6_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 150528, AI_STATIC)

/* Array#6 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_7_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 25088, AI_STATIC)

/* Array#7 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_8_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 150528, AI_STATIC)

/* Array#8 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_9_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 150528, AI_STATIC)

/* Array#9 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_10_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 25088, AI_STATIC)

/* Array#10 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_11_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 25088, AI_STATIC)

/* Array#11 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_12_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 150528, AI_STATIC)

/* Array#12 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_14_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 37632, AI_STATIC)

/* Array#13 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_15_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 12544, AI_STATIC)

/* Array#14 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_16_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 75264, AI_STATIC)

/* Array#15 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_17_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 75264, AI_STATIC)

/* Array#16 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_18_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 12544, AI_STATIC)

/* Array#17 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_19_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 12544, AI_STATIC)

/* Array#18 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_20_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 75264, AI_STATIC)

/* Array#19 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_21_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 75264, AI_STATIC)

/* Array#20 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_22_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 12544, AI_STATIC)

/* Array#21 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_23_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 12544, AI_STATIC)

/* Array#22 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_24_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 75264, AI_STATIC)

/* Array#23 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_26_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 18816, AI_STATIC)

/* Array#24 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_27_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 4704, AI_STATIC)

/* Array#25 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_28_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 28224, AI_STATIC)

/* Array#26 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_29_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 28224, AI_STATIC)

/* Array#27 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_30_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 4704, AI_STATIC)

/* Array#28 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_31_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 4704, AI_STATIC)

/* Array#29 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_32_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 28224, AI_STATIC)

/* Array#30 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_33_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 28224, AI_STATIC)

/* Array#31 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_34_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 4704, AI_STATIC)

/* Array#32 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_35_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 4704, AI_STATIC)

/* Array#33 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_36_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 28224, AI_STATIC)

/* Array#34 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_37_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 28224, AI_STATIC)

/* Array#35 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_38_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 4704, AI_STATIC)

/* Array#36 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_39_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 4704, AI_STATIC)

/* Array#37 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_40_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 28224, AI_STATIC)

/* Array#38 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_41_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 28224, AI_STATIC)

/* Array#39 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_42_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 6272, AI_STATIC)

/* Array#40 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_43_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 37632, AI_STATIC)

/* Array#41 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_44_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 37632, AI_STATIC)

/* Array#42 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_45_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 6272, AI_STATIC)

/* Array#43 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_46_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 6272, AI_STATIC)

/* Array#44 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_47_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 37632, AI_STATIC)

/* Array#45 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_48_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 37632, AI_STATIC)

/* Array#46 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_49_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 6272, AI_STATIC)

/* Array#47 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_50_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 6272, AI_STATIC)

/* Array#48 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_51_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 37632, AI_STATIC)

/* Array#49 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_53_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 9408, AI_STATIC)

/* Array#50 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_54_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 2744, AI_STATIC)

/* Array#51 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_55_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 16464, AI_STATIC)

/* Array#52 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_56_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 16464, AI_STATIC)

/* Array#53 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_57_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 2744, AI_STATIC)

/* Array#54 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_58_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 2744, AI_STATIC)

/* Array#55 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_59_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 16464, AI_STATIC)

/* Array#56 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_60_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 16464, AI_STATIC)

/* Array#57 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_61_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 2744, AI_STATIC)

/* Array#58 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_62_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 2744, AI_STATIC)

/* Array#59 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_63_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 16464, AI_STATIC)

/* Array#60 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_64_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 16464, AI_STATIC)

/* Array#61 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_65_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 5488, AI_STATIC)

/* Array#62 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_66_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1280, AI_STATIC)

/* Array#63 */
AI_ARRAY_OBJ_DECLARE(
  dense_68_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 13, AI_STATIC)

/* Array#64 */
AI_ARRAY_OBJ_DECLARE(
  dense_68_fmt_conv_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 13, AI_STATIC)

/* Array#65 */
AI_ARRAY_OBJ_DECLARE(
  nl_69_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 13, AI_STATIC)

/* Array#66 */
AI_ARRAY_OBJ_DECLARE(
  nl_69_fmt_conv_output_array, AI_ARRAY_FORMAT_S8|AI_FMT_FLAG_IS_IO,
  NULL, NULL, 13, AI_STATIC)

/* Array#67 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_1_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 432, AI_STATIC)

/* Array#68 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_1_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 16, AI_STATIC)

/* Array#69 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_2_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 144, AI_STATIC)

/* Array#70 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_2_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 16, AI_STATIC)

/* Array#71 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_3_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 128, AI_STATIC)

/* Array#72 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_3_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 8, AI_STATIC)

/* Array#73 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_4_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 384, AI_STATIC)

/* Array#74 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_4_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 48, AI_STATIC)

/* Array#75 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_6_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 432, AI_STATIC)

/* Array#76 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_6_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 48, AI_STATIC)

/* Array#77 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_7_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 384, AI_STATIC)

/* Array#78 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_7_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 8, AI_STATIC)

/* Array#79 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_8_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 384, AI_STATIC)

/* Array#80 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_8_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 48, AI_STATIC)

/* Array#81 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_9_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 432, AI_STATIC)

/* Array#82 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_9_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 48, AI_STATIC)

/* Array#83 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_10_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 384, AI_STATIC)

/* Array#84 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_10_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 8, AI_STATIC)

/* Array#85 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_12_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 384, AI_STATIC)

/* Array#86 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_12_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 48, AI_STATIC)

/* Array#87 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_14_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 432, AI_STATIC)

/* Array#88 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_14_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 48, AI_STATIC)

/* Array#89 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_15_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 768, AI_STATIC)

/* Array#90 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_15_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 16, AI_STATIC)

/* Array#91 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_16_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1536, AI_STATIC)

/* Array#92 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_16_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 96, AI_STATIC)

/* Array#93 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_17_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 864, AI_STATIC)

/* Array#94 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_17_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 96, AI_STATIC)

/* Array#95 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_18_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1536, AI_STATIC)

/* Array#96 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_18_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 16, AI_STATIC)

/* Array#97 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_20_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1536, AI_STATIC)

/* Array#98 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_20_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 96, AI_STATIC)

/* Array#99 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_21_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 864, AI_STATIC)

/* Array#100 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_21_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 96, AI_STATIC)

/* Array#101 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_22_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1536, AI_STATIC)

/* Array#102 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_22_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 16, AI_STATIC)

/* Array#103 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_24_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1536, AI_STATIC)

/* Array#104 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_24_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 96, AI_STATIC)

/* Array#105 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_26_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 864, AI_STATIC)

/* Array#106 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_26_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 96, AI_STATIC)

/* Array#107 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_27_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 2304, AI_STATIC)

/* Array#108 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_27_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 24, AI_STATIC)

/* Array#109 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_28_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3456, AI_STATIC)

/* Array#110 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_28_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 144, AI_STATIC)

/* Array#111 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_29_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1296, AI_STATIC)

/* Array#112 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_29_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 144, AI_STATIC)

/* Array#113 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_30_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3456, AI_STATIC)

/* Array#114 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_30_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 24, AI_STATIC)

/* Array#115 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_32_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3456, AI_STATIC)

/* Array#116 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_32_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 144, AI_STATIC)

/* Array#117 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_33_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1296, AI_STATIC)

/* Array#118 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_33_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 144, AI_STATIC)

/* Array#119 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_34_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3456, AI_STATIC)

/* Array#120 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_34_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 24, AI_STATIC)

/* Array#121 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_36_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3456, AI_STATIC)

/* Array#122 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_36_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 144, AI_STATIC)

/* Array#123 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_37_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1296, AI_STATIC)

/* Array#124 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_37_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 144, AI_STATIC)

/* Array#125 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_38_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3456, AI_STATIC)

/* Array#126 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_38_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 24, AI_STATIC)

/* Array#127 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_40_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3456, AI_STATIC)

/* Array#128 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_40_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 144, AI_STATIC)

/* Array#129 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_41_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1296, AI_STATIC)

/* Array#130 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_41_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 144, AI_STATIC)

/* Array#131 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_42_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 4608, AI_STATIC)

/* Array#132 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_42_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 32, AI_STATIC)

/* Array#133 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_43_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 6144, AI_STATIC)

/* Array#134 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_43_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 192, AI_STATIC)

/* Array#135 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_44_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1728, AI_STATIC)

/* Array#136 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_44_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 192, AI_STATIC)

/* Array#137 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_45_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 6144, AI_STATIC)

/* Array#138 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_45_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 32, AI_STATIC)

/* Array#139 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_47_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 6144, AI_STATIC)

/* Array#140 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_47_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 192, AI_STATIC)

/* Array#141 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_48_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1728, AI_STATIC)

/* Array#142 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_48_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 192, AI_STATIC)

/* Array#143 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_49_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 6144, AI_STATIC)

/* Array#144 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_49_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 32, AI_STATIC)

/* Array#145 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_51_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 6144, AI_STATIC)

/* Array#146 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_51_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 192, AI_STATIC)

/* Array#147 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_53_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1728, AI_STATIC)

/* Array#148 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_53_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 192, AI_STATIC)

/* Array#149 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_54_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 10752, AI_STATIC)

/* Array#150 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_54_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 56, AI_STATIC)

/* Array#151 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_55_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 18816, AI_STATIC)

/* Array#152 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_55_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 336, AI_STATIC)

/* Array#153 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_56_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3024, AI_STATIC)

/* Array#154 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_56_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 336, AI_STATIC)

/* Array#155 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_57_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 18816, AI_STATIC)

/* Array#156 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_57_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 56, AI_STATIC)

/* Array#157 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_59_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 18816, AI_STATIC)

/* Array#158 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_59_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 336, AI_STATIC)

/* Array#159 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_60_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3024, AI_STATIC)

/* Array#160 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_60_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 336, AI_STATIC)

/* Array#161 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_61_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 18816, AI_STATIC)

/* Array#162 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_61_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 56, AI_STATIC)

/* Array#163 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_63_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 18816, AI_STATIC)

/* Array#164 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_63_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 336, AI_STATIC)

/* Array#165 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_64_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3024, AI_STATIC)

/* Array#166 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_64_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 336, AI_STATIC)

/* Array#167 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_65_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 37632, AI_STATIC)

/* Array#168 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_65_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 112, AI_STATIC)

/* Array#169 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_66_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 143360, AI_STATIC)

/* Array#170 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_66_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 1280, AI_STATIC)

/* Array#171 */
AI_ARRAY_OBJ_DECLARE(
  dense_68_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 16640, AI_STATIC)

/* Array#172 */
AI_ARRAY_OBJ_DECLARE(
  dense_68_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 13, AI_STATIC)

/* Array#173 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_1_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1196, AI_STATIC)

/* Array#174 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_1_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 200704, AI_STATIC)

/* Array#175 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_2_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 593, AI_STATIC)

/* Array#176 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_2_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 200704, AI_STATIC)

/* Array#177 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_3_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 144, AI_STATIC)

/* Array#178 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_4_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 512, AI_STATIC)

/* Array#179 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_4_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 602112, AI_STATIC)

/* Array#180 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_6_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1777, AI_STATIC)

/* Array#181 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_6_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 150528, AI_STATIC)

/* Array#182 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_7_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 272, AI_STATIC)

/* Array#183 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_8_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 512, AI_STATIC)

/* Array#184 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_8_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 150528, AI_STATIC)

/* Array#185 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_9_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1777, AI_STATIC)

/* Array#186 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_9_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 150528, AI_STATIC)

/* Array#187 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_10_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 272, AI_STATIC)

/* Array#188 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_12_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 512, AI_STATIC)

/* Array#189 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_12_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 150528, AI_STATIC)

/* Array#190 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_14_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1777, AI_STATIC)

/* Array#191 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_15_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 352, AI_STATIC)

/* Array#192 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_16_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1024, AI_STATIC)

/* Array#193 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_16_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 75264, AI_STATIC)

/* Array#194 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_17_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3553, AI_STATIC)

/* Array#195 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_17_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 75264, AI_STATIC)

/* Array#196 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_18_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 544, AI_STATIC)

/* Array#197 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_20_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1024, AI_STATIC)

/* Array#198 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_20_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 75264, AI_STATIC)

/* Array#199 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_21_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3553, AI_STATIC)

/* Array#200 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_21_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 75264, AI_STATIC)

/* Array#201 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_22_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 544, AI_STATIC)

/* Array#202 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_24_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1024, AI_STATIC)

/* Array#203 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_24_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 75264, AI_STATIC)

/* Array#204 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_26_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3553, AI_STATIC)

/* Array#205 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_26_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 18816, AI_STATIC)

/* Array#206 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_27_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 624, AI_STATIC)

/* Array#207 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_28_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1536, AI_STATIC)

/* Array#208 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_28_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 28224, AI_STATIC)

/* Array#209 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_29_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 5329, AI_STATIC)

/* Array#210 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_29_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 28224, AI_STATIC)

/* Array#211 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_30_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 816, AI_STATIC)

/* Array#212 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_32_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1536, AI_STATIC)

/* Array#213 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_32_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 28224, AI_STATIC)

/* Array#214 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_33_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 5329, AI_STATIC)

/* Array#215 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_33_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 28224, AI_STATIC)

/* Array#216 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_34_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 816, AI_STATIC)

/* Array#217 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_36_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1536, AI_STATIC)

/* Array#218 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_36_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 28224, AI_STATIC)

/* Array#219 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_37_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 5329, AI_STATIC)

/* Array#220 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_37_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 28224, AI_STATIC)

/* Array#221 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_38_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 816, AI_STATIC)

/* Array#222 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_40_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1536, AI_STATIC)

/* Array#223 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_40_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 28224, AI_STATIC)

/* Array#224 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_41_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 5329, AI_STATIC)

/* Array#225 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_41_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 28224, AI_STATIC)

/* Array#226 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_42_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 896, AI_STATIC)

/* Array#227 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_43_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 2048, AI_STATIC)

/* Array#228 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_44_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 7105, AI_STATIC)

/* Array#229 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_44_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 37632, AI_STATIC)

/* Array#230 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_45_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1088, AI_STATIC)

/* Array#231 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_47_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 2048, AI_STATIC)

/* Array#232 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_47_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 37632, AI_STATIC)

/* Array#233 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_48_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 7105, AI_STATIC)

/* Array#234 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_48_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 37632, AI_STATIC)

/* Array#235 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_49_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1088, AI_STATIC)

/* Array#236 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_51_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 2048, AI_STATIC)

/* Array#237 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_51_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 37632, AI_STATIC)

/* Array#238 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_53_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 7105, AI_STATIC)

/* Array#239 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_53_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 9408, AI_STATIC)

/* Array#240 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_54_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1328, AI_STATIC)

/* Array#241 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_55_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3584, AI_STATIC)

/* Array#242 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_55_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 16464, AI_STATIC)

/* Array#243 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_56_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 12433, AI_STATIC)

/* Array#244 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_57_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1904, AI_STATIC)

/* Array#245 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_59_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3584, AI_STATIC)

/* Array#246 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_60_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 12433, AI_STATIC)

/* Array#247 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_61_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1904, AI_STATIC)

/* Array#248 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_63_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3584, AI_STATIC)

/* Array#249 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_63_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 16464, AI_STATIC)

/* Array#250 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_64_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 12433, AI_STATIC)

/* Array#251 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_64_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 16464, AI_STATIC)

/* Array#252 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_65_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 2464, AI_STATIC)

/* Array#253 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_66_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 13248, AI_STATIC)

/* Array#254 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_66_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 62720, AI_STATIC)

/* Array#255 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_66_scratch2_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 62720, AI_STATIC)

/**  Array metadata declarations section  *************************************/
/* Int quant #0 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(mobilenetv2_0_35_224_input_output_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003921568859368563f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #1 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_1_output_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #2 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_2_output_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #3 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_3_output_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.40797877311706543f),
    AI_PACK_INTQ_ZP(-15)))

/* Int quant #4 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_4_output_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #5 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_6_output_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #6 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_7_output_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.2500597834587097f),
    AI_PACK_INTQ_ZP(-15)))

/* Int quant #7 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_8_output_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #8 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_9_output_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #9 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_10_output_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.2276049703359604f),
    AI_PACK_INTQ_ZP(7)))

/* Int quant #10 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_11_output_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.29964569211006165f),
    AI_PACK_INTQ_ZP(-11)))

/* Int quant #11 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_12_output_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #12 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_14_output_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.023157231509685516f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #13 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_15_output_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.1499505490064621f),
    AI_PACK_INTQ_ZP(-31)))

/* Int quant #14 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_16_output_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #15 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_17_output_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #16 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_18_output_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.20341141521930695f),
    AI_PACK_INTQ_ZP(-4)))

/* Int quant #17 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_19_output_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.2198566496372223f),
    AI_PACK_INTQ_ZP(-11)))

/* Int quant #18 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_20_output_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #19 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_21_output_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #20 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_22_output_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.21066637337207794f),
    AI_PACK_INTQ_ZP(21)))

/* Int quant #21 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_23_output_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.28085583448410034f),
    AI_PACK_INTQ_ZP(-13)))

/* Int quant #22 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_24_output_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #23 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_26_output_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #24 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_27_output_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.187437504529953f),
    AI_PACK_INTQ_ZP(14)))

/* Int quant #25 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_28_output_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #26 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_29_output_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #27 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_30_output_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.14555038511753082f),
    AI_PACK_INTQ_ZP(-8)))

/* Int quant #28 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_31_output_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.18711727857589722f),
    AI_PACK_INTQ_ZP(14)))

/* Int quant #29 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_32_output_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.02348734252154827f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #30 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_33_output_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #31 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_34_output_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.10433007776737213f),
    AI_PACK_INTQ_ZP(-12)))

/* Int quant #32 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_35_output_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.20468980073928833f),
    AI_PACK_INTQ_ZP(10)))

/* Int quant #33 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_36_output_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #34 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_37_output_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #35 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_38_output_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.1371602565050125f),
    AI_PACK_INTQ_ZP(-29)))

/* Int quant #36 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_39_output_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.27503499388694763f),
    AI_PACK_INTQ_ZP(-15)))

/* Int quant #37 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_40_output_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #38 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_41_output_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #39 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_42_output_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.11103542149066925f),
    AI_PACK_INTQ_ZP(6)))

/* Int quant #40 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_43_output_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.019947689026594162f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #41 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_44_output_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #42 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_45_output_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.1349281370639801f),
    AI_PACK_INTQ_ZP(6)))

/* Int quant #43 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_46_output_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.16044031083583832f),
    AI_PACK_INTQ_ZP(3)))

/* Int quant #44 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_47_output_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #45 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_48_output_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #46 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_49_output_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.12533211708068848f),
    AI_PACK_INTQ_ZP(-5)))

/* Int quant #47 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_50_output_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.1808622181415558f),
    AI_PACK_INTQ_ZP(4)))

/* Int quant #48 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_51_output_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #49 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_53_output_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #50 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_54_output_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.09467997401952744f),
    AI_PACK_INTQ_ZP(-7)))

/* Int quant #51 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_55_output_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #52 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_56_output_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.021907024085521698f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #53 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_57_output_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.08063366264104843f),
    AI_PACK_INTQ_ZP(10)))

/* Int quant #54 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_58_output_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.11502450704574585f),
    AI_PACK_INTQ_ZP(2)))

/* Int quant #55 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_59_output_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0210769884288311f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #56 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_60_output_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.01742846891283989f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #57 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_61_output_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.08253728598356247f),
    AI_PACK_INTQ_ZP(4)))

/* Int quant #58 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_62_output_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.11290480941534042f),
    AI_PACK_INTQ_ZP(1)))

/* Int quant #59 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_63_output_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #60 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_64_output_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #61 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_65_output_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.07478109747171402f),
    AI_PACK_INTQ_ZP(-9)))

/* Int quant #62 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_66_output_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.022642964497208595f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #63 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(dense_68_output_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.12050916254520416f),
    AI_PACK_INTQ_ZP(106)))

/* Int quant #64 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(nl_69_fmt_conv_output_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.00390625f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #65 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_1_weights_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 16,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.006357043515890837f, 0.01532160583883524f, 0.0066710710525512695f, 5.02283796777192e-07f, 0.006800525821745396f, 3.6374612477629853e-07f, 0.0034435198176652193f, 3.6614263621004284e-08f, 0.003978225868195295f, 0.015115455724298954f, 0.004665786400437355f, 3.762918936445203e-07f, 0.010604714043438435f, 8.543527485471714e-08f, 0.0059135183691978455f, 0.015915120020508766f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #66 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_1_bias_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 16,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(2.4929584469646215e-05f, 6.008473064866848e-05f, 2.6161063942709006e-05f, 1.9697405928553735e-09f, 2.666873115231283e-05f, 1.4264555092680098e-09f, 1.3503999980457593e-05f, 1.435853519415886e-10f, 1.560088639962487e-05f, 5.927629899815656e-05f, 1.829720349633135e-05f, 1.4756545985150638e-09f, 4.158711453783326e-05f, 3.3504030105824256e-10f, 2.319026862096507e-05f, 6.241224036784843e-05f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #67 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_2_weights_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 16,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.011045568622648716f, 0.005878211464732885f, 0.010417761281132698f, 0.17514193058013916f, 0.011570106260478497f, 0.16459959745407104f, 0.010207368060946465f, 0.006787153426557779f, 0.006147226318717003f, 0.006388559006154537f, 0.016864372417330742f, 0.2920999825000763f, 0.009051661007106304f, 0.12335662543773651f, 0.00825369730591774f, 0.0041795154102146626f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #68 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_2_bias_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 16,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.00025989575078710914f, 0.000138310861075297f, 0.0002451238106004894f, 0.00412098690867424f, 0.0002722378121688962f, 0.0038729317020624876f, 0.0002401733654551208f, 0.0001596977235749364f, 0.00014464062405750155f, 0.0001503190433140844f, 0.00039680878398939967f, 0.006872940808534622f, 0.00021298025967553258f, 0.00290250894613564f, 0.00019420465105213225f, 9.834153752308339e-05f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #69 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_3_weights_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 8,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.05702180787920952f, 0.05349180847406387f, 0.0441674143075943f, 0.04513700306415558f, 0.07580568641424179f, 0.08323173969984055f, 0.07892855256795883f, 0.043226808309555054f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #70 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_3_bias_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 8,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0013416896108537912f, 0.001258630771189928f, 0.0010392332915216684f, 0.0010620472021400928f, 0.001783663290552795f, 0.001958393957465887f, 0.0018571424297988415f, 0.0010171013418585062f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #71 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_4_weights_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 48,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.012586666271090508f, 0.0012817652896046638f, 0.0010751852532848716f, 0.00045756148756481707f, 0.0008011475438252091f, 0.011962365359067917f, 0.0019281662534922361f, 0.0006156168528832495f, 0.0032777816522866488f, 0.0007591744652017951f, 0.000571438402403146f, 0.005666924640536308f, 0.001921502174809575f, 0.008752254769206047f, 0.0006182172219268978f, 0.009968981146812439f, 0.0014177780831232667f, 0.0007319658761844039f, 0.0005927677848376334f, 0.0010337074054405093f, 0.0009172080317512155f, 0.001038186950609088f, 0.01270560547709465f, 0.007066643331199884f, 0.0009092944674193859f, 0.001657048356719315f, 0.0012901548761874437f, 0.0013737675035372376f, 0.0023969600442796946f, 0.000373286398826167f, 0.00852396059781313f, 0.0015631259884685278f, 0.0007974047330208123f, 0.0005579154239967465f, 0.0036649471148848534f, 0.0023517082445323467f, 0.0022366587072610855f, 0.0010011778213083744f, 0.0014174997340887785f, 0.0011027466971427202f, 0.010991305112838745f, 0.0019479920156300068f, 0.00034554509329609573f, 0.0015640342608094215f, 0.0009620565688237548f, 0.008597319014370441f, 0.005953194573521614f, 0.010136542841792107f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #72 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_4_bias_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 48,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.005135092884302139f, 0.000522933027241379f, 0.00043865275802090764f, 0.0001866753736976534f, 0.00032685117912478745f, 0.004880391061306f, 0.0007866509258747101f, 0.00025115860626101494f, 0.0013372653629630804f, 0.0003097270673606545f, 0.0002331347350263968f, 0.00231198500841856f, 0.0007839321042411029f, 0.0035707340575754642f, 0.0002522194990888238f, 0.004067132715135813f, 0.000578423379920423f, 0.0002986265462823212f, 0.0002418366784695536f, 0.0004217306850478053f, 0.00037420139415189624f, 0.00042355823097750545f, 0.005183617118746042f, 0.002883040579035878f, 0.00037097284803166986f, 0.0006760405376553535f, 0.0005263558123260736f, 0.0005604680045507848f, 0.0009779088431969285f, 0.000152292923303321f, 0.0034775950480252504f, 0.0006377222016453743f, 0.00032532421755604446f, 0.00022761765285395086f, 0.0014952205820009112f, 0.0009594470611773431f, 0.0009125092765316367f, 0.0004084593092557043f, 0.0005783098167739809f, 0.00044989725574851036f, 0.0044842190109193325f, 0.0007947394042275846f, 0.00014097506937105209f, 0.0006380927516147494f, 0.0003924986522179097f, 0.003507523564621806f, 0.002428777050226927f, 0.004135494120419025f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #73 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_6_weights_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 48,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0006960022146813571f, 0.004673338029533625f, 0.005799285601824522f, 0.004585325717926025f, 0.005473228637129068f, 0.00115619704592973f, 0.004120686557143927f, 0.010039376094937325f, 0.001568538835272193f, 0.00394756393507123f, 0.0040725162252783775f, 0.0028358863200992346f, 0.007163539528846741f, 0.0012513885740190744f, 0.0033775523770600557f, 0.0005161665030755103f, 0.001948601333424449f, 0.004133909475058317f, 0.007741581182926893f, 0.0026559168472886086f, 0.005252061411738396f, 0.0036667142994701862f, 0.0005644145421683788f, 0.004182825330644846f, 0.004516607150435448f, 0.0049261474050581455f, 0.00824637059122324f, 0.004581396467983723f, 0.001819623401388526f, 0.007973470725119114f, 0.0004927467089146376f, 0.00237667141482234f, 0.004740975797176361f, 0.005115050356835127f, 0.0009502918110229075f, 0.001618427806533873f, 0.0015871014911681414f, 0.00458196084946394f, 0.009036456234753132f, 0.004105257801711559f, 0.0015166423982009292f, 0.002240625210106373f, 0.00394262233749032f, 0.0020661959424614906f, 0.0040962062776088715f, 0.0009301933459937572f, 0.001022531883791089f, 0.000568293733522296f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #74 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_6_bias_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 48,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(1.637652349018026e-05f, 0.00010996089986292645f, 0.00013645377475768328f, 0.00010789001680677757f, 0.000128781859530136f, 2.72046363534173e-05f, 9.695733024273068e-05f, 0.00023622061416972429f, 3.6906796594848856e-05f, 9.288385626859963e-05f, 9.582391066942364e-05f, 6.672673771390691e-05f, 0.00016855387366376817f, 2.944443804153707e-05f, 7.947182166390121e-05f, 1.2145094842708204e-05f, 4.584944326779805e-05f, 9.726845746627077e-05f, 0.0001821548503357917f, 6.249215948628262e-05f, 0.00012357792002148926f, 8.627563511254266e-05f, 1.3280342500365805e-05f, 9.841941937338561e-05f, 0.00010627310985000804f, 0.0001159093517344445f, 0.0001940322545124218f, 0.00010779756848933175f, 4.28146704507526e-05f, 0.00018761107639875263f, 1.1594040188356303e-05f, 5.592168236034922e-05f, 0.00011155237734783441f, 0.00012035412510158494f, 2.2359807189786807e-05f, 3.8080655940575525e-05f, 3.734356505447067e-05f, 0.00010781084711197764f, 0.00021262250083964318f, 9.659430361352861e-05f, 3.5685705370269716e-05f, 5.272059570415877e-05f, 9.276758646592498e-05f, 4.861637717112899e-05f, 9.638132905820385e-05f, 2.1886902686674148e-05f, 2.4059574570856057e-05f, 1.3371617569646332e-05f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #75 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_7_weights_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 8,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.037059299647808075f, 0.03565175458788872f, 0.029089994728565216f, 0.02369472198188305f, 0.04832087457180023f, 0.027682261541485786f, 0.03448175638914108f, 0.02806408703327179f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #76 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_7_bias_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 8,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.000871983531396836f, 0.0008388648275285959f, 0.0006844704621471465f, 0.0005575228715315461f, 0.0011369617423042655f, 0.0006513473344966769f, 0.0008113354560919106f, 0.000660331454128027f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #77 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_8_weights_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 48,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.001017079339362681f, 0.002131299115717411f, 0.0002862555265892297f, 0.0011835290351882577f, 0.0034716646187007427f, 0.0005405258270911872f, 0.0010831733234226704f, 0.0009075585403479636f, 0.0004938346100971103f, 0.0021115203853696585f, 0.0034805568866431713f, 0.002455348614603281f, 0.0023201906587928534f, 0.004251317121088505f, 0.0022003273479640484f, 0.0012369983596727252f, 0.000565946742426604f, 0.0007589730084873736f, 0.00027922142180614173f, 0.000594393233768642f, 0.0003193699521943927f, 0.0008273484418168664f, 0.0016218307428061962f, 0.0020829495042562485f, 0.0010379379382357001f, 0.0015886692563071847f, 0.0016789025394245982f, 0.001364257768727839f, 0.000891864241566509f, 0.0009115570574067533f, 0.0013238688698038459f, 0.0012424695305526257f, 0.0008924577268771827f, 0.0008691827533766627f, 0.0011589425848796964f, 0.0006054104887880385f, 0.001705998438410461f, 0.00033688341500237584f, 0.001857386203482747f, 0.0011845112312585115f, 0.0016652008052915335f, 0.002423427067697048f, 0.000781745882704854f, 0.0006461389129981399f, 0.001919467467814684f, 0.001695882878266275f, 0.002717105206102133f, 0.0016281019197776914f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #78 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_8_bias_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 48,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.00025433063274249434f, 0.0005329521954990923f, 7.158099469961599e-05f, 0.00029595301020890474f, 0.0008681237231940031f, 0.000135163776576519f, 0.0002708580868784338f, 0.00022694389917887747f, 0.00012348817836027592f, 0.0005280063487589359f, 0.0008703473140485585f, 0.000613983953371644f, 0.0005801863735541701f, 0.0010630834149196744f, 0.0005502133863046765f, 0.00030932354275137186f, 0.00014152051880955696f, 0.00018978862499352545f, 6.982204649830237e-05f, 0.00014863384421914816f, 7.986158016137779e-05f, 0.00020688657241407782f, 0.00040555463056080043f, 0.000520861882250756f, 0.0002595465339254588f, 0.0003972622798755765f, 0.00041982601396739483f, 0.0003411459911148995f, 0.000223019378609024f, 0.00022794376127421856f, 0.00033104635076597333f, 0.000310691655613482f, 0.00022316777904052287f, 0.00021734765323344618f, 0.0002898049424402416f, 0.00015138881281018257f, 0.00042660158942453563f, 8.424099360127002e-05f, 0.0004644575819838792f, 0.0002961986174341291f, 0.00041639976552687585f, 0.0006060016457922757f, 0.00019548321142792702f, 0.00016157336358446628f, 0.0004799816233571619f, 0.00042407211731188f, 0.0006794387591071427f, 0.00040712280315347016f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #79 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_9_weights_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 48,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.021313272416591644f, 0.006490278989076614f, 0.020576300099492073f, 0.007142683491110802f, 0.00422650994732976f, 0.02407088689506054f, 0.008956119418144226f, 0.0054772039875388145f, 0.005267311353236437f, 0.007645723409950733f, 0.0015962872421368957f, 0.008162637241184711f, 0.002049105940386653f, 0.005241465289145708f, 0.004957308527082205f, 0.012294958345592022f, 0.01115544606000185f, 0.008056494407355785f, 0.016579287126660347f, 0.013341553509235382f, 0.008352316915988922f, 0.005031525623053312f, 0.006723926402628422f, 0.004011381417512894f, 0.005998631473630667f, 0.003378578694537282f, 0.004221027251332998f, 0.006701176054775715f, 0.0038175228983163834f, 0.012925872579216957f, 0.007007913198322058f, 0.003603234188631177f, 0.008853822015225887f, 0.014881474897265434f, 0.006297164596617222f, 0.0077528818510472775f, 0.006758439354598522f, 0.010019076056778431f, 0.0036080246791243553f, 0.0041971635073423386f, 0.011049061082303524f, 0.006143603473901749f, 0.009119655005633831f, 0.009451356716454029f, 0.0047742086462676525f, 0.0049794199876487255f, 0.007149261888116598f, 0.0049676732160151005f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #80 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_9_bias_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 48,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0005014888010919094f, 0.00015271245501935482f, 0.0004841482441406697f, 0.00016806313942652196f, 9.94472939055413e-05f, 0.0005663738120347261f, 0.00021073222160339355f, 0.0001288753846893087f, 0.00012393674114719033f, 0.000179899376234971f, 3.75597010133788e-05f, 0.00019206205615773797f, 4.821425682166591e-05f, 0.00012332860205788165f, 0.00011664255725918338f, 0.0002892931515816599f, 0.0002624811022542417f, 0.0001895645837066695f, 0.0003901008749380708f, 0.0003139189211651683f, 0.00019652511400636286f, 0.0001183888380182907f, 0.00015821003762539476f, 9.438544657314196e-05f, 0.00014114427904132754f, 7.949597056722268e-05f, 9.931829117704183e-05f, 0.00015767473087180406f, 8.982406870927662e-05f, 0.00030413817148655653f, 0.00016489207337144762f, 8.47819828777574e-05f, 0.00020832523296121508f, 0.0003501523460727185f, 0.00014816857583355159f, 0.00018242075748275965f, 0.00015902210725471377f, 0.0002357429766561836f, 8.489470201311633e-05f, 9.875679097604007e-05f, 0.0002599779109004885f, 0.00014455537893809378f, 0.0002145801263395697f, 0.0002223848714493215f, 0.0001123343245126307f, 0.00011716282460838556f, 0.0001682179281488061f, 0.00011688643280649558f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #81 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_10_weights_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 8,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.03518914058804512f, 0.020869262516498566f, 0.019674159586429596f, 0.025971049442887306f, 0.021713411435484886f, 0.04816604405641556f, 0.06079145893454552f, 0.021404998376965523f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #82 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_10_bias_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 8,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0008279798203147948f, 0.0004910414572805166f, 0.0004629214236047119f, 0.0006110835238359869f, 0.0005109038320370018f, 0.0011333187576383352f, 0.0014303872594609857f, 0.000503647024743259f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #83 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_12_weights_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 48,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0009675036417320371f, 0.0010547698475420475f, 0.0012560243485495448f, 0.0007732954691164196f, 0.0008332763100042939f, 0.0017882840475067496f, 0.0006547698867507279f, 0.0008989589405246079f, 0.0007130282465368509f, 0.0011209365911781788f, 0.0005489272298291326f, 0.0007283931481651962f, 0.00065421819454059f, 0.0004280100401956588f, 0.00033523072488605976f, 0.0011892038164660335f, 0.0018630728591233492f, 0.0007714576204307377f, 0.0005209129303693771f, 0.00055219471687451f, 0.0005140864523127675f, 0.0007469253032468259f, 0.0008794002933427691f, 0.0011782123474404216f, 0.004436573013663292f, 0.00023296099971048534f, 0.0006771743064746261f, 0.0005812127492390573f, 0.0007766293128952384f, 0.0003676939522847533f, 0.0003406738687772304f, 0.0011129752965644002f, 0.0007032454595901072f, 0.001539119752123952f, 0.0006005014292895794f, 0.0003835334209725261f, 0.0012015877291560173f, 0.0008785350946709514f, 0.0009102326002903283f, 0.00043066134094260633f, 0.0019643986597657204f, 0.0006454393151216209f, 0.00046006511547602713f, 0.000385434104828164f, 0.00042754350579343736f, 0.0012780373217538f, 0.0005689083482138813f, 0.000866309623233974f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #84 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_12_bias_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 48,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.00028990829014219344f, 0.0003160572377964854f, 0.0003763622953556478f, 0.00023171465727500618f, 0.00024968766956590116f, 0.000535851635504514f, 0.0001961989764822647f, 0.0002693691640160978f, 0.00021365584689192474f, 0.00033588381484150887f, 0.0001644836738705635f, 0.00021825986914336681f, 0.00019603366672527045f, 0.00012825136946048588f, 0.000100450444733724f, 0.00035633979132398963f, 0.0005582617595791817f, 0.00023116395459510386f, 0.00015608931425958872f, 0.00016546277038287371f, 0.00015404379519168288f, 0.00022381295275408775f, 0.00026350849657319486f, 0.00035304625635035336f, 0.0013293999945744872f, 6.980576290516183e-05f, 0.00020291235705371946f, 0.00017415790352970362f, 0.00023271363170351833f, 0.00011017790529876947f, 0.00010208145977230743f, 0.0003334982611704618f, 0.00021072446543257684f, 0.0004611905897036195f, 0.00017993766232393682f, 0.00011492413614178076f, 0.0003600505879148841f, 0.00026324926875531673f, 0.0002727472747210413f, 0.00012904581672046334f, 0.0005886235740035772f, 0.00019340311700943857f, 0.00013785653572995216f, 0.00011549366899998859f, 0.00012811156921088696f, 0.00038295838749036193f, 0.00017047094297595322f, 0.0002595859405118972f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #85 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_14_weights_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 48,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0036985899787396193f, 0.002424426842480898f, 0.002129692118614912f, 0.004592704586684704f, 0.0035368611570447683f, 0.005474434234201908f, 0.004075004253536463f, 0.0033992091193795204f, 0.003120408859103918f, 0.002255009487271309f, 0.004713679198175669f, 0.003808041336014867f, 0.003989423159509897f, 0.008738668635487556f, 0.00801039393991232f, 0.0021633461583405733f, 0.0011027025757357478f, 0.003908209037035704f, 0.004193196073174477f, 0.004183213692158461f, 0.004007310606539249f, 0.0042038350366055965f, 0.0029793153516948223f, 0.0038374383002519608f, 0.002890408504754305f, 0.01395254023373127f, 0.004817186389118433f, 0.006230649538338184f, 0.0035423021763563156f, 0.006067323498427868f, 0.009881108067929745f, 0.0022567410487681627f, 0.003887324593961239f, 0.005827582441270351f, 0.004237550776451826f, 0.008753021247684956f, 0.001348186400718987f, 0.003215428441762924f, 0.005108474753797054f, 0.004579445812851191f, 0.00292237033136189f, 0.006353194825351238f, 0.006933968048542738f, 0.008057999424636364f, 0.004049874842166901f, 0.0023936040233820677f, 0.004114138428121805f, 0.0030662897042930126f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #86 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_14_bias_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 48,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(8.70256480993703e-05f, 5.7045337598538026e-05f, 5.011040411773138e-05f, 0.00010806364298332483f, 8.322026405949146e-05f, 0.00012881022121291608f, 9.588245302438736e-05f, 7.998139335541055e-05f, 7.342138997046277e-05f, 5.305904778651893e-05f, 0.00011091009946539998f, 8.960097329691052e-05f, 9.38687808229588e-05f, 0.0002056157391052693f, 0.0001884798548417166f, 5.0902264774776995e-05f, 2.594594297988806e-05f, 9.195785969495773e-05f, 9.866344043985009e-05f, 9.842855797614902e-05f, 9.428966586710885e-05f, 9.891376976156607e-05f, 7.0101537858136e-05f, 9.029266948346049e-05f, 6.800961273256689e-05f, 0.0003282950783614069f, 0.00011334556620568037f, 0.00014660351735074073f, 8.334828453371301e-05f, 0.00014276056026574224f, 0.00023249666264746338f, 5.309978951117955e-05f, 9.146646334556863e-05f, 0.00013711958308704197f, 9.970708197215572e-05f, 0.00020595344540197402f, 3.172203287249431e-05f, 7.565713895019144e-05f, 0.00012019940913887694f, 0.00010775167174870148f, 6.876165571156889e-05f, 0.00014948693569749594f, 0.00016315218817908317f, 0.00018959998851642013f, 9.529117232887074e-05f, 5.632009560940787e-05f, 9.680326184025034e-05f, 7.214799552457407e-05f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #87 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_15_weights_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 16,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.03058595582842827f, 0.034607965499162674f, 0.02364785224199295f, 0.023167096078395844f, 0.030001888051629066f, 0.03777662292122841f, 0.0208623968064785f, 0.02253797836601734f, 0.02401794120669365f, 0.03276862949132919f, 0.02030215598642826f, 0.034247927367687225f, 0.022754158824682236f, 0.03173771873116493f, 0.02456587925553322f, 0.03313188627362251f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #88 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_15_bias_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 16,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0007082860684022307f, 0.0008014246704988182f, 0.0005476187798194587f, 0.0005364858079701662f, 0.0006947606452740729f, 0.000874802004545927f, 0.0004831153491977602f, 0.0005219171871431172f, 0.000556189042981714f, 0.0007588307489641011f, 0.00047014173469506204f, 0.0007930871797725558f, 0.00052692333701998f, 0.0007349576917476952f, 0.0005688777309842408f, 0.0007672427454963326f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #89 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_16_weights_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 96,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003089656587690115f, 0.0004838291206397116f, 0.00017781129281502217f, 0.0008234467823058367f, 0.0009271578164771199f, 0.00024155127175617963f, 0.0009230637224391103f, 0.0007802360923960805f, 0.0008994857198558748f, 0.0011913056951016188f, 0.0012332546757534146f, 0.0015985437203198671f, 0.0004099662764929235f, 0.0003840753633994609f, 0.0016305451281368732f, 0.0007052040891721845f, 0.0005121762515045702f, 0.001372852479107678f, 0.0009585617808625102f, 0.0009515102137811482f, 0.0013089260319247842f, 0.0005252670962363482f, 0.0006777063244953752f, 0.000759103917516768f, 0.001322482479736209f, 0.00048058919492177665f, 0.0011758157052099705f, 0.0010295279789716005f, 0.001975556369870901f, 0.0011102553689852357f, 0.0006304102716967463f, 0.0006291887839324772f, 0.0007712783990427852f, 0.0005547546315938234f, 0.002830969402566552f, 0.0002710439439397305f, 0.0008400806691497564f, 0.000380087731173262f, 0.0004178679082542658f, 0.0020765711087733507f, 0.000860546831972897f, 0.0010031063575297594f, 0.0013326340122148395f, 0.00258429697714746f, 0.0016894987784326077f, 0.000931442657019943f, 0.0021500515285879374f, 0.0021338851656764746f, 0.001121513661928475f, 0.0010835917200893164f, 0.0015117806615307927f, 0.0015634124865755439f, 0.0024476510006934404f, 0.00046760126133449376f, 0.00034085693187080324f, 0.0020176435355097055f, 0.0008794533787295222f, 0.00034683311241678894f, 0.0007020310149528086f, 0.0010692768264561892f, 0.0008876799256540835f, 0.0008250043611042202f, 0.0011448680888861418f, 0.0004319168801885098f, 0.0019811303354799747f, 0.0010880857007578015f, 0.0010507915867492557f, 0.0007473832811228931f, 0.001093239989131689f, 0.001393558457493782f, 0.0005537429242394865f, 0.0015284065157175064f, 0.0008589014760218561f, 0.0006303146947175264f, 0.0007258474943228066f, 0.0011488529853522778f, 0.0018996319267898798f, 0.00042567975469864905f, 0.0006226044497452676f, 0.0007919808267615736f, 0.0011536559322848916f, 0.0006415877724066377f, 0.0005240989266894758f, 0.0010029847035184503f, 0.0010121166706085205f, 0.001722774119116366f, 0.0010400769533589482f, 0.0026861855294555426f, 0.002136422088369727f, 0.002156727947294712f, 0.0019091010326519608f, 0.0006342538399621844f, 0.001081110443919897f, 0.0011590488720685244f, 0.001030815183185041f, 0.0019351254450157285f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #90 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_16_bias_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 96,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0004632956988643855f, 7.255044329212978e-05f, 2.6662901291274466e-05f, 0.00012347630399744958f, 0.0001390278193866834f, 3.62207465514075e-05f, 0.0001384139177389443f, 0.00011699683091137558f, 0.00013487838441506028f, 0.00017863693938124925f, 0.00018492720846552402f, 0.00023970250913407654f, 6.147466774564236e-05f, 5.759231135016307e-05f, 0.00024450113414786756f, 0.00010574574116617441f, 7.680110866203904e-05f, 0.00020585997845046222f, 0.0001437368628103286f, 0.00014267947699408978f, 0.0001962741807801649f, 7.876408926676959e-05f, 0.00010162243415834382f, 0.0001138280495069921f, 0.00019830696692224592f, 7.206461305031553e-05f, 0.00017631420632824302f, 0.00015437828551512212f, 0.0002962357539217919f, 0.00016648339806124568f, 9.453036909690127e-05f, 9.434720413992181e-05f, 0.00011565361637622118f, 8.3185761468485e-05f, 0.00042450541513971984f, 4.0643190004630014e-05f, 0.00012597056047525257f, 5.699436223949306e-05f, 6.265952106332406e-05f, 0.00031138298800215125f, 0.00012903947208542377f, 0.0001504163519712165f, 0.0001998291991185397f, 0.0003875167458318174f, 0.00025334127712994814f, 0.00013967034465167671f, 0.00032240140717476606f, 0.00031997726182453334f, 0.00016817159485071898f, 0.00016248517204076052f, 0.0002266923402203247f, 0.00023443455575034022f, 0.0003670266014523804f, 7.011706475168467e-05f, 5.111168502480723e-05f, 0.0003025467449333519f, 0.00013187451986595988f, 5.200781743042171e-05f, 0.0001052699371939525f, 0.00016033864812925458f, 0.00013310808571986854f, 0.00012370986223686486f, 0.00017167360056191683f, 6.476617272710428e-05f, 0.00029707158682867885f, 0.00016315904213115573f, 0.0001575667702127248f, 0.00011207053466932848f, 0.00016393193800467998f, 0.00020896486239507794f, 8.303405775222927e-05f, 0.00022918538888916373f, 0.0001287927443627268f, 9.451603546040133e-05f, 0.00010884123184951022f, 0.00017227113130502403f, 0.0002848508593160659f, 6.383091385941952e-05f, 9.335987851954997e-05f, 0.00011875796189997345f, 0.00017299133469350636f, 9.620643686503172e-05f, 7.858892058720812e-05f, 0.00015039810386952013f, 0.00015176745364442468f, 0.00025833092513494194f, 0.00015596010780427605f, 0.00040279500535689294f, 0.0003203576779924333f, 0.00032340254983864725f, 0.0002862707478925586f, 9.510671225143597e-05f, 0.00016211310867220163f, 0.00017380001372657716f, 0.00015457130211871117f, 0.0002901731349993497f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #91 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_17_weights_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 96,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0009803944267332554f, 0.01291519682854414f, 0.031897518783807755f, 0.005656156223267317f, 0.012580139562487602f, 0.0459030345082283f, 0.005537259858101606f, 0.01848357729613781f, 0.00606822595000267f, 0.004457022063434124f, 0.0036431082990020514f, 0.007450487464666367f, 0.004780963994562626f, 0.009797133505344391f, 0.006215493194758892f, 0.005986850708723068f, 0.011866377666592598f, 0.003834829432889819f, 0.00493077514693141f, 0.007047567050904036f, 0.0036755301989614964f, 0.004853225313127041f, 0.004390568006783724f, 0.00345858046784997f, 0.012133501470088959f, 0.012351393699645996f, 0.009086386300623417f, 0.007222156040370464f, 0.010356844402849674f, 0.004816188011318445f, 0.009388292208313942f, 0.006251133978366852f, 0.004159989766776562f, 0.010921875014901161f, 0.005916273221373558f, 0.018330322578549385f, 0.00954001396894455f, 0.013055217452347279f, 0.021512454375624657f, 0.0047265710309147835f, 0.006139322649687529f, 0.007312970235943794f, 0.0023318331222981215f, 0.004009682685136795f, 0.010213040746748447f, 0.008822882547974586f, 0.006723823957145214f, 0.008753552101552486f, 0.008852128870785236f, 0.04047168791294098f, 0.005621174816042185f, 0.007166077848523855f, 0.004500928800553083f, 0.01041493657976389f, 0.03931128606200218f, 0.0044432212598621845f, 0.0038762527983635664f, 0.00691945618018508f, 0.009783928282558918f, 0.01572590135037899f, 0.006593460217118263f, 0.009324658662080765f, 0.00916373822838068f, 0.02391055040061474f, 0.0056819855235517025f, 0.01365065947175026f, 0.014199506491422653f, 0.02252023294568062f, 0.004842860624194145f, 0.00748564163222909f, 0.00828017108142376f, 0.005489542614668608f, 0.0053171152248978615f, 0.009957361966371536f, 0.010587932541966438f, 0.004984275437891483f, 0.0035739820450544357f, 0.028081713244318962f, 0.00369529752060771f, 0.005059247836470604f, 0.006747779436409473f, 0.006485774647444487f, 0.007378845475614071f, 0.0045148590579628944f, 0.009799870662391186f, 0.004148573148995638f, 0.0055725243873894215f, 0.0033723642118275166f, 0.003760840278118849f, 0.0027637567836791277f, 0.011647334322333336f, 0.008340022526681423f, 0.005748629104346037f, 0.007653054315596819f, 0.003688966855406761f, 0.007532397285103798f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #92 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_17_bias_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 96,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(2.306810529262293e-05f, 0.00030388697632588446f, 0.0007505298708565533f, 0.00013308602501638234f, 0.000296003301627934f, 0.0010800714371725917f, 0.0001302884629694745f, 0.0004349077062215656f, 0.00014278179151006043f, 0.00010487111285328865f, 8.572019578423351e-05f, 0.00017530558397993445f, 0.00011249327508267015f, 0.0002305207890458405f, 0.00014624690811615437f, 0.00014086707960814238f, 0.0002792088780552149f, 9.023128222906962e-05f, 0.00011601824371609837f, 0.00016582511307206005f, 8.648306538816541e-05f, 0.00011419353540986776f, 0.00010330748773412779f, 8.137836266541854e-05f, 0.00028549417038448155f, 0.00029062104295007885f, 0.00021379733516369015f, 0.00016993308963719755f, 0.00024369046150241047f, 0.00011332207213854417f, 0.0002209009981015697f, 0.0001470855058869347f, 9.7882111731451e-05f, 0.00025698530953377485f, 0.00013920642959419638f, 0.00043130171252414584f, 0.00022447091760113835f, 0.00030718158814124763f, 0.0005061753909103572f, 0.0001112134414142929f, 0.00014445465058088303f, 0.00017206989286933094f, 5.486666123033501e-05f, 9.434547973796725e-05f, 0.0002403068501735106f, 0.00020759724429808557f, 0.00015820762200746685f, 0.00020596593094523996f, 0.0002082853898173198f, 0.0009522750042378902f, 0.00013226293958723545f, 0.0001686135947238654f, 0.00010590421152301133f, 0.0002450573374517262f, 0.0009249714785255492f, 0.00010454638686496764f, 9.120594768319279e-05f, 0.00016281074204016477f, 0.0002302100765518844f, 0.0003700212109833956f, 0.00015514023834839463f, 0.00021940373699180782f, 0.00021561737230513245f, 0.0005626011989079416f, 0.00013369378575589508f, 0.0003211919975001365f, 0.00033410603646188974f, 0.0005298878531903028f, 0.00011394966713851318f, 0.00017613274394534528f, 0.00019482756033539772f, 0.00012916570995002985f, 0.0001251085923286155f, 0.00023429087013937533f, 0.00024912782828323543f, 0.00011727707169484347f, 8.409369911532849e-05f, 0.0006607461837120354f, 8.694818097865209e-05f, 0.00011904112761840224f, 0.00015877129044383764f, 0.0001526064588688314f, 0.00017361989011988044f, 0.00010623197886161506f, 0.00023058519582264125f, 9.761349065229297e-05f, 0.0001311182277277112f, 7.934974564705044e-05f, 8.849036385072395e-05f, 6.502956966869533e-05f, 0.0002740549389272928f, 0.00019623582193162292f, 0.00013526187103707343f, 0.00018007187463808805f, 8.679922029841691e-05f, 0.00017723288328852504f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #93 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_18_weights_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 16,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0072937654331326485f, 0.015578274615108967f, 0.014443621039390564f, 0.018552491441369057f, 0.012871013022959232f, 0.008878340944647789f, 0.015562742948532104f, 0.014512001536786556f, 0.006717166397720575f, 0.03727472200989723f, 0.014029487036168575f, 0.00808337889611721f, 0.03979111835360527f, 0.04100554436445236f, 0.007310185115784407f, 0.00801785010844469f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #94 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_18_bias_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 16,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.00017161801224574447f, 0.00036654763971455395f, 0.0003398499102331698f, 0.0004365292261354625f, 0.0003028473583981395f, 0.00020890214364044368f, 0.00036618218291550875f, 0.0003414588572923094f, 0.00015805097064003348f, 0.0008770523127168417f, 0.0003301055694464594f, 0.00019019715546164662f, 0.000936261611059308f, 0.0009648363338783383f, 0.0001720043655950576f, 0.000188655307283625f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #95 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_20_weights_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 96,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0009469864889979362f, 0.00040190585423260927f, 0.0002768736449070275f, 0.0008043725392781198f, 0.0006926886271685362f, 0.002606400055810809f, 0.002519493456929922f, 0.0004611859912984073f, 0.00018406134040560573f, 0.0007503776578232646f, 0.00048684480134397745f, 0.0005090698832646012f, 0.0007199725951068103f, 0.0009184730006381869f, 0.001215958734974265f, 0.0006517813890241086f, 0.0005323522491380572f, 0.0010769158834591508f, 0.0011048467131331563f, 0.000863334396854043f, 0.0003238104982301593f, 0.00044238127884455025f, 0.0007525631808675826f, 0.0007222248241305351f, 0.0018167879898101091f, 0.0012149227550253272f, 0.0009363478166051209f, 0.00069784140214324f, 0.0006148958345875144f, 0.0006955856224521995f, 0.0004893119912594557f, 0.0006329905008897185f, 0.0009085820056498051f, 0.0009253824828192592f, 0.0004357151628937572f, 0.0008728497195988894f, 0.000251333782216534f, 0.000680948025546968f, 0.0005412385798990726f, 0.0005078136455267668f, 0.0010354681871831417f, 0.0007054022280499339f, 0.0018287188140675426f, 0.0008908381569199264f, 0.0009381107520312071f, 0.0007919368799775839f, 0.0008691694238223135f, 0.00039815055788494647f, 0.00044365201028995216f, 0.0009215199388563633f, 0.0004026778042316437f, 0.0007733521633781493f, 0.0007269592024385929f, 0.0009910168591886759f, 0.000669422501232475f, 0.0005160824512131512f, 0.00028791383374482393f, 0.0022336107213050127f, 0.0008103222935460508f, 0.00040819516289047897f, 0.0008026926079764962f, 0.000216949891182594f, 0.0008707365486770868f, 0.0009197572944685817f, 0.0009932680986821651f, 0.001192737021483481f, 0.00044105935376137495f, 0.0009811361087486148f, 0.0005215351702645421f, 0.0006769164465367794f, 0.0005974716041237116f, 0.0002668497618287802f, 0.0003472985699772835f, 0.0004505559627432376f, 0.00040636988705955446f, 0.0008326173410750926f, 0.0011281464248895645f, 0.00024018484691623598f, 0.00048269133549183607f, 0.0011473681079223752f, 0.000758127891458571f, 0.0011659213341772556f, 0.0008203588658943772f, 0.0006402230355888605f, 0.00043015970732085407f, 0.0011703644413501024f, 0.0005316882161423564f, 0.0011569360503926873f, 0.001259123906493187f, 0.0005817892961204052f, 0.0005637442809529603f, 0.00033495426760055125f, 0.0008574388339184225f, 0.000558297208044678f, 0.0011523512657731771f, 0.0008923799614422023f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #96 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_20_bias_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 96,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.00020820127974729985f, 8.836167398840189e-05f, 6.087251313147135e-05f, 0.00017684664635453373f, 0.00015229219570755959f, 0.0005730343982577324f, 0.0005539273843169212f, 0.0001013948058243841f, 4.046710819238797e-05f, 0.00016497551405336708f, 0.00010703606676543131f, 0.0001119223961723037f, 0.0001582907570991665f, 0.00020193240197841078f, 0.0002673366107046604f, 0.00014329847181215882f, 0.00011704118514899164f, 0.0002367671113461256f, 0.0002429079031571746f, 0.00018980981258209795f, 7.119189103832468e-05f, 9.72604684648104e-05f, 0.00016545601829420775f, 0.00015878592967055738f, 0.00039943293086253107f, 0.000267108844127506f, 0.00020586229220498353f, 0.00015342507686000317f, 0.00013518893683794886f, 0.00015292911848518997f, 0.0001075784966815263f, 0.00013916716852691025f, 0.0001997577928705141f, 0.00020345149096101522f, 9.579487232258543e-05f, 0.0001919018104672432f, 5.5257401982089505e-05f, 0.00014971094788052142f, 0.00011899490345967934f, 0.00011164620809722692f, 0.00022765457106288522f, 0.00015508737124036998f, 0.00040205600089393556f, 0.00019585668633226305f, 0.00020624988246709108f, 0.00017411258886568248f, 0.0001910926803248003f, 8.753604925004765e-05f, 9.75398434093222e-05f, 0.00020260228484403342f, 8.853139297571033e-05f, 0.00017002661479637027f, 0.00015982681361492723f, 0.00021788165031466633f, 0.00014717699377797544f, 0.00011346415703883395f, 6.329976895358413e-05f, 0.00049107416998595f, 0.00017815474711824208f, 8.974441880127415e-05f, 0.00017647730419412255f, 4.76978748338297e-05f, 0.00019143722602166235f, 0.00020221475278958678f, 0.00021837659005541354f, 0.0002622311585582793f, 9.696983033791184e-05f, 0.00021570929675363004f, 0.00011466297291917726f, 0.00014882457617204636f, 0.0001313581014983356f, 5.8668694691732526e-05f, 7.635590009158477e-05f, 9.905772458296269e-05f, 8.934312063502148e-05f, 0.00018305645789951086f, 0.00024803049745969474f, 5.2806237363256514e-05f, 0.00010612289770506322f, 0.00025225651916116476f, 0.00016667945601511747f, 0.00025633556651882827f, 0.00018036135588772595f, 0.00014075728540774435f, 9.457347186980769e-05f, 0.0002573124074842781f, 0.00011689519305946305f, 0.00025436008581891656f, 0.0002768267586361617f, 0.0001279102434637025f, 0.0001239429257111624f, 7.364192424574867e-05f, 0.00018851362983696163f, 0.00012274534674361348f, 0.0002533520746510476f, 0.00019619567319750786f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #97 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_21_weights_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 96,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.008913255296647549f, 0.009076111018657684f, 0.027996959164738655f, 0.004297307226806879f, 0.007745213340967894f, 0.001347350305877626f, 0.002424537669867277f, 0.008013327606022358f, 0.049562081694602966f, 0.013798614963889122f, 0.0064476365223526955f, 0.016707736998796463f, 0.0030418874230235815f, 0.017399754375219345f, 0.013861012645065784f, 0.007627828046679497f, 0.007017872761934996f, 0.007483878172934055f, 0.005052539054304361f, 0.004830479621887207f, 0.0331023633480072f, 0.006041702348738909f, 0.008470739237964153f, 0.008126629516482353f, 0.0026251415256410837f, 0.0030793510377407074f, 0.008537319488823414f, 0.007548762019723654f, 0.008842552080750465f, 0.008198725059628487f, 0.004605553578585386f, 0.006547986995428801f, 0.008931712247431278f, 0.004161057993769646f, 0.008619271218776703f, 0.004043213091790676f, 0.02038709819316864f, 0.0067794737406075f, 0.0075254072435200214f, 0.008692288771271706f, 0.005278960335999727f, 0.004852297715842724f, 0.0035011915024369955f, 0.0038627726025879383f, 0.010858297348022461f, 0.008484113030135632f, 0.012075974605977535f, 0.008723953738808632f, 0.00801446195691824f, 0.010851806960999966f, 0.013688388280570507f, 0.016931774094700813f, 0.005926256533712149f, 0.0037179396022111177f, 0.005049888510257006f, 0.0050510442815721035f, 0.03593503683805466f, 0.0011278213933110237f, 0.0060269334353506565f, 0.004098203964531422f, 0.009907485917210579f, 0.038187358528375626f, 0.007787939161062241f, 0.01946951262652874f, 0.025632528588175774f, 0.007856636308133602f, 0.00767481280490756f, 0.003412816906347871f, 0.009507540613412857f, 0.006498794071376324f, 0.007328415755182505f, 0.022164655849337578f, 0.011605173349380493f, 0.012321148999035358f, 0.013945143669843674f, 0.0027987088542431593f, 0.02558094449341297f, 0.028798194602131844f, 0.01685517467558384f, 0.005540087353438139f, 0.008156810887157917f, 0.0034026680514216423f, 0.006487617734819651f, 0.011993545107543468f, 0.006234185770153999f, 0.006867400370538235f, 0.0075085959397256374f, 0.005739444866776466f, 0.006835005711764097f, 0.007300207391381264f, 0.01137095782905817f, 0.009235861711204052f, 0.01526570226997137f, 0.012578438967466354f, 0.0032561919651925564f, 0.010976516641676426f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #98 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_21_bias_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 96,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0002097236574627459f, 0.00021355555509217083f, 0.00065875198924914f, 0.00010111310984939337f, 0.0001822403137339279f, 3.1702362321084365e-05f, 5.704794602934271e-05f, 0.00018854888912755996f, 0.001166166621260345f, 0.0003246733103878796f, 0.00015170910046435893f, 0.0003931232204195112f, 7.15738206054084e-05f, 0.0004094059986528009f, 0.0003261414822191f, 0.0001794783165678382f, 0.00016512641741428524f, 0.0001760912564350292f, 0.00011888327571796253f, 0.00011365834507159889f, 0.0007788791554048657f, 0.00014215770352166146f, 0.00019931151473429054f, 0.000191214814549312f, 6.176803435664624e-05f, 7.245531742228195e-05f, 0.0002008781157201156f, 0.00017761792696546763f, 0.00020806005341000855f, 0.0001929111749632284f, 0.00010836596629815176f, 0.0001540702796773985f, 0.00021015794482082129f, 9.790725016500801e-05f, 0.0002028063900070265f, 9.513442637398839e-05f, 0.00047969643492251635f, 0.00015951703244354576f, 0.00017706840299069881f, 0.0002045244473265484f, 0.00012421084102243185f, 0.00011417171481298283f, 8.238097507273778e-05f, 9.088876686291769e-05f, 0.0002554893435444683f, 0.00019962619990110397f, 0.0002841405803337693f, 0.00020526950538624078f, 0.00018857557734008878f, 0.0002553366357460618f, 0.0003220797225367278f, 0.00039839468081481755f, 0.00013944132660981268f, 8.748093387112021e-05f, 0.00011882090620929375f, 0.00011884810373885557f, 0.0008455303031951189f, 2.653697447385639e-05f, 0.00014181020378600806f, 9.642833174439147e-05f, 0.00023311731638386846f, 0.0008985261083580554f, 0.00018324563279747963f, 0.0004581061948556453f, 0.0006031183293089271f, 0.00018486203043721616f, 0.00018058384011965245f, 8.03015791461803e-05f, 0.0002237068401882425f, 0.00015291280578821898f, 0.00017243331240024418f, 0.0005215213168412447f, 0.0002730629057623446f, 0.0002899093960877508f, 0.00032812103745527565f, 6.585197115782648e-05f, 0.0006019045831635594f, 0.0006776045775040984f, 0.00039659233880229294f, 0.0001303549943258986f, 0.00019192496256437153f, 8.00627822172828e-05f, 0.00015264983812812716f, 0.00028220107196830213f, 0.00014668672520201653f, 0.0001615858927834779f, 0.00017667285283096135f, 0.00013504576054401696f, 0.00016082366346381605f, 0.00017176958499476314f, 0.0002675519499462098f, 0.00021731440210714936f, 0.000359193014446646f, 0.00029596328386105597f, 7.661628478672355e-05f, 0.00025827097124420106f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #99 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_22_weights_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 16,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.008623763918876648f, 0.017390834167599678f, 0.014214018359780312f, 0.020170066505670547f, 0.011906825006008148f, 0.011258340440690517f, 0.01836712844669819f, 0.01299535483121872f, 0.008956287056207657f, 0.02389718033373356f, 0.014291146770119667f, 0.010056533850729465f, 0.03289167955517769f, 0.03305592015385628f, 0.00937081128358841f, 0.009798754937946796f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #100 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_22_bias_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 16,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.00020291209511924535f, 0.00040919610182754695f, 0.0003344475117046386f, 0.00047458981862291694f, 0.00028016060241498053f, 0.00026490213349461555f, 0.0004321677261032164f, 0.0003057730500586331f, 0.00021073616517242044f, 0.0005622865865007043f, 0.00033626228105276823f, 0.00023662432795390487f, 0.0007739218999631703f, 0.0007777863647788763f, 0.00022048968821763992f, 0.00023055894416756928f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #101 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_24_weights_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 96,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0003877491399180144f, 0.0005373861640691757f, 0.0007076248293742537f, 0.0007557272911071777f, 0.0007210130570456386f, 0.000585082801990211f, 0.0005426799179986119f, 0.00032150305924005806f, 0.0005644370685331523f, 0.001251877867616713f, 0.0017042758408933878f, 0.0015657676849514246f, 0.001494923490099609f, 0.0019133043242618442f, 0.0017417293274775147f, 0.0015163309872150421f, 0.0006513543194159865f, 0.0013847900554537773f, 0.0018517757998779416f, 0.000566585804335773f, 0.0026469998992979527f, 0.0006773683708161116f, 0.0005954047082923353f, 0.0004516483750194311f, 0.0015758257359266281f, 0.0013393864501267672f, 0.0006596258608624339f, 0.0040030949749052525f, 0.000768077268730849f, 0.0004963150713592768f, 0.0003042957396246493f, 0.0014035683125257492f, 0.0014139608247205615f, 0.0009354523499496281f, 0.0007079730276018381f, 0.0017520054243505f, 0.0010094300378113985f, 0.000717880786396563f, 0.0009029034990817308f, 0.0005932605708949268f, 0.0009055561968125403f, 0.0013653584755957127f, 0.0009381172712892294f, 0.00101303996052593f, 0.0007599652744829655f, 0.0014239897718653083f, 0.0006993499118834734f, 0.001296043861657381f, 0.0017256299033761024f, 0.001153451157733798f, 0.002343696542084217f, 0.0009751885081641376f, 0.001523782848380506f, 0.0016116541810333729f, 0.0007227795431390405f, 0.002327661495655775f, 0.0012965406058356166f, 0.00037529884139075875f, 0.0013874223222956061f, 0.0014988593757152557f, 0.00036555834230966866f, 0.0016248784959316254f, 0.0016578782815486193f, 0.0016508345725014806f, 0.0008885126444511116f, 0.0013742317678406835f, 0.00024601584300398827f, 0.000789952406194061f, 0.0009429694036953151f, 0.0017081651603803039f, 0.0027190768159925938f, 0.0012665727408602834f, 0.00041648547630757093f, 0.0005900817341171205f, 0.0015149177052080631f, 0.0009366110316477716f, 0.0004705643223132938f, 0.0008578801644034684f, 0.0017119196709245443f, 0.0010572365717962384f, 0.000570253818295896f, 0.0005196640850044787f, 0.0003966032818425447f, 0.0002846985007636249f, 0.0006845660973340273f, 0.0011550172930583358f, 0.00043630690197460353f, 0.0010261849965900183f, 0.0007401155889965594f, 0.0006501161260530353f, 0.0008265187498182058f, 0.0007939190836623311f, 0.0004136417410336435f, 0.0017254985868930817f, 0.0022385925985872746f, 0.0003860875149257481f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #102 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_24_bias_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 96,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.00010890160774579272f, 0.00015092804096639156f, 0.00019874055578839034f, 0.00021225042291916907f, 0.00020250072702765465f, 0.0001643239229451865f, 0.00015241482469718903f, 9.02960091480054e-05f, 0.0001585254503879696f, 0.00035159720573574305f, 0.00047865582746453583f, 0.00043975497828796506f, 0.0004198579699732363f, 0.0005373627063818276f, 0.0004891748540103436f, 0.0004258704138919711f, 0.00018293666653335094f, 0.00038892636075615883f, 0.0005200820160098374f, 0.00015912893286440521f, 0.000743425393011421f, 0.00019024286302737892f, 0.0001672228827374056f, 0.00012684808461926877f, 0.00044257985427975655f, 0.0003761744883377105f, 0.00018525977793615311f, 0.0011242926120758057f, 0.00021571898832917213f, 0.00013939298514742404f, 8.54632307891734e-05f, 0.0003942003531847149f, 0.0003971191472373903f, 0.00026272726245224476f, 0.0001988383592106402f, 0.000492060964461416f, 0.0002835043123923242f, 0.00020162100554443896f, 0.00025358572020195425f, 0.00016662069538142532f, 0.00025433074915781617f, 0.0003834688977804035f, 0.0002634756965562701f, 0.000284518173430115f, 0.0002134406822733581f, 0.0003999358450528234f, 0.00019641649851109833f, 0.0003640014911070466f, 0.0004846532247029245f, 0.0003239534853491932f, 0.0006582408677786589f, 0.0002738873881753534f, 0.0004279632994439453f, 0.00045264247455634177f, 0.00020299684547353536f, 0.000653737282846123f, 0.00036414098576642573f, 0.00010540486982790753f, 0.0003896656562574208f, 0.000420963391661644f, 0.00010266918980050832f, 0.00045635661808773875f, 0.0004656247911043465f, 0.00046364651643671095f, 0.0002495439548511058f, 0.0003859610005747527f, 6.909498188178986e-05f, 0.0002218627487309277f, 0.0002648384543135762f, 0.00047974815242923796f, 0.0007636685622856021f, 0.0003557243326213211f, 0.00011697237641783431f, 0.00016572789172641933f, 0.0004254734667483717f, 0.0002630526723805815f, 0.00013216074148658663f, 0.0002409406442893669f, 0.0004808026133105159f, 0.00029693107353523374f, 0.000160159106599167f, 0.00014595068932976574f, 0.00011138834815938026f, 7.995923806447536e-05f, 0.00019226438598707318f, 0.00032439333153888583f, 0.0001225393352797255f, 0.00028821005253121257f, 0.00020786578534170985f, 0.00018258890486322343f, 0.00023213261738419533f, 0.0002229767997050658f, 0.0001161736945505254f, 0.0004846163501497358f, 0.0006287217838689685f, 0.00010843492782441899f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #103 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_26_weights_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 96,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003427580464631319f, 0.0034825047478079796f, 0.005261993035674095f, 0.006499761249870062f, 0.0037627662532031536f, 0.002580120926722884f, 0.0038982585538178682f, 0.01010220032185316f, 0.003150882665067911f, 0.0031854240223765373f, 0.0011370577849447727f, 0.002968706889078021f, 0.001683729002252221f, 0.0012516621500253677f, 0.0019559829961508512f, 0.002017840975895524f, 0.0025212254840880632f, 0.0016442291671410203f, 0.0008527929312549531f, 0.0028121222276240587f, 0.0011168799828737974f, 0.003637525951489806f, 0.004639259073883295f, 0.005341663025319576f, 0.00242622010409832f, 0.0033481984864920378f, 0.003851809771731496f, 0.0017544630682095885f, 0.005717317573726177f, 0.004008904565125704f, 0.012676979415118694f, 0.0035662406589835882f, 0.0024283272214233875f, 0.002570509444922209f, 0.003459147410467267f, 0.0026475079357624054f, 0.002149471314623952f, 0.008514375425875187f, 0.0026881187222898006f, 0.005204375367611647f, 0.0027580237947404385f, 0.001632640021853149f, 0.0018596620066091418f, 0.0026972030755132437f, 0.003070991253480315f, 0.001770376693457365f, 0.004218481946736574f, 0.0034218584187328815f, 0.0010492912260815501f, 0.003164844587445259f, 0.0012814984656870365f, 0.0025039110332727432f, 0.0013871064875274897f, 0.0038857890758663416f, 0.001860030577518046f, 0.0008906005532480776f, 0.004104756750166416f, 0.007524179294705391f, 0.0025790666695684195f, 0.0011827033013105392f, 0.009829296730458736f, 0.0011031790636479855f, 0.00193737109657377f, 0.0045049055479466915f, 0.002011127071455121f, 0.0017198972636833787f, 0.011904893442988396f, 0.0015932003734633327f, 0.002409998793154955f, 0.001252204878255725f, 0.0017657466232776642f, 0.0038387428503483534f, 0.006656152196228504f, 0.004553286824375391f, 0.0069907233119010925f, 0.0037656822241842747f, 0.0033504643943160772f, 0.0028513348661363125f, 0.0010597659274935722f, 0.0039826612919569016f, 0.005108897108584642f, 0.006349899340420961f, 0.0036677478346973658f, 0.007010301575064659f, 0.002903161570429802f, 0.003115709638223052f, 0.006611818913370371f, 0.003127188654616475f, 0.0031851802486926317f, 0.0025176459457725286f, 0.0033607040531933308f, 0.0031908885575830936f, 0.010165806859731674f, 0.0007552822935394943f, 0.0013970687286928296f, 0.006021131295710802f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #104 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_26_bias_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 96,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(8.064895519055426e-05f, 8.194128895411268e-05f, 0.0001238116092281416f, 0.00015293556498363614f, 8.853567851474509e-05f, 6.0708727687597275e-05f, 9.172373393084854e-05f, 0.00023769884137436748f, 7.41384137654677e-05f, 7.495115278288722e-05f, 2.6754301870823838e-05f, 6.985192885622382e-05f, 3.96171526517719e-05f, 2.9450875445036218e-05f, 4.602313128998503e-05f, 4.7478613851126283e-05f, 5.9322952438378707e-05f, 3.868774729198776e-05f, 2.0065715943928808e-05f, 6.616758037125692e-05f, 2.6279529265593737e-05f, 8.558885019738227e-05f, 0.00010915903840214014f, 0.00012568618694785982f, 5.708753451472148e-05f, 7.878114411141723e-05f, 9.063081961357966e-05f, 4.128148430027068e-05f, 0.00013452512212097645f, 9.432716615265235e-05f, 0.0002982818696182221f, 8.391154551645741e-05f, 5.713711288990453e-05f, 6.0482576373033226e-05f, 8.139170677168295e-05f, 6.229430437088013e-05f, 5.057579619460739e-05f, 0.00020033825421705842f, 6.324985588435084e-05f, 0.00012245589459780604f, 6.489468069048598e-05f, 3.8415058952523395e-05f, 4.375675416667946e-05f, 6.34636016911827e-05f, 7.225861918414012e-05f, 4.165592326899059e-05f, 9.925840276991948e-05f, 8.051432087086141e-05f, 2.468920501996763e-05f, 7.44669305277057e-05f, 3.0152905310387723e-05f, 5.891555338166654e-05f, 3.2637799449730664e-05f, 9.143033094005659e-05f, 4.3765427108155563e-05f, 2.0955307263648137e-05f, 9.658251656219363e-05f, 0.0001770395174389705f, 6.0683923948090523e-05f, 2.7828313250211067e-05f, 0.00023127757594920695f, 2.5957155230571516e-05f, 4.558520231512375e-05f, 0.00010599778033792973f, 4.732063825940713e-05f, 4.046817048219964e-05f, 0.0002801151422318071f, 3.748706876649521e-05f, 5.6705855968175456e-05f, 2.946364475064911e-05f, 4.154698035563342e-05f, 9.032335947267711e-05f, 0.00015661535144317895f, 0.00010713616211432964f, 0.0001644876174395904f, 8.860429079504684e-05f, 7.883445505285636e-05f, 6.709023000439629e-05f, 2.4935668989201076e-05f, 9.370967745780945e-05f, 0.00012020934809697792f, 0.0001494094030931592f, 8.629995136288926e-05f, 0.00016494827286805958f, 6.830968777649105e-05f, 7.331081724260002e-05f, 0.0001555722119519487f, 7.358090806519613e-05f, 7.494541932828724e-05f, 5.9238729591015726e-05f, 7.907539111329243e-05f, 7.507973350584507e-05f, 0.00023919546219985932f, 1.777134821168147e-05f, 3.2872205338208005e-05f, 0.00014167367771733552f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #105 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_27_weights_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 24,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.011890443973243237f, 0.02289516292512417f, 0.01516704447567463f, 0.03311833366751671f, 0.015446820296347141f, 0.017115486785769463f, 0.015509359538555145f, 0.020609302446246147f, 0.02088392898440361f, 0.017550624907016754f, 0.013206575997173786f, 0.02043810673058033f, 0.015926873311400414f, 0.0076985894702374935f, 0.018744170665740967f, 0.015834219753742218f, 0.01566913351416588f, 0.014729931950569153f, 0.011517188511788845f, 0.013870079070329666f, 0.012319034896790981f, 0.0126789016649127f, 0.021685028448700905f, 0.01489051803946495f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #106 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_27_bias_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 24,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.00027977515128441155f, 0.0005387097480706871f, 0.000356871634721756f, 0.0007792549440637231f, 0.0003634546010289341f, 0.0004027173563372344f, 0.00036492611980065703f, 0.0004849247634410858f, 0.0004913865705020726f, 0.0004129558801651001f, 0.0003107429656665772f, 0.0004808966477867216f, 0.0003747499722521752f, 0.00018114328850060701f, 0.0004410393303260207f, 0.00037256989162415266f, 0.0003686854906845838f, 0.00034658663207665086f, 0.00027099266299046576f, 0.00032635481329634786f, 0.00028985965764150023f, 0.0002983270969707519f, 0.0005102359573356807f, 0.0003503651241771877f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #107 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_28_weights_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 144,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.00035894778557121754f, 0.00037278133095242083f, 0.0004615637008100748f, 0.00036506226751953363f, 0.0007104468531906605f, 0.0004935978213325143f, 0.0005692528211511672f, 0.000820389308501035f, 0.0004198618116788566f, 0.0005712967249564826f, 0.0006737341172993183f, 0.0005030542961321771f, 0.0007589437300339341f, 0.0007904351223260164f, 0.0009742557303979993f, 0.001329103484749794f, 0.00048370222793892026f, 0.00046470918459817767f, 0.0008023908594623208f, 0.0003966577351093292f, 0.0005140611901879311f, 0.000793393817730248f, 0.0011408969294279814f, 0.0005313033470883965f, 0.0006134984432719648f, 0.0008818777860142291f, 0.0007580520468764007f, 0.00024066107289399952f, 0.0005537669057957828f, 0.0013056622119620442f, 0.00036893674405291677f, 0.0012250543804839253f, 0.0006364104337990284f, 0.0007944641401991248f, 0.00033556201378814876f, 0.0013610579771921039f, 0.0005581304430961609f, 0.0006196624599397182f, 0.0006413407390937209f, 0.00032190626370720565f, 0.00040099021862261f, 0.00031887422665022314f, 0.0010016096057370305f, 0.0011623470345512033f, 0.000715826521627605f, 0.0008885178249329329f, 0.0009817456593737006f, 0.00039277845644392073f, 0.0006234030006453395f, 0.00027070619398728013f, 0.0009901892626658082f, 0.0006815100205130875f, 0.0002935415832325816f, 0.00024581560865044594f, 0.0008268067613244057f, 0.0008098596590571105f, 0.0002988346095662564f, 0.0019179400987923145f, 0.0008019115193746984f, 0.0004117463540751487f, 0.0006084110937081277f, 0.0005714361905120313f, 0.0004735778202302754f, 0.0007344781770370901f, 0.0006678611971437931f, 0.0006020785076543689f, 0.0006525252829305828f, 0.0012753685005009174f, 0.0008960349950939417f, 0.0007147772121243179f, 0.0012832023203372955f, 0.0011982907308265567f, 0.0011602671584114432f, 0.0012870758073404431f, 0.0007012086571194232f, 0.0008942303247749805f, 0.0005475149373523891f, 0.003295160597190261f, 0.0008021998219192028f, 0.0003315419307909906f, 0.00039509503403678536f, 0.0008508012979291379f, 0.0003568014071788639f, 0.000491695071104914f, 0.0013514356687664986f, 0.0010098114144057035f, 0.0004624167922884226f, 0.0006768142338842154f, 0.0011919912649318576f, 0.0004045679816044867f, 0.0009948196820914745f, 0.0010588258737698197f, 0.0005729750264436007f, 0.0006236035260371864f, 0.0004699664132203907f, 0.00044501328375190496f, 0.0007117506465874612f, 0.0005231481627561152f, 0.0008421532111242414f, 0.0003218488418497145f, 0.000790699094068259f, 0.0007870739209465683f, 0.0006157177267596126f, 0.0010767674539238214f, 0.0010514078894630075f, 0.0005379840149544179f, 0.0001317197020398453f, 0.0002505614538677037f, 0.0009490631055086851f, 0.0006764827412553132f, 0.0006143467035144567f, 0.0008380270446650684f, 0.0005630398518405855f, 0.000170767743838951f, 0.0010824068449437618f, 0.00039156072307378054f, 0.0016550073632970452f, 0.0004912742879241705f, 0.0008764872327446938f, 0.0009179604239761829f, 0.00030887205502949655f, 0.0005658146110363305f, 0.0010197121882811189f, 0.0010374276898801327f, 0.0005721363122574985f, 0.0009051246452145278f, 0.0007752229575999081f, 0.0012616433668881655f, 0.0021775118075311184f, 0.00044949440052732825f, 0.0010760898003354669f, 0.0005270371329970658f, 0.0004983429098501801f, 0.0008841642993502319f, 0.0006239647627808154f, 0.0007149927550926805f, 0.0007461948553100228f, 0.0005855599883943796f, 0.0009407780016772449f, 0.0012474629329517484f, 0.0002027606824412942f, 0.0008184711914509535f, 0.001648007077164948f, 0.00047535155317746103f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #108 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_28_bias_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 144,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(6.728027801727876e-05f, 6.98732037562877e-05f, 8.651434472994879e-05f, 6.842635775683448e-05f, 0.0001331643870798871f, 9.251874143956229e-05f, 0.00010669932817108929f, 0.0001537717180326581f, 7.869784894865006e-05f, 0.00010708242916734889f, 0.00012628304830286652f, 9.429124474991113e-05f, 0.00014225451741367579f, 0.00014815718168392777f, 0.00018261205696035177f, 0.00024912384105846286f, 9.066393977263942e-05f, 8.71039301273413e-05f, 0.0001503981475252658f, 7.43485361454077e-05f, 9.635434980737045e-05f, 0.00014871175517328084f, 0.0002138468698831275f, 9.958617010852322e-05f, 0.00011499261745484546f, 0.0001652969658607617f, 0.000142087388667278f, 4.510891085374169e-05f, 0.00010379668674431741f, 0.00024473006487824023f, 6.915258563822135e-05f, 0.00022962113143876195f, 0.0001192871859529987f, 0.00014891238242853433f, 6.289690645644441e-05f, 0.0002551133220549673f, 0.00010461457713972777f, 0.00011614798859227449f, 0.00012021130532957613f, 6.0337308241287246e-05f, 7.516060577472672e-05f, 5.976899046800099e-05f, 0.0001877392060123384f, 0.00021786743309348822f, 0.00013417273294180632f, 0.00016654156206641346f, 0.00018401595298200846f, 7.362141332123429e-05f, 0.0001168490998679772f, 5.074049477116205e-05f, 0.0001855986047303304f, 0.00012774053902830929f, 5.502070052898489e-05f, 4.6075063437456265e-05f, 0.00015497459389735013f, 0.00015179807087406516f, 5.601281372946687e-05f, 0.00035949391894973814f, 0.00015030828944873065f, 7.717670814599842e-05f, 0.00011403905955376104f, 0.00010710857168305665f, 8.876624633558095e-05f, 0.0001376687578158453f, 0.00012518223957158625f, 0.00011285209620837122f, 0.00012230771244503558f, 0.00023905189300421625f, 0.0001679505658103153f, 0.00013397606380749494f, 0.00024052023945841938f, 0.0002246046205982566f, 0.00021747758728452027f, 0.0002412462781649083f, 0.0001314327964792028f, 0.00016761230654083192f, 0.00010262483556289226f, 0.0006176366587169468f, 0.0001503623352618888f, 6.214339373400435e-05f, 7.405562791973352e-05f, 0.0001594720670254901f, 6.687796849291772e-05f, 9.216209582518786e-05f, 0.00025330972857773304f, 0.000189276528544724f, 8.66742484504357e-05f, 0.00012686036643572152f, 0.00022342386364471167f, 7.583121623611078e-05f, 0.0001864665246102959f, 0.0001984636764973402f, 0.00010739701247075573f, 0.00011688668746501207f, 8.8089334894903e-05f, 8.341218199348077e-05f, 0.00013340877194423229f, 9.805758600123227e-05f, 0.00015785110008437186f, 6.032654346199706e-05f, 0.00014820665819570422f, 0.00014752717106603086f, 0.00011540859122760594f, 0.00020182660955470055f, 0.0001970732701011002f, 0.00010083838424179703f, 2.4689212295925245e-05f, 4.6964614739408717e-05f, 0.00017789001867640764f, 0.0001267982297576964f, 0.0001151516116806306f, 0.00015707769489381462f, 0.00010553478205110878f, 3.200827995897271e-05f, 0.00020288363157305866f, 7.339316653087735e-05f, 0.00031021045288071036f, 9.208322444465011e-05f, 0.0001642865827307105f, 0.00017206021584570408f, 5.789420902146958e-05f, 0.00010605488205328584f, 0.00019113230518996716f, 0.0001944528630701825f, 0.00010723980085458606f, 0.0001696543040452525f, 0.00014530585031025112f, 0.00023647928901482373f, 0.000408147374400869f, 8.425211126450449e-05f, 0.00020169958588667214f, 9.878652781480923e-05f, 9.340815449832007e-05f, 0.00016572554886806756f, 0.00011695439752656966f, 0.00013401645992416888f, 0.00013986490375827998f, 0.00010975589975714684f, 0.000176337081938982f, 0.00023382133804261684f, 3.800495687755756e-05f, 0.00015341219841502607f, 0.000308898335788399f, 8.909870666684583e-05f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #109 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_29_weights_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 144,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.022750690579414368f, 0.01814982481300831f, 0.011724267154932022f, 0.009609879925847054f, 0.010177450254559517f, 0.014987098053097725f, 0.008481817319989204f, 0.012490889988839626f, 0.013598918914794922f, 0.011882343329489231f, 0.00848937127739191f, 0.007659830152988434f, 0.006613228935748339f, 0.010400102473795414f, 0.023449426516890526f, 0.009854218922555447f, 0.011165733449161053f, 0.008535319939255714f, 0.022020872682332993f, 0.013544794172048569f, 0.006680045742541552f, 0.010245087556540966f, 0.006730666384100914f, 0.008395985700190067f, 0.010626206174492836f, 0.05287802591919899f, 0.020282529294490814f, 0.018406009301543236f, 0.010470111854374409f, 0.018281979486346245f, 0.015277708880603313f, 0.009221689775586128f, 0.009605229832231998f, 0.009336601011455059f, 0.026219196617603302f, 0.010866338387131691f, 0.018407152965664864f, 0.010575133375823498f, 0.01228866633027792f, 0.029338005930185318f, 0.008710241876542568f, 0.0447491891682148f, 0.00510551780462265f, 0.006845117546617985f, 0.012797670438885689f, 0.009624255821108818f, 0.012994004413485527f, 0.010499101132154465f, 0.009835722856223583f, 0.014325720258057117f, 0.00813195388764143f, 0.00905697327107191f, 0.0192377008497715f, 0.038172464817762375f, 0.010515207424759865f, 0.015343664214015007f, 0.009494349360466003f, 0.00752542819827795f, 0.020408784970641136f, 0.021764349192380905f, 0.014087260700762272f, 0.009952276013791561f, 0.007377510890364647f, 0.005943972151726484f, 0.011967944912612438f, 0.010377727448940277f, 0.010760325938463211f, 0.007737699430435896f, 0.010705394670367241f, 0.011250125244259834f, 0.00866241566836834f, 0.004170926287770271f, 0.022243304178118706f, 0.003430852899327874f, 0.008668088354170322f, 0.022826336324214935f, 0.007763253059238195f, 0.01438351720571518f, 0.007631022483110428f, 0.009977152571082115f, 0.01661878637969494f, 0.017552655190229416f, 0.022931117564439774f, 0.010432461276650429f, 0.012085399590432644f, 0.0067437621764838696f, 0.014225115068256855f, 0.00989025179296732f, 0.008904236368834972f, 0.01264758687466383f, 0.009569653309881687f, 0.00875308457762003f, 0.01705336757004261f, 0.009545932523906231f, 0.007780574262142181f, 0.01178471278399229f, 0.0077626085840165615f, 0.02707524225115776f, 0.002983034122735262f, 0.017292045056819916f, 0.009763519279658794f, 0.007696579676121473f, 0.015743404626846313f, 0.006560143548995256f, 0.007432897109538317f, 0.010576949454843998f, 0.031874705106019974f, 0.014043353497982025f, 0.013531191274523735f, 0.018463388085365295f, 0.007354381028562784f, 0.008354218676686287f, 0.007635052315890789f, 0.01974398083984852f, 0.027437401935458183f, 0.02228899672627449f, 0.004916988778859377f, 0.003311105305328965f, 0.009609706699848175f, 0.00574770150706172f, 0.013915177434682846f, 0.007139250170439482f, 0.0023404057137668133f, 0.01860753819346428f, 0.0046059750020504f, 0.006874379701912403f, 0.02717379294335842f, 0.006526498589664698f, 0.007137736771255732f, 0.018846485763788223f, 0.0024839078541845083f, 0.002597339916974306f, 0.013754231855273247f, 0.0066433255560696125f, 0.019692178815603256f, 0.00825970247387886f, 0.007148285862058401f, 0.008698507212102413f, 0.008350430987775326f, 0.0127602843567729f, 0.04211867228150368f, 0.011651551350951195f, 0.00669023348018527f, 0.01961510255932808f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #110 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_29_bias_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 144,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0005353103624656796f, 0.0004270547069609165f, 0.0002758651098702103f, 0.00022611483291257173f, 0.00023946941655594856f, 0.00035263760946691036f, 0.00019957218319177628f, 0.0002939032856374979f, 0.00031997455516830087f, 0.0002795845502987504f, 0.00019974992028437555f, 0.00018023130542133003f, 0.00015560539031866938f, 0.0002447082952130586f, 0.0005517512327060103f, 0.00023186397447716445f, 0.00026272315881215036f, 0.00020083105482626706f, 0.0005181381711736321f, 0.00031870105885900557f, 0.00015717755013611168f, 0.0002410608867648989f, 0.0001583686243975535f, 0.0001975526101887226f, 0.00025002838810905814f, 0.0012441888684406877f, 0.0004772359970957041f, 0.0004330825759097934f, 0.0002463555720169097f, 0.00043016421841457486f, 0.00035947549622505903f, 0.00021698094496969134f, 0.00022600541706196964f, 0.00021968473447486758f, 0.0006169222760945559f, 0.0002556785475462675f, 0.00043310949695296586f, 0.00024882666184566915f, 0.0002891451003961265f, 0.0006903060129843652f, 0.00020494687487371266f, 0.0010529221035540104f, 0.00012012983643217012f, 0.00016106158727779984f, 0.0003011216758750379f, 0.0002264530776301399f, 0.0003057412977796048f, 0.0002470376784913242f, 0.00023142877034842968f, 0.00033707579132169485f, 0.000191340091987513f, 0.00021310526062734425f, 0.0004526517877820879f, 0.0008981756400316954f, 0.0002474166394677013f, 0.00036102739977650344f, 0.00022339646238833666f, 0.00017706889775581658f, 0.00048020671238191426f, 0.0005121023277752101f, 0.00033146495115943253f, 0.00023417120974045247f, 0.00017358850163873285f, 0.00013985816622152925f, 0.0002815987099893391f, 0.00024418183602392673f, 0.00025318414554931223f, 0.00018206352251581848f, 0.0002518916444387287f, 0.00026470882585272193f, 0.0002038215461652726f, 9.813944052439183e-05f, 0.0005233718547970057f, 8.072594937402755e-05f, 0.0002039550308836624f, 0.0005370902945287526f, 0.00018266477854922414f, 0.0003384356969036162f, 0.0001795534772099927f, 0.00023475653142668307f, 0.0003910302766598761f, 0.00041300366865471005f, 0.0005395557382144034f, 0.0002454696805216372f, 0.00028436235152184963f, 0.00015867676120251417f, 0.00033470860216766596f, 0.00023271181271411479f, 0.00020951144688297063f, 0.00029759027529507875f, 0.00022516831813845783f, 0.00020595492969732732f, 0.0004012557037640363f, 0.00022461017942987382f, 0.000183072334039025f, 0.00027728735585696995f, 0.00018264961545355618f, 0.000637064513284713f, 7.018903852440417e-05f, 0.000406871666200459f, 0.0002297298633493483f, 0.00018109599477611482f, 0.0003704330592881888f, 0.0001543563266750425f, 0.00017489169840700924f, 0.0002488694153726101f, 0.0007499930798076093f, 0.00033043185248970985f, 0.0003183809749316424f, 0.0004344326735008508f, 0.00017304426000919193f, 0.00019656986114569008f, 0.00017964829748962075f, 0.0004645642766263336f, 0.0006455859402194619f, 0.0005244470085017383f, 0.00011569385242182761f, 7.790836389176548e-05f, 0.00022611074382439256f, 0.00013524004316423088f, 0.00032741593895480037f, 0.0001679823617450893f, 5.506837260327302e-05f, 0.00043782443390227854f, 0.0001083758834283799f, 0.00016175011114683002f, 0.0006393833900801837f, 0.0001535646733827889f, 0.00016794675320852548f, 0.0004434467409737408f, 5.844489351147786e-05f, 6.111388211138546e-05f, 0.00032362897763960063f, 0.00015631354472134262f, 0.00046334537910297513f, 0.0001943459501489997f, 0.00016819496522657573f, 0.00020467076683416963f, 0.00019648073066491634f, 0.0003002419834956527f, 0.000991027569398284f, 0.00027415415388531983f, 0.00015741726383566856f, 0.0004615318321157247f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #111 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_30_weights_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 24,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0045663476921617985f, 0.008207128383219242f, 0.004874314647167921f, 0.006571772508323193f, 0.004303347785025835f, 0.011540507897734642f, 0.004229583311825991f, 0.006319655105471611f, 0.00790297333151102f, 0.0058362772688269615f, 0.00548142334446311f, 0.015899620950222015f, 0.004975026939064264f, 0.043720792979002f, 0.005702781956642866f, 0.011454337276518345f, 0.006737587973475456f, 0.005775805097073317f, 0.02477419748902321f, 0.0032862334046512842f, 0.0044581471011042595f, 0.013063528575003147f, 0.014272481203079224f, 0.005019041243940592f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #112 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_30_bias_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 24,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0001074434767360799f, 0.00019310890638735145f, 0.00011468975571915507f, 0.0001546299463370815f, 0.00010125524568138644f, 0.00027154135750606656f, 9.951960964826867e-05f, 0.00014869777078274637f, 0.00018595231813378632f, 0.00013732416846323758f, 0.00012897467240691185f, 0.000374108727555722f, 0.00011705946235451847f, 0.0010287245968356729f, 0.00013418310845736414f, 0.00026951381005346775f, 0.00015853148943278939f, 0.0001359012967441231f, 0.0005829223082400858f, 7.732314406894147e-05f, 0.00010489758278708905f, 0.0003073771367780864f, 0.0003358231042511761f, 0.00011809509305749089f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #113 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_32_weights_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 144,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0011776804458349943f, 0.0004037426842842251f, 0.0005348827107809484f, 0.00027613886049948633f, 0.0006296328501775861f, 0.00043811791692860425f, 0.0007123667746782303f, 0.0003652131126727909f, 0.0007884754450060427f, 0.0011837392812594771f, 0.0005252769333310425f, 0.000830534438136965f, 0.0005328366532921791f, 0.000331339513650164f, 0.0005744522786699235f, 0.0005170211661607027f, 0.0008970506605692208f, 0.0014203331666067243f, 0.00045066827442497015f, 0.00029147809254936874f, 0.0005544549785554409f, 0.0006894746911711991f, 0.00017836310144048184f, 0.0003827442415058613f, 0.0005052023916505277f, 0.0005442531546577811f, 0.0002845748676918447f, 0.0002313867153134197f, 0.000509213306941092f, 0.0007763687754049897f, 0.000637274410109967f, 0.000381108489818871f, 0.00045849831076338887f, 0.0009187087998725474f, 0.0003578097384888679f, 0.0009492915123701096f, 0.0006455691182054579f, 0.0007622113334946334f, 0.0005817705532535911f, 0.0017781974747776985f, 0.0005853264592587948f, 0.001028162078000605f, 0.00015066047490108758f, 0.0004716584808193147f, 0.0005423548282124102f, 0.00030267098918557167f, 0.0004221014678478241f, 0.0007183443522080779f, 0.0008938902756199241f, 0.0008630540687590837f, 0.0007392840343527496f, 0.0004565161361824721f, 0.0008240386960096657f, 0.001122021465562284f, 0.0004640726838260889f, 0.00043375673703849316f, 0.0011729426914826035f, 0.0006178620387800038f, 0.000462418858660385f, 0.0007684617303311825f, 0.0004942418891005218f, 0.00047123373951762915f, 0.0003667633282020688f, 0.0011497909436002374f, 0.0010904662776738405f, 0.0005025615100748837f, 0.0015581214101985097f, 0.0003243310493417084f, 0.0008708321838639677f, 0.0004323418834246695f, 0.0007415488944388926f, 0.0008474373607896268f, 0.0003281614917796105f, 0.0008445996209047735f, 0.0005091553903184831f, 0.0005535787204280496f, 0.000386797240935266f, 0.0012204835657030344f, 0.0008182284072972834f, 0.0007653979118913412f, 0.0008500799885950983f, 0.0006194284069351852f, 0.0009763605194166303f, 0.0002951999776996672f, 0.00034159477218054235f, 0.0008987789624370635f, 0.0005170187796466053f, 0.0009180443012155592f, 0.0007158532971516252f, 0.0003618164628278464f, 0.0005476999212987721f, 0.0008890051394701004f, 0.0005712294369004667f, 0.0005022806581109762f, 0.0004484615637920797f, 0.0004141749523114413f, 0.0003206672554370016f, 0.0010232464410364628f, 0.0008595024701207876f, 0.0005295533919706941f, 0.00041762838372960687f, 0.0008569281199015677f, 0.00048152796807698905f, 0.001073247753083706f, 0.0006407828186638653f, 0.0008062729029916227f, 0.0008954264922067523f, 0.00035064120311290026f, 0.0008495295187458396f, 0.0002794390020426363f, 0.0010234462097287178f, 0.0007656392408534884f, 0.0007286456529982388f, 0.0012225417885929346f, 0.00026683276519179344f, 0.0004940031212754548f, 0.0005662672338075936f, 0.0010719976853579283f, 0.0009510234231129289f, 0.001205552602186799f, 0.0002675652503967285f, 0.0004552258469630033f, 0.00039507460314780474f, 0.00037583825178444386f, 0.0006451192311942577f, 0.0005840121884830296f, 0.0009418223635293543f, 0.001266044331714511f, 0.00044855475425720215f, 0.0003993696009274572f, 0.0009314647177234292f, 0.000434167159255594f, 0.0009280982776544988f, 0.00018364950665272772f, 0.0011531782802194357f, 0.0007919804193079472f, 0.0006724106497131288f, 0.0010724607855081558f, 0.000542767287697643f, 0.00021385951549746096f, 0.0006849173805676401f, 0.0006874674581922591f, 0.0007540310616604984f, 0.0011605002218857408f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #114 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_32_bias_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 144,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.00022036436712369323f, 7.55472356104292e-05f, 0.00010008579556597397f, 5.167035124031827e-05f, 0.00011781518696807325f, 8.197942952392623e-05f, 0.0001332961255684495f, 6.833768566139042e-05f, 0.00014753738651052117f, 0.00022149807773530483f, 9.828838665271178e-05f, 0.0001554073387524113f, 9.970294195227325e-05f, 6.199935160111636e-05f, 0.00010748994827736169f, 9.674359171185642e-05f, 0.00016785367915872484f, 0.00026576887466944754f, 8.432781760348007e-05f, 5.454058918985538e-05f, 0.00010374810517532751f, 0.00012901262380182743f, 3.3374817576259375e-05f, 7.161805842770264e-05f, 9.453209349885583e-05f, 0.00010183917038375512f, 5.324887388269417e-05f, 4.3296451622154564e-05f, 9.528260852675885e-05f, 0.00014527201710734516f, 0.00011924505088245496f, 7.131198071874678e-05f, 8.579295536037534e-05f, 0.00017190628568641841f, 6.695238698739558e-05f, 0.0001776288409018889f, 0.00012079713633283973f, 0.00014262291369959712f, 0.00010885931988013908f, 0.0003327314625494182f, 0.00010952469165204093f, 0.00019238688400946558f, 2.819117798935622e-05f, 8.825545228319243e-05f, 0.00010148395813303068f, 5.663497358909808e-05f, 7.89824771345593e-05f, 0.0001344146439805627f, 0.00016726231842767447f, 0.0001614923239685595f, 0.0001383328199153766f, 8.542205614503473e-05f, 0.00015419187548104674f, 0.00020994960505049676f, 8.683601481607184e-05f, 8.116337994579226e-05f, 0.0002194778498960659f, 0.00011561266001081094f, 8.6526561062783e-05f, 0.0001437924656784162f, 9.24811974982731e-05f, 8.81759769981727e-05f, 6.862775626359507e-05f, 0.0002151457592844963f, 0.00020404507813509554f, 9.403793956153095e-05f, 0.0002915514342021197f, 6.068794391467236e-05f, 0.00016294774832203984f, 8.089863695204258e-05f, 0.00013875661534257233f, 0.00015857016842346638f, 6.140468758530915e-05f, 0.0001580391835886985f, 9.527177462587133e-05f, 0.00010358414147049189f, 7.23764460417442e-05f, 0.0002283735666424036f, 0.000153104672790505f, 0.00014321917842607945f, 0.00015906465705484152f, 0.00011590575741138309f, 0.00018269392603542656f, 5.523701474885456e-05f, 6.391828355845064e-05f, 0.00016817706637084484f, 9.674314787844196e-05f, 0.00017178195412270725f, 0.00013394851703196764f, 6.770210893591866e-05f, 0.00010248411854263395f, 0.00016634822532068938f, 0.00010688689508242533f, 9.398539259564131e-05f, 8.391490700887516e-05f, 7.749928772682324e-05f, 6.000238499836996e-05f, 0.00019146708655171096f, 0.00016082776710391045f, 9.908858919516206e-05f, 7.814548735041171e-05f, 0.00016034605505410582f, 9.010219946503639e-05f, 0.00020082319679204375f, 0.00011990153871010989f, 0.00015086759231053293f, 0.0001675497624091804f, 6.56110278214328e-05f, 0.00015896165859885514f, 5.228786540101282e-05f, 0.00019150447042193264f, 0.00014326433301903307f, 0.00013634219067171216f, 0.00022875869763083756f, 4.99290217703674e-05f, 9.243652311852202e-05f, 0.00010595838102744892f, 0.00020058928930666298f, 0.00017795291205402464f, 0.000225579715333879f, 5.006608262192458e-05f, 8.518061804352328e-05f, 7.392528641503304e-05f, 7.032583380350843e-05f, 0.00012071295350324363f, 0.00010927877156063914f, 0.00017623123130761087f, 0.00023689877707511187f, 8.393234747927636e-05f, 7.472895231330767e-05f, 0.00017429314902983606f, 8.124017767840996e-05f, 0.00017366322572343051f, 3.436399492784403e-05f, 0.00021577958250418305f, 0.00014819322677794844f, 0.0001258196571143344f, 0.0002006759459618479f, 0.00010156113421544433f, 4.001681008958258e-05f, 0.00012815988156944513f, 0.00012863703886978328f, 0.0001410922413924709f, 0.0002171496453229338f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #115 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_33_weights_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 144,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.00836492795497179f, 0.014070060104131699f, 0.006453193258494139f, 0.021933328360319138f, 0.0166841521859169f, 0.028062421828508377f, 0.008386832661926746f, 0.019275560975074768f, 0.010123775340616703f, 0.006217370741069317f, 0.008774293586611748f, 0.007251087110489607f, 0.015034463256597519f, 0.01870102994143963f, 0.021892163902521133f, 0.006161137018352747f, 0.005358723923563957f, 0.0021640427876263857f, 0.008228235878050327f, 0.010322886519134045f, 0.013802813366055489f, 0.008033414371311665f, 0.020579570904374123f, 0.013792527839541435f, 0.013031220063567162f, 0.014343787916004658f, 0.026746679097414017f, 0.020637929439544678f, 0.029829882085323334f, 0.004185062367469072f, 0.004262350033968687f, 0.013466514647006989f, 0.008603716269135475f, 0.008451735600829124f, 0.01970864087343216f, 0.01044732891023159f, 0.008149852976202965f, 0.01321788877248764f, 0.010075517930090427f, 0.008557518944144249f, 0.011082424782216549f, 0.002310071839019656f, 0.04468061402440071f, 0.011451637372374535f, 0.01049340795725584f, 0.007151275407522917f, 0.009666996076703072f, 0.007098295260220766f, 0.004044700413942337f, 0.021494820713996887f, 0.00481556449085474f, 0.019170545041561127f, 0.0073554180562496185f, 0.007066435646265745f, 0.006508523132652044f, 0.020907815545797348f, 0.007669181562960148f, 0.0074005392380058765f, 0.010420876555144787f, 0.009681693278253078f, 0.00889077503234148f, 0.02011987939476967f, 0.014465357176959515f, 0.03379543125629425f, 0.007061134558171034f, 0.0020590471103787422f, 0.006515149027109146f, 0.01414902787655592f, 0.007612175308167934f, 0.010114718228578568f, 0.007715405430644751f, 0.004727990832179785f, 0.014546711929142475f, 0.018193120136857033f, 0.015656055882573128f, 0.00233462848700583f, 0.01059067901223898f, 0.010321969166398048f, 0.004620647523552179f, 0.007715365383774042f, 0.003233712399378419f, 0.012101231142878532f, 0.011327587068080902f, 0.01017846167087555f, 0.007241315208375454f, 0.00607293238863349f, 0.007047845050692558f, 0.0019458996830508113f, 0.007022223435342312f, 0.014023752883076668f, 0.0038240368012338877f, 0.006312617566436529f, 0.008644607849419117f, 0.010456718504428864f, 0.01502602081745863f, 0.02477206662297249f, 0.014487734995782375f, 0.008427819237112999f, 0.0059727830812335014f, 0.00748531986027956f, 0.012437677010893822f, 0.004001901019364595f, 0.023220138624310493f, 0.015648363158106804f, 0.01725899428129196f, 0.004064996261149645f, 0.008435430936515331f, 0.022911643609404564f, 0.007425266783684492f, 0.0196414552628994f, 0.004416623618453741f, 0.013792462646961212f, 0.008541003800928593f, 0.002686538267880678f, 0.012061862275004387f, 0.009832469746470451f, 0.024128425866365433f, 0.00830219965428114f, 0.009299734607338905f, 0.004522612318396568f, 0.014037083834409714f, 0.01172499731183052f, 0.009676622226834297f, 0.011098640970885754f, 0.01464095152914524f, 0.016577119007706642f, 0.0036611047107726336f, 0.003356741974130273f, 0.013529435731470585f, 0.004280958790332079f, 0.013838893733918667f, 0.01007607951760292f, 0.0058464002795517445f, 0.026658324524760246f, 0.008472923189401627f, 0.009741820394992828f, 0.0036106330808252096f, 0.007785445544868708f, 0.011846733279526234f, 0.015606565400958061f, 0.008525922894477844f, 0.006071580573916435f, 0.00598888611420989f, 0.0014929418684914708f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #116 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_33_bias_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 144,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0001964699331438169f, 0.00033046831958927214f, 0.00015156835434027016f, 0.0005151556106284261f, 0.0003918664006050676f, 0.0006591117125935853f, 0.0001969844161067158f, 0.0004527317069005221f, 0.0002377805794822052f, 0.0001460295170545578f, 0.00020608483464457095f, 0.00017030876188073307f, 0.00035311959800310433f, 0.0004392374830786139f, 0.0005141887231729925f, 0.00014470874157268554f, 0.0001258621778106317f, 5.082761344965547e-05f, 0.000193259387742728f, 0.00024245717213489115f, 0.000324191409163177f, 0.00018868355255108327f, 0.00048335944302380085f, 0.00032394981826655567f, 0.00030606871587224305f, 0.00033689747215248644f, 0.0006282083922997117f, 0.0004847301170229912f, 0.0007006246596574783f, 9.82959900284186e-05f, 0.00010011127596953884f, 0.0003162926295772195f, 0.00020207843044772744f, 0.00019850880198646337f, 0.00046290361206047237f, 0.00024537998251616955f, 0.00019141838129144162f, 0.00031045309151522815f, 0.00023664714535698295f, 0.0002009933814406395f, 0.00026029671425931156f, 5.425744893727824e-05f, 0.0010494288289919496f, 0.0002689685206860304f, 0.0002464622666593641f, 0.00016796444833744317f, 0.0002270520490128547f, 0.00016672008496243507f, 9.49992609093897e-05f, 0.0005048562306910753f, 0.00011310481204418465f, 0.00045026515726931393f, 0.00017275921709369868f, 0.00016597179637756199f, 0.00015286791312973946f, 0.0004910690477117896f, 0.00018012869986705482f, 0.00017381900397595018f, 0.00024475870304740965f, 0.00022739724954590201f, 0.00020882068201899529f, 0.0004725625040009618f, 0.0003397527907509357f, 0.0007937648915685713f, 0.00016584729019086808f, 4.836154403164983e-05f, 0.00015302353131119162f, 0.0003323230776004493f, 0.00017878976359497756f, 0.00023756784503348172f, 0.00018121437460649759f, 0.00011104794248240069f, 0.0003416636027395725f, 0.0004273080558050424f, 0.00036771915620192885f, 5.483421773533337e-05f, 0.0002487469173502177f, 0.00024243562074843794f, 0.00010852672858163714f, 0.00018121342873200774f, 7.595131319249049e-05f, 0.0002842257672455162f, 0.0002660549071151763f, 0.00023906501883175224f, 0.00017007924907375127f, 0.00014263704360928386f, 0.0001655351516092196f, 4.570401142700575e-05f, 0.00016493337170686573f, 0.00032938068034127355f, 8.98164653335698e-05f, 0.0001482666120864451f, 0.00020303887140471488f, 0.0002456005313433707f, 0.00035292128450237215f, 0.0005818300414830446f, 0.0003402784059289843f, 0.00019794708350673318f, 0.0001402847992721945f, 0.00017581027350388467f, 0.0002921279810834676f, 9.399402188137174e-05f, 0.0005453793564811349f, 0.00036753847962245345f, 0.00040536790038459003f, 9.547595982439816e-05f, 0.00019812585378531367f, 0.0005381336086429656f, 0.00017439978546462953f, 0.0004613255732692778f, 0.00010373475379310548f, 0.0003239483048673719f, 0.00020060548558831215f, 6.309964373940602e-05f, 0.00028330108034424484f, 0.00023093858908396214f, 0.0005667125806212425f, 0.00019499660993460566f, 0.00021842605201527476f, 0.00010622414265526459f, 0.00032969380845315754f, 0.00027538902941159904f, 0.00022727814211975783f, 0.00026067759608849883f, 0.0003438770363572985f, 0.00038935246993787587f, 8.598961721872911e-05f, 7.884094520704821e-05f, 0.00031777049298398197f, 0.00010054834274342284f, 0.00032503882539458573f, 0.00023666032939217985f, 0.00013731641229242086f, 0.0006261331727728248f, 0.00019900644838344306f, 0.00022880946926306933f, 8.480417454848066e-05f, 0.00018285942496731877f, 0.00027824827702715993f, 0.0003665567492134869f, 0.00020025127741973847f, 0.00014260529133025557f, 0.000140663018100895f, 3.50652371707838e-05f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #117 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_34_weights_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 24,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.009081311523914337f, 0.008582251146435738f, 0.005189378280192614f, 0.008091994561254978f, 0.00393270468339324f, 0.008352714590728283f, 0.0052671292796730995f, 0.0173746757209301f, 0.006067903712391853f, 0.007369948085397482f, 0.0068389298394322395f, 0.01290169544517994f, 0.00460804533213377f, 0.017129451036453247f, 0.006304414477199316f, 0.01058055181056261f, 0.00817660428583622f, 0.006401443853974342f, 0.0161251462996006f, 0.004500280134379864f, 0.0038471573498100042f, 0.015176872722804546f, 0.022200901061296463f, 0.005816007032990456f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #118 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_34_bias_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 24,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.00021367792214732617f, 0.00020193532691337168f, 0.00012210302520543337f, 0.000190399878192693f, 9.253423195332289e-05f, 0.0001965344708878547f, 0.0001239324628841132f, 0.00040881591849029064f, 0.00014277420996222645f, 0.00017341054626740515f, 0.00016091599536594003f, 0.0003035693080164492f, 0.00010842459596460685f, 0.00040304590947926044f, 0.00014833916793577373f, 0.0002489541657269001f, 0.0001923906966112554f, 0.0001506222179159522f, 0.00037941522896289825f, 0.00010588894656393677f, 9.052135283127427e-05f, 0.0003571028937585652f, 0.0005223741754889488f, 0.00013684722944162786f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #119 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_36_weights_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 144,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.00029393285512924194f, 0.00034228904405608773f, 0.0002549909695517272f, 0.0008397279307246208f, 0.0009536207071505487f, 0.0003294196503702551f, 0.0013333065435290337f, 0.0011024586856365204f, 0.0007289619534276426f, 0.0008881277753971517f, 0.0004475513123907149f, 0.00018886943871621042f, 0.0004166718863416463f, 0.0006632176227867603f, 0.0006031595985405147f, 0.0009344384889118373f, 0.0006157797761261463f, 0.0002771342115011066f, 0.00037244425038807094f, 0.0004887363174930215f, 0.0010241821873933077f, 0.00018466963956598192f, 0.00017261724860873073f, 0.0006631763535551727f, 0.0010491159046068788f, 0.0006004370516166091f, 0.0009917294373735785f, 0.0005267217638902366f, 0.0007339281728491187f, 0.0006926216883584857f, 0.0008856974309310317f, 0.0005285033257678151f, 0.0005576799158006907f, 0.0010188098531216383f, 0.0007282419828698039f, 0.00024109829973895103f, 0.0004584859998431057f, 0.0007359073497354984f, 0.00020907064026687294f, 0.000220539586734958f, 0.0009450422367081046f, 0.0010993600590154529f, 0.0007038641488179564f, 0.0011990608181804419f, 0.000846674432978034f, 0.0006677649798803031f, 0.0006330789183266461f, 0.0006612528814002872f, 0.0006404190789908171f, 0.000769194564782083f, 0.0013199648819863796f, 0.0007040327182039618f, 0.0010545006953179836f, 0.0012784498976543546f, 0.0006561818881891668f, 0.0008309229742735624f, 0.0004804053751286119f, 0.0003071170358452946f, 0.0009842771105468273f, 0.0006336889928206801f, 0.000496220774948597f, 0.0005182154127396643f, 0.001451390329748392f, 0.0006774036446586251f, 0.000906232395209372f, 0.0010184437269344926f, 0.0005231270333752036f, 0.0008196101989597082f, 0.0009150586556643248f, 0.0005648407386615872f, 0.0006971710827201605f, 0.00038360970211215317f, 0.00033240322954952717f, 0.0005048750317655504f, 9.37254008022137e-05f, 0.0012528625084087253f, 0.0011193976970389485f, 0.0002518193796277046f, 0.0006227511912584305f, 0.0005253161652944982f, 0.0004566200077533722f, 0.0007139265653677285f, 0.0011224212357774377f, 0.0003255452902521938f, 0.001005464349873364f, 0.0005062285927124321f, 0.0006124887731857598f, 0.000777331879362464f, 0.0010244682198390365f, 0.0007787150098010898f, 0.0005639722221530974f, 0.0010323543101549149f, 0.0006602515932172537f, 0.0005131205543875694f, 0.0004354700504336506f, 0.00040703697595745325f, 0.00023854275059420615f, 0.00098488200455904f, 0.0006347274174913764f, 0.0006112836999818683f, 0.0006317394436337054f, 0.0009110806277021766f, 0.0009340764372609556f, 0.0008142715669237077f, 0.0004129971785005182f, 0.000756645284127444f, 0.00034733457141555846f, 0.0004544506664387882f, 0.0004970405716449022f, 0.0009882670128718019f, 0.0009241259540431201f, 0.0008384489919990301f, 0.0004584909765981138f, 0.0004044844245072454f, 0.00046996521996334195f, 0.0007365642231889069f, 0.00036630197428166866f, 0.0008936840458773077f, 0.0006010879296809435f, 0.0011875252239406109f, 0.0002985980245284736f, 0.0006199152558110654f, 0.0004821215698029846f, 0.00020820491772610694f, 0.0005005451384931803f, 0.0005666133365593851f, 0.0014767460525035858f, 0.0009913303656503558f, 0.0006407680921256542f, 0.0006288741715252399f, 0.0003834421222563833f, 0.0007491419673897326f, 0.0006447980413213372f, 0.00031329694320447743f, 0.0007986676064319909f, 0.0003133982827421278f, 0.000685062725096941f, 0.0009385172743350267f, 0.0016685310984030366f, 0.0010281983995810151f, 0.0001943746319739148f, 0.0006403842126019299f, 0.00033383723348379135f, 0.0010637241648510098f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #120 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_36_bias_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 144,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(6.016505722072907e-05f, 7.006307714618742e-05f, 5.219404920353554e-05f, 0.00017188374476972967f, 0.0001951964368345216f, 6.742884579580277e-05f, 0.0002729142433963716f, 0.0002256620500702411f, 0.0001492110750405118f, 0.00018179070320911705f, 9.160918853012845e-05f, 3.8659647543681785e-05f, 8.528848411515355e-05f, 0.00013575388584285975f, 0.0001234606170328334f, 0.00019127002451568842f, 0.00012604384392034262f, 5.6726545153651386e-05f, 7.623554120073095e-05f, 0.0001000393385766074f, 0.00020963964925613254f, 3.7799993151566014e-05f, 3.5332988773006946e-05f, 0.00013574543118011206f, 0.00021474332606885582f, 0.00012290333688724786f, 0.00020299690368119627f, 0.0001078145724022761f, 0.00015022761363070458f, 0.00014177260163705796f, 0.0001812932314351201f, 0.00010817924339789897f, 0.00011415139306336641f, 0.00020853999012615532f, 0.00014906370779499412f, 4.9350361223332584e-05f, 9.384741133544594e-05f, 0.0001506327243987471f, 4.279462882550433e-05f, 4.5142205635784194e-05f, 0.00019344050087966025f, 0.0002250277902930975f, 0.00014407381240744144f, 0.000245435512624681f, 0.00017330562695860863f, 0.000136684684548527f, 0.0001295847905566916f, 0.00013535171456169337f, 0.00013108724670019f, 0.00015744628035463393f, 0.0002701833436731249f, 0.0001441083149984479f, 0.000215845531783998f, 0.0002616856654640287f, 0.0001343137410003692f, 0.00017008146096486598f, 9.833407966652885e-05f, 6.286372808972374e-05f, 0.0002014714846154675f, 0.00012970967509318143f, 0.00010157133510801941f, 0.00010607340664137155f, 0.0002970847999677062f, 0.00013865761866327375f, 0.00018549652304500341f, 0.00020846504776272923f, 0.00010707876936066896f, 0.00016776584379840642f, 0.00018730317242443562f, 0.00011561713472474366f, 0.0001427038077963516f, 7.85209922469221e-05f, 6.803955329814926e-05f, 0.00010334276885259897f, 1.9184633856639266e-05f, 0.0002564481692388654f, 0.00022912929125595838f, 5.154485916136764e-05f, 0.0001274708192795515f, 0.00010752685921033844f, 9.346545994048938e-05f, 0.00014613349048886448f, 0.00022974818421062082f, 6.663580279564485e-05f, 0.0002058083045994863f, 0.00010361983004258946f, 0.00012537020666059107f, 0.00015911190712358803f, 0.00020969819161109626f, 0.0001593950146343559f, 0.00011543936125235632f, 0.0002113123919116333f, 0.00013514676538761705f, 0.00010503054363653064f, 8.913627971196547e-05f, 8.331631397595629e-05f, 4.882726716459729e-05f, 0.00020159530686214566f, 0.00012992223491892219f, 0.00012512353714555502f, 0.00012931061792187393f, 0.00018648890545591712f, 0.00019119592616334558f, 0.00016667308227624744f, 8.45363101689145e-05f, 0.0001548775762785226f, 7.109584112185985e-05f, 9.302141552325338e-05f, 0.00010173913324251771f, 0.00020228818175382912f, 0.00018915915279649198f, 0.00017162195581477135f, 9.384842996951193e-05f, 8.27938347356394e-05f, 9.61970872594975e-05f, 0.0001507671840954572f, 7.49782775528729e-05f, 0.00018292800814379007f, 0.0001230365742230788f, 0.00024307430430781096f, 6.111997208790854e-05f, 0.00012689032882917672f, 9.868537017609924e-05f, 4.2617422877810895e-05f, 0.00010245648445561528f, 0.00011597997217904776f, 0.00030227485694922507f, 0.00020291520922910422f, 0.0001311586966039613f, 0.00012872413208242506f, 7.848669338272884e-05f, 0.0001533417234895751f, 0.0001319835864705965f, 6.41286897007376e-05f, 0.00016347911150660366f, 6.414943345589563e-05f, 0.00014022535469848663f, 0.0001921049115480855f, 0.0003415312967263162f, 0.00021046173060312867f, 3.978650420322083e-05f, 0.0001310801162617281f, 6.833307998022065e-05f, 0.0002177334827138111f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #121 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_37_weights_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 144,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.016126781702041626f, 0.012528028339147568f, 0.01951306313276291f, 0.004206305369734764f, 0.009113007225096226f, 0.020099470391869545f, 0.010268145240843296f, 0.003959461580961943f, 0.01320333406329155f, 0.004593660589307547f, 0.017443446442484856f, 0.020983925089240074f, 0.009291596710681915f, 0.017156001180410385f, 0.0025222396943718195f, 0.006421826314181089f, 0.01032828725874424f, 0.01598242111504078f, 0.025930071249604225f, 0.00848330557346344f, 0.006127724889665842f, 0.027263058349490166f, 0.01232046727091074f, 0.017057016491889954f, 0.003460547188296914f, 0.030332021415233612f, 0.011883332394063473f, 0.008765244856476784f, 0.005834826268255711f, 0.0126646114513278f, 0.0019319017883390188f, 0.01043375302106142f, 0.01614988222718239f, 0.008159435354173183f, 0.008172345347702503f, 0.032624855637550354f, 0.00534247187897563f, 0.005658915266394615f, 0.024607570841908455f, 0.012738848105072975f, 0.0026034489274024963f, 0.01318049244582653f, 0.006453590467572212f, 0.007058267947286367f, 0.006048867013305426f, 0.007886655628681183f, 0.01065436564385891f, 0.007794835139065981f, 0.005977540742605925f, 0.0057541378773748875f, 0.007162315305322409f, 0.007889796048402786f, 0.008091102354228497f, 0.006018890533596277f, 0.005146247800439596f, 0.006075557321310043f, 0.015744484961032867f, 0.028680870309472084f, 0.013038945384323597f, 0.004883232060819864f, 0.03328275308012962f, 0.010126727633178234f, 0.005141190718859434f, 0.015984145924448967f, 0.0017126090824604034f, 0.005935658700764179f, 0.01189173199236393f, 0.004305751994252205f, 0.025918759405612946f, 0.007981550879776478f, 0.007542959880083799f, 0.024153398349881172f, 0.008521012030541897f, 0.012745914049446583f, 0.014906722120940685f, 0.005401242058724165f, 0.006085771135985851f, 0.021371202543377876f, 0.01956220529973507f, 0.0034399523865431547f, 0.008167685009539127f, 0.014065604656934738f, 0.013262545689940453f, 0.014440231025218964f, 0.002578496001660824f, 0.009139467030763626f, 0.003944419790059328f, 0.00839013047516346f, 0.002965380437672138f, 0.008275258354842663f, 0.007460948079824448f, 0.0028564599342644215f, 0.035005293786525726f, 0.01629830338060856f, 0.013903333805501461f, 0.02536703273653984f, 0.01575733907520771f, 0.010761580429971218f, 0.008132241666316986f, 0.01847911812365055f, 0.01826734095811844f, 0.013710705563426018f, 0.006598546635359526f, 0.011805536225438118f, 0.011611723341047764f, 0.004691040143370628f, 0.008954551070928574f, 0.0070309326983988285f, 0.00916466023772955f, 0.0026619473937898874f, 0.005248077679425478f, 0.018088895827531815f, 0.0178472138941288f, 0.01335449144244194f, 0.011009430512785912f, 0.006521503906697035f, 0.013250540010631084f, 0.006386335473507643f, 0.008717643097043037f, 0.009818753227591515f, 0.018702050670981407f, 0.005311581771820784f, 0.014181283302605152f, 0.023833947256207466f, 0.023148393258452415f, 0.0054389359429478645f, 0.00448274239897728f, 0.011178247630596161f, 0.007845010608434677f, 0.015142453834414482f, 0.007768690586090088f, 0.00400765473023057f, 0.01578916795551777f, 0.011877202428877354f, 0.007444259710609913f, 0.015670863911509514f, 0.04201160743832588f, 0.010317418724298477f, 0.002561556175351143f, 0.002811175538226962f, 0.03805868327617645f, 0.010530238971114159f, 0.009477588348090649f, 0.005881123710423708f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #122 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_37_bias_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 144,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.00037945370422676206f, 0.0002947771572507918f, 0.00045913091162219644f, 9.897189011098817e-05f, 0.00021442370780277997f, 0.00047292871749959886f, 0.0002416034258203581f, 9.316380601376295e-05f, 0.0003106666845269501f, 0.00010808613296831027f, 0.0004104340332560241f, 0.0004937394405715168f, 0.00021862580615561455f, 0.00040367062320001423f, 5.934681757935323e-05f, 0.0001511018053861335f, 0.00024301852681674063f, 0.0003760569670703262f, 0.0006101193139329553f, 0.00019960719509981573f, 0.00014418175851460546f, 0.0006414837553165853f, 0.00028989335987716913f, 0.00040134156006388366f, 8.142463775584474e-05f, 0.0007136946078389883f, 0.0002796078333631158f, 0.0002062410640064627f, 0.00013729002967011184f, 0.00029799086041748524f, 4.545651245280169e-05f, 0.00024550006492063403f, 0.000379997247364372f, 0.00019198672089260072f, 0.00019229047757107764f, 0.0007676436798647046f, 0.00012570522085297853f, 0.0001331509556621313f, 0.0005790016730315983f, 0.0002997376141138375f, 6.125762593001127e-05f, 0.0003101292531937361f, 0.0001518491917522624f, 0.00016607689030934125f, 0.0001423262874595821f, 0.00018556836585048586f, 0.00025069096591323614f, 0.00018340788665227592f, 0.00014064801507629454f, 0.0001353914849460125f, 0.00016852507542353123f, 0.0001856422604760155f, 0.00019037887977901846f, 0.00014162095612846315f, 0.00012108818918932229f, 0.0001429542899131775f, 0.00037045846693217754f, 0.0006748440209776163f, 0.0003067987272515893f, 0.0001148995797848329f, 0.0007831235998310149f, 0.00023827595578040928f, 0.00012096919817849994f, 0.00037609756691381335f, 4.029668343719095e-05f, 0.00013966255937702954f, 0.00027980547747574747f, 0.00010131181625183672f, 0.0006098531885072589f, 0.00018780119717121124f, 0.00017748141544871032f, 0.0005683152703568339f, 0.00020049441081937402f, 0.00029990385519340634f, 0.00035074641346000135f, 0.00012708804570138454f, 0.00014319461479317397f, 0.0005028518498875201f, 0.00046028720680624247f, 8.094005897874013e-05f, 0.0001921808288898319f, 0.00033095540129579604f, 0.0003120599139947444f, 0.0003397701366338879f, 6.067049616831355e-05f, 0.0002150462823919952f, 9.280988160753623e-05f, 0.00019741483265534043f, 6.977366138016805e-05f, 0.00019471195992082357f, 0.00017555172962602228f, 6.721082172589377e-05f, 0.0008236540015786886f, 0.00038348950329236686f, 0.00032713726977817714f, 0.0005968713667243719f, 0.0003707609139382839f, 0.00025321365683339536f, 0.00019134687318000942f, 0.0004348027869127691f, 0.0004298198036849499f, 0.00032260484294965863f, 0.00015525992785114795f, 0.00027777731884270906f, 0.00027321703964844346f, 0.000110377419332508f, 0.00021069531794637442f, 0.00016543371020816267f, 0.00021563906921073794f, 6.263405521167442e-05f, 0.00012348417658358812f, 0.0004256210813764483f, 0.0004199344548396766f, 0.0003142233472317457f, 0.00025904542417265475f, 0.0001534471521154046f, 0.00031177743221633136f, 0.0001502667146269232f, 0.00020512101764325052f, 0.00023102949489839375f, 0.00044004825758747756f, 0.0001249783963430673f, 0.0003336772497277707f, 0.0005607987986877561f, 0.0005446680588647723f, 0.00012797497038263828f, 0.00010547629062784836f, 0.00026301760226488113f, 0.00018458848353475332f, 0.0003562930505722761f, 0.00018279271898791194f, 9.429775673197582e-05f, 0.00037150984280742705f, 0.0002794635947793722f, 0.00017515906074550003f, 0.00036872620694339275f, 0.000988508458249271f, 0.0002427627914585173f, 6.0271911934250966e-05f, 6.61453086649999e-05f, 0.0008954984368756413f, 0.000247770338319242f, 0.00022300207638181746f, 0.00013837938604410738f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #123 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_38_weights_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 24,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.007536327466368675f, 0.00801999494433403f, 0.0067336950451135635f, 0.005868542939424515f, 0.00482900720089674f, 0.008653054013848305f, 0.0057270098477602005f, 0.0243294145911932f, 0.007582750637084246f, 0.004557856824249029f, 0.008644452318549156f, 0.010195615701377392f, 0.0051389094442129135f, 0.01878167688846588f, 0.00564588513225317f, 0.011415651068091393f, 0.0064653619192540646f, 0.006628744304180145f, 0.020462773740291595f, 0.005341097246855497f, 0.006616700906306505f, 0.025069810450077057f, 0.028801048174500465f, 0.0077012283727526665f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #124 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_38_bias_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 24,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.00017732536070980132f, 0.00018870577332563698f, 0.00015843988512642682f, 0.00013808337098453194f, 0.00011362370423739776f, 0.0002036012738244608f, 0.0001347531797364354f, 0.0005724568036384881f, 0.00017841767112258822f, 0.00010724369349190965f, 0.00020339888578746468f, 0.00023989684996195138f, 0.00012091551616322249f, 0.0004419218166731298f, 0.00013284436136018485f, 0.00026860355865210295f, 0.00015212617290671915f, 0.00015597045421600342f, 0.00048147703637368977f, 0.00012567287194542587f, 0.00015568708477076143f, 0.0005898778908886015f, 0.0006776717491447926f, 0.00018120538152288646f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #125 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_40_weights_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 144,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0008113232324831188f, 0.0010775492992252111f, 0.0005723476060666144f, 0.0005991226062178612f, 0.0005695565487258136f, 0.000216620959690772f, 0.0005635196575894952f, 0.0007562107057310641f, 0.0003600462223403156f, 0.0007292486843653023f, 0.0006705644773319364f, 0.0008619209984317422f, 0.000840610999148339f, 0.0011124180164188147f, 0.0008973948424682021f, 0.0006878897547721863f, 0.0010445098159834743f, 0.0004966605338267982f, 0.0008466296712867916f, 0.001007533399388194f, 0.0009211411233991385f, 0.0008542484138160944f, 0.0008827652782201767f, 0.0004457172763068229f, 0.0005492367199622095f, 0.0011834970209747553f, 0.0008028554148040712f, 0.00032605533488094807f, 0.0008094653603620827f, 0.0009527849615551531f, 0.0008204763289541006f, 0.0016063262009993196f, 0.001053839223459363f, 0.0007532924646511674f, 0.00043955587898381054f, 0.0010581195820122957f, 0.0007339760777540505f, 0.0008233463158831f, 0.0013385368511080742f, 0.0010147790890187025f, 0.0005099226837046444f, 0.0008318627951666713f, 0.0005092656356282532f, 0.0009151047561317682f, 0.000905409106053412f, 0.0011860650265589356f, 0.0017066756263375282f, 0.0005550682544708252f, 0.000514390179887414f, 0.0007766901981085539f, 0.0005007683648727834f, 0.0006554853171110153f, 0.000437646551290527f, 0.0010441462509334087f, 0.00060150126228109f, 0.0003157711762469262f, 0.0006524514174088836f, 0.001402502995915711f, 0.0007123181130737066f, 0.0008592941449023783f, 0.001589618856087327f, 0.0008488030289299786f, 0.000896283017937094f, 0.0009491632226854563f, 0.0007608009618707001f, 0.00026909320149570704f, 0.0009162002825178206f, 0.0009112415718846023f, 0.0008256774744950235f, 0.0018196996534243226f, 0.0007441292982548475f, 0.0010527452686801553f, 0.0005630338564515114f, 0.0005592163070105016f, 0.0006325563881546259f, 0.0008976782555691898f, 0.0012618321925401688f, 0.0007584310369566083f, 0.0008813321474008262f, 0.0007691272767260671f, 0.00038797224988229573f, 0.0002951848437078297f, 0.0010764754842966795f, 0.0008863614057190716f, 0.0007648871978744864f, 0.0006317524239420891f, 0.0009947698563337326f, 0.0007322739693336189f, 0.0015254851896315813f, 0.0009563984349370003f, 0.0006792198400944471f, 0.0008939726394601166f, 0.000677296775393188f, 0.0008244588389061391f, 0.0006576509913429618f, 0.0006155837909318507f, 0.0004802854382432997f, 0.0010785897029563785f, 0.0003330846084281802f, 0.0005879493546672165f, 0.0012911255471408367f, 0.0009774758946150541f, 0.0005699036410078406f, 0.0003486775967758149f, 0.0011401113588362932f, 0.0007246094755828381f, 0.0003114966384600848f, 0.0008546321769244969f, 0.0009993676794692874f, 0.0008321625646203756f, 0.0006647012196481228f, 0.0006660241633653641f, 0.0009249746799468994f, 0.0007223795400932431f, 0.0008455723291262984f, 0.00047298544086515903f, 0.0007365786004811525f, 0.0005878127412870526f, 0.0007805165369063616f, 0.0010107239941135049f, 0.00093432841822505f, 0.0003556467709131539f, 0.000744287041015923f, 0.00073562579927966f, 8.918435196392238e-05f, 0.0006522645708173513f, 0.000863214663695544f, 0.00040231048478744924f, 0.000933731731493026f, 0.0009674594621174037f, 0.0005159184220246971f, 0.0008207346545532346f, 0.0008078076643869281f, 0.0006354910437949002f, 0.0003875376423820853f, 0.0012079855659976602f, 0.0005167658091522753f, 0.0010282461298629642f, 0.00040580963832326233f, 0.0004213530628476292f, 0.0007244300213642418f, 0.0006180170457810163f, 0.0008321877103298903f, 0.0013572543393820524f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #126 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_40_bias_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 144,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.00022314228408504277f, 0.0002963637525681406f, 0.00015741561946924776f, 0.00016477968893013895f, 0.00015664797683712095f, 5.957834582659416e-05f, 0.00015498763241339475f, 0.0002079844125546515f, 9.90253101917915e-05f, 0.00020056890207342803f, 0.00018442870350554585f, 0.0002370584406889975f, 0.00023119743855204433f, 0.0003059538721572608f, 0.00024681497598066926f, 0.00018919375725090504f, 0.00028727675089612603f, 0.00013659903197549284f, 0.0002328527916688472f, 0.00027710694121196866f, 0.00025334605015814304f, 0.00023494820925407112f, 0.00024279134231619537f, 0.00012258785136509687f, 0.00015105931379366666f, 0.00032550308969803154f, 0.00022081333736423403f, 8.96766287041828e-05f, 0.00022263129358179867f, 0.0002620492014102638f, 0.00022565970721188933f, 0.00044179591350257397f, 0.0002898426610045135f, 0.0002071817871183157f, 0.00012089325173292309f, 0.0002910199109464884f, 0.00020186910114716738f, 0.00022644904674962163f, 0.00036814447958022356f, 0.0002790997677948326f, 0.0001402465859428048f, 0.00022879138123244047f, 0.00014006586570758373f, 0.00025168582214973867f, 0.00024901918368414044f, 0.00032620938145555556f, 0.0004693955124821514f, 0.0001526631967863068f, 0.00014147530600894243f, 0.00021361697872634977f, 0.000137728828121908f, 0.00018028139311354607f, 0.00012036811676807702f, 0.0002871767501346767f, 0.00016543389938306063f, 8.684812200954184e-05f, 0.0001794469717424363f, 0.0003857373958453536f, 0.00019591240561567247f, 0.00023633595264982432f, 0.0004372008261270821f, 0.00023345054069068283f, 0.00024650918203406036f, 0.0002610530937090516f, 0.00020924689306411892f, 7.401004404528067e-05f, 0.00025198713410645723f, 0.0002506233286112547f, 0.00022709020413458347f, 0.0005004811100661755f, 0.00020466159912757576f, 0.0002895417856052518f, 0.00015485401672776788f, 0.00015380405238829553f, 0.00017397514602635056f, 0.00024689294514246285f, 0.00034704801510088146f, 0.00020859506912529469f, 0.0002423971745884046f, 0.00021153691341169178f, 0.00010670594201656058f, 8.118616096908227e-05f, 0.00029606843600049615f, 0.000243780406890437f, 0.00021037075202912092f, 0.00017375402967445552f, 0.0002735965244937688f, 0.00020140096603427082f, 0.0004195618093945086f, 0.0002630430390127003f, 0.00018680922221392393f, 0.0002458737581036985f, 0.0001862803183030337f, 0.0002267550298711285f, 0.00018087703210767359f, 0.00016930708079598844f, 0.00013209530152380466f, 0.00029664990142919123f, 9.160992340184748e-05f, 0.0001617066445760429f, 0.0003551047120708972f, 0.0002688400854822248f, 0.00015674343740101904f, 9.589854016667232e-05f, 0.0003135705192107707f, 0.00019929296104237437f, 8.567247277824208e-05f, 0.00023505375429522246f, 0.0002748610859271139f, 0.0002288738323841244f, 0.0001828160893637687f, 0.00018317994545213878f, 0.00025440039462409914f, 0.00019867965602315962f, 0.00023256198619492352f, 0.00013008754467591643f, 0.00020258489530533552f, 0.00016166907153092325f, 0.00021466935868375003f, 0.0002779844799079001f, 0.00025697299861349165f, 9.781530388863757e-05f, 0.00020470497838687152f, 0.0002023228444159031f, 2.4528817448299378e-05f, 0.00017939558892976493f, 0.00023741423501633108f, 0.0001106494601117447f, 0.0002568089112173766f, 0.0002660852042026818f, 0.00014189562352839857f, 0.0002257307496620342f, 0.00022217538207769394f, 0.00017478228255640715f, 0.00010658641258487478f, 0.00033223829814232886f, 0.0001421286870026961f, 0.0002828036667779088f, 0.00011161185102537274f, 0.00011588683992158622f, 0.00019924360094591975f, 0.0001699763088254258f, 0.00022888074454385787f, 0.000373292452422902f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #127 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_41_weights_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 144,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003426330629736185f, 0.007337741553783417f, 0.0022055439185351133f, 0.0026277301367372274f, 0.007228709291666746f, 0.015240880660712719f, 0.006955714430660009f, 0.006173917092382908f, 0.011643859557807446f, 0.006982831284403801f, 0.006074688397347927f, 0.003766733920201659f, 0.004990074317902327f, 0.005277811083942652f, 0.007054149638861418f, 0.005762411281466484f, 0.001542849699035287f, 0.010752116329967976f, 0.003856804920360446f, 0.0071332729421556f, 0.006158594973385334f, 0.0034771414939314127f, 0.006197480484843254f, 0.013075181283056736f, 0.005466182250529528f, 0.008664114400744438f, 0.005146163981407881f, 0.009896794334053993f, 0.0017814460443332791f, 0.0025455690920352936f, 0.005569430999457836f, 0.006349945906549692f, 0.0053838882595300674f, 0.002945355139672756f, 0.009492723271250725f, 0.001093109487555921f, 0.0010434252908453345f, 0.008069499395787716f, 0.0012730779126286507f, 0.005828601308166981f, 0.0040078554302453995f, 0.006626976653933525f, 0.008721551857888699f, 0.0061093769036233425f, 0.0020343849901109934f, 0.005819076206535101f, 0.00542138097807765f, 0.008535653352737427f, 0.012956294231116772f, 0.001118965563364327f, 0.009922818280756474f, 0.007764161564409733f, 0.010837426409125328f, 0.0027795007918030024f, 0.016232743859291077f, 0.01150276605039835f, 0.00724836764857173f, 0.005395311396569014f, 0.006323385518044233f, 0.007527497131377459f, 0.0021865670569241047f, 0.0014485473511740565f, 0.008648972027003765f, 0.003656314918771386f, 0.004047153517603874f, 0.005967660807073116f, 0.00670055765658617f, 0.006631696596741676f, 0.00851911585777998f, 0.004774108994752169f, 0.0015924948966130614f, 0.0028983219526708126f, 0.00873593706637621f, 0.0053013963624835014f, 0.010617414489388466f, 0.001196523429825902f, 0.005802513565868139f, 0.005286060273647308f, 0.005615984555333853f, 0.006355565972626209f, 0.017565302550792694f, 0.007498355582356453f, 0.0055343834683299065f, 0.003420287510380149f, 0.0033085932955145836f, 0.0052682687528431416f, 0.003148025833070278f, 0.00329153286293149f, 0.002547656185925007f, 0.0031584491953253746f, 0.007370765320956707f, 0.005469569470733404f, 0.005436392035335302f, 0.0033551612868905067f, 0.00767058040946722f, 0.002362719038501382f, 0.01628144644200802f, 0.0032057410571724176f, 0.004986491985619068f, 0.0076394639909267426f, 0.003897417336702347f, 0.00537867471575737f, 0.010090957395732403f, 0.008696626871824265f, 0.00458892248570919f, 0.003630454186350107f, 0.005706906784325838f, 0.0037777479737997055f, 0.00611340394243598f, 0.004048344679176807f, 0.004349956288933754f, 0.004302138462662697f, 0.005606940481811762f, 0.0032223279122263193f, 0.008459373377263546f, 0.004654948133975267f, 0.009443769231438637f, 0.004814986605197191f, 0.007060248404741287f, 0.005659759975969791f, 0.001815018942579627f, 0.013575426302850246f, 0.0028571411967277527f, 0.01019025593996048f, 0.03785299137234688f, 0.0088358698412776f, 0.006351620424538851f, 0.010283669456839561f, 0.003025677753612399f, 0.00484709395095706f, 0.0070548756048083305f, 0.004576251842081547f, 0.0027336226776242256f, 0.008174475282430649f, 0.007338418159633875f, 0.0034900277387350798f, 0.009175753220915794f, 0.0028065366204828024f, 0.007334235589951277f, 0.020516490563750267f, 0.008887229487299919f, 0.006614875514060259f, 0.001453500590287149f, 0.002574482699856162f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #128 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_41_bias_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 144,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(8.061954576987773e-05f, 0.00017265274072997272f, 5.189515286474489e-05f, 6.182894867379218e-05f, 0.00017008728173095733f, 0.00035860895877704024f, 0.00016366387717425823f, 0.00014526864106301218f, 0.0002739731571637094f, 0.0001643019204493612f, 0.00014293384447228163f, 8.862903632689267e-05f, 0.00011741351772798225f, 0.00012418378901202232f, 0.00016597998910583556f, 0.00013558614591602236f, 3.630234641605057e-05f, 0.0002529909834265709f, 9.074835543287918e-05f, 0.00016784171748440713f, 0.0001449081173632294f, 8.181509474525228e-05f, 0.00014582306903321296f, 0.0003076513239648193f, 0.00012861605500802398f, 0.00020386152027640492f, 0.00012108621012885123f, 0.00023286575742531568f, 4.191637708572671e-05f, 5.989574492559768e-05f, 0.0001310454390477389f, 0.00014941049448680133f, 0.00012667971896007657f, 6.930247764103115e-05f, 0.00022335820540320128f, 2.5720224584802054e-05f, 2.4551183742005378e-05f, 0.0001898705813800916f, 2.9954775527585298e-05f, 0.00013714356464333832f, 9.430248610442504e-05f, 0.00015592886484228075f, 0.0002052129857474938f, 0.0001437500468455255f, 4.786788485944271e-05f, 0.00013691943604499102f, 0.00012756191426888108f, 0.00020083891286049038f, 0.0003048539801966399f, 2.6328601961722597e-05f, 0.00023347808746621013f, 0.0001826861553126946f, 0.0002549982746131718f, 6.540001777466387e-05f, 0.0003819469129666686f, 0.00027065331232734025f, 0.0001705498289084062f, 0.00012694850738625973f, 0.00014878554793540388f, 0.0001771175884641707f, 5.144863825989887e-05f, 3.4083466744050384e-05f, 0.00020350523118395358f, 8.603093738202006e-05f, 9.522714390186593e-05f, 0.00014041554823052138f, 0.0001576601789565757f, 0.00015603992505930364f, 0.00020044979464728385f, 0.00011233198165427893f, 3.7470468669198453e-05f, 6.819581176387146e-05f, 0.00020555146329570562f, 0.00012473874085117131f, 0.0002498215180821717f, 2.8153492166893557e-05f, 0.00013652973575517535f, 0.0001243778970092535f, 0.000132140819914639f, 0.0001495427277404815f, 0.00041330125532113016f, 0.00017643190221861005f, 0.0001302207965636626f, 8.047735173022375e-05f, 7.784925401210785e-05f, 0.00012395926751196384f, 7.407119846902788e-05f, 7.744783215457574e-05f, 5.9944854001514614e-05f, 7.431645644828677e-05f, 0.00017342976934742182f, 0.00012869575584772974f, 0.00012791510380338877f, 7.894496957305819e-05f, 0.0001804842468118295f, 5.559339115279727e-05f, 0.0003830928762909025f, 7.542920502601191e-05f, 0.00011732922575902194f, 0.00017975209630094469f, 9.170393605018035e-05f, 0.00012655706086661667f, 0.000237434302107431f, 0.00020462651445996016f, 0.00010797465074574575f, 8.542245632270351e-05f, 0.00013428015518002212f, 8.888819138519466e-05f, 0.0001438447943655774f, 9.525517089059576e-05f, 0.00010235191439278424f, 0.00010122678941115737f, 0.00013192801270633936f, 7.58194801164791e-05f, 0.00019904407963622361f, 0.00010952819138765335f, 0.00022220633400138468f, 0.00011329380504321307f, 0.0001661235000938177f, 0.00013317081902641803f, 4.27063278038986e-05f, 0.0003194218152202666f, 6.722685066051781e-05f, 0.00023977072851266712f, 0.0008906586444936693f, 0.00020790281996596605f, 0.00014944990107323974f, 0.00024196869344450533f, 7.119242218323052e-05f, 0.00011404927499825135f, 0.00016599707305431366f, 0.00010767651838250458f, 6.432053487515077e-05f, 0.00019234059436712414f, 0.00017266866052523255f, 8.211829845095053e-05f, 0.00021590008691418916f, 6.603615474887192e-05f, 0.0001725702459225431f, 0.0004827409575227648f, 0.00020911128376610577f, 0.0001556441275170073f, 3.4200013033114374e-05f, 6.057606515241787e-05f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #129 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_42_weights_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 32,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.011674920096993446f, 0.00967758521437645f, 0.015152351930737495f, 0.011016469448804855f, 0.01176652405411005f, 0.01619415171444416f, 0.008486178703606129f, 0.01100312452763319f, 0.008744033984839916f, 0.01037510298192501f, 0.013144008815288544f, 0.01059738639742136f, 0.010575838387012482f, 0.012610395438969135f, 0.010502099059522152f, 0.012652534060180187f, 0.014006352983415127f, 0.012395715340971947f, 0.010893812403082848f, 0.02277071215212345f, 0.01010508369654417f, 0.013387504033744335f, 0.015813259407877922f, 0.010064502246677876f, 0.012258939445018768f, 0.011503418907523155f, 0.009467682801187038f, 0.010606971569359303f, 0.010264255106449127f, 0.012583581730723381f, 0.008025221526622772f, 0.013279394246637821f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #130 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_42_bias_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 32,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0002747040125541389f, 0.00022770788928028196f, 0.0003565259394235909f, 0.000259211054071784f, 0.0002768593840301037f, 0.0003810388734564185f, 0.00019967480329796672f, 0.0002588970528449863f, 0.0002057419769698754f, 0.00024412007769569755f, 0.00030927080661058426f, 0.00024935026885941625f, 0.0002488432510290295f, 0.0002967151813209057f, 0.0002471082261763513f, 0.0002977066906169057f, 0.0003295612405054271f, 0.0002916638914030045f, 0.0002563250018283725f, 0.0005357814952731133f, 0.00023776668240316212f, 0.0003150000993628055f, 0.00037207669811323285f, 0.00023681182938162237f, 0.00028844564803875983f, 0.0002706686791498214f, 0.00022276901290751994f, 0.0002495757944416255f, 0.00024151189427357167f, 0.0002960842684842646f, 0.0001888287515612319f, 0.0003124563372693956f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #131 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_43_weights_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 192,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.00032341168844141066f, 0.0011865413980558515f, 0.00031805879552848637f, 0.0008569696801714599f, 0.0010884026996791363f, 0.0005688673700205982f, 0.0008494585636071861f, 0.0005880423123016953f, 0.0014194999821484089f, 0.0008934537181630731f, 0.0015005762688815594f, 0.0008270027465187013f, 0.0005817862693220377f, 0.0023835927713662386f, 0.0018034526146948338f, 0.00045473157661035657f, 0.0012256193440407515f, 0.000860156083945185f, 0.0018238837365061045f, 0.0010998439975082874f, 0.0008807090925984085f, 0.0005938247195445001f, 0.00045556086115539074f, 0.000861405220348388f, 0.0007413583807647228f, 0.0003781490959227085f, 0.0007626949809491634f, 0.0007613935740664601f, 0.000902740634046495f, 0.0013664724538102746f, 0.0009966593934223056f, 0.0005773658631369472f, 0.0009861013386398554f, 0.0009993897983804345f, 0.0012530501699075103f, 0.0019189204322174191f, 0.000491703802254051f, 0.0012835707748308778f, 0.0008920939289964736f, 0.0019229738973081112f, 0.00020619432325474918f, 0.0008181802113540471f, 0.001389644225127995f, 0.00037444414920173585f, 0.0003722052788361907f, 0.0005747010582126677f, 0.0007024090155027807f, 0.0007651346386410296f, 0.0008263441268354654f, 0.0008337268955074251f, 0.000501352536957711f, 0.0003271549358032644f, 0.0013295274693518877f, 0.0013445240911096334f, 0.0010767508065328002f, 0.0011076905066147447f, 0.0009372856584377587f, 0.0005134441307745874f, 0.0007680002017877996f, 0.0005117442342452705f, 0.0007940009818412364f, 0.00040789582999423146f, 0.0013508248375728726f, 0.00033558884751982987f, 0.0008354282472282648f, 0.001025501755066216f, 0.0005406698328442872f, 0.0004367642686702311f, 0.0005455253995023668f, 0.0009065046906471252f, 0.0012371288612484932f, 0.0002626857894938439f, 0.0011775476159527898f, 0.0005784829845651984f, 0.0006723963306285441f, 0.0004884321824647486f, 0.001138803898356855f, 0.000778655637986958f, 0.0013029094552621245f, 0.0003051734820473939f, 0.0006195916794240475f, 0.0010168574517592788f, 0.001022843411192298f, 0.0008496730006299913f, 0.0006060089217498899f, 0.0009372962522320449f, 0.000397734489524737f, 0.000381026096874848f, 0.0009999593021348119f, 0.0010798530420288444f, 0.0009866416221484542f, 0.0006766162696294487f, 0.0006114588468335569f, 0.00039862815174274147f, 0.0007683074800297618f, 0.00048203315236605704f, 0.000643390289042145f, 0.00031804980244487524f, 0.0013087191618978977f, 0.00039831263711676f, 0.0006941891624592245f, 0.0006983534549362957f, 0.0007145750569179654f, 0.0006280087400227785f, 0.0011540219420567155f, 0.0015654697781428695f, 0.0003846239414997399f, 0.00016849528765305877f, 0.0007325145998038352f, 0.0011674624402076006f, 0.0004144678823649883f, 0.0011905290884897113f, 0.00035709235817193985f, 0.0003865266917273402f, 0.0009499866282567382f, 0.0005531367496587336f, 0.001068085664883256f, 0.0005120820715092123f, 0.0007835535798221827f, 0.0009194154408760369f, 0.00022173108300194144f, 0.0003391610807739198f, 0.001141487853601575f, 0.0008704440551809967f, 0.0005368822021409869f, 0.0015807083109393716f, 0.0004956136108376086f, 0.0017418760107830167f, 0.0006078238948248327f, 0.0009586358210071921f, 0.00044055533362552524f, 0.0009647823753766716f, 0.00032291992101818323f, 0.0006823497242294252f, 0.0006670299335382879f, 0.0009310308960266411f, 0.0012299418449401855f, 0.0011178526328876615f, 0.0009425882599316537f, 0.001230547670274973f, 0.0008969102636910975f, 0.0009070640662685037f, 0.0012828489998355508f, 0.0005295726587064564f, 0.0006213458254933357f, 0.00047359123709611595f, 0.0014349691336974502f, 0.0011930068721994758f, 0.001028575235977769f, 0.0011111185885965824f, 0.0008787124534137547f, 0.00040993193397298455f, 0.0017185272881761193f, 0.0008498267270624638f, 0.0002563465968705714f, 0.00025566943804733455f, 0.0008692567935213447f, 0.0010591840837150812f, 0.0015341861872002482f, 0.000568760558962822f, 0.0009047134662978351f, 0.0007762688328512013f, 0.0008521358831785619f, 0.0006855885148979723f, 0.00035162732820026577f, 0.0003149861586280167f, 0.0008165589533746243f, 0.0013209863100200891f, 0.0002915158402174711f, 0.0003751031181309372f, 0.0003678590292111039f, 0.0003669419384095818f, 0.0010024365037679672f, 0.0005781264044344425f, 0.0008779867202974856f, 0.0010440903715789318f, 0.0009377953829243779f, 0.0009509588126093149f, 0.0012210238492116332f, 0.0007839326863177121f, 0.0005535164382308722f, 0.000994425150565803f, 0.0009899070719256997f, 0.0006925844354555011f, 0.000849821197334677f, 0.0010336096165701747f, 0.0009221091750077903f, 0.000737036345526576f, 0.0007869915571063757f, 0.0006954104756005108f, 0.0014408944407477975f, 0.0009405541350133717f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #132 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_43_bias_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 192,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(3.5910154110752046e-05f, 0.0001317481219302863f, 3.531579204718582e-05f, 9.515399142401293e-05f, 0.00012085125490557402f, 6.316442886600271e-05f, 9.431999205844477e-05f, 6.529352685902268e-05f, 0.0001576147769810632f, 9.920501179294661e-05f, 0.00016661711561027914f, 9.182660141959786e-05f, 6.459888390963897e-05f, 0.00026466322015039623f, 0.00020024711557198316f, 5.04913114127703e-05f, 0.0001360871538054198f, 9.550779213896021e-05f, 0.00020251570094842464f, 0.00012212163710501045f, 9.778990352060646e-05f, 6.593557918677106e-05f, 5.05833922943566e-05f, 9.564649371895939e-05f, 8.231704123318195e-05f, 4.1987943404819816e-05f, 8.46861585159786e-05f, 8.454165799776092e-05f, 0.00010023618960985914f, 0.0001517268392490223f, 0.0001106644922401756f, 6.410806236090139e-05f, 0.00010949217539746314f, 0.0001109676668420434f, 0.00013913295697420835f, 0.0002130681386915967f, 5.4596537665929645e-05f, 0.00014252182154450566f, 9.905402839649469e-05f, 0.00021351821487769485f, 2.289487383677624e-05f, 9.084698103833944e-05f, 0.0001542997342767194f, 4.157656439929269e-05f, 4.1327970393467695e-05f, 6.381217099260539e-05f, 7.799227751092985e-05f, 8.495704969391227e-05f, 9.17534707696177e-05f, 9.257321653421968e-05f, 5.566788968280889e-05f, 3.632578591350466e-05f, 0.00014762463979423046f, 0.00014928980090189725f, 0.000119557480502408f, 0.00012299288937356323f, 0.00010407190711703151f, 5.701048576156609e-05f, 8.527522732038051e-05f, 5.682173650711775e-05f, 8.816223271423951e-05f, 4.5290886191651225e-05f, 0.00014998939877841622f, 3.726224895217456e-05f, 9.276212949771434e-05f, 0.00011386701953597367f, 6.0033504269085824e-05f, 4.8496305680600926e-05f, 6.0572641814360395e-05f, 0.00010065412789117545f, 0.0001373651175526902f, 2.9167427783249877e-05f, 0.0001307494967477396f, 6.423210288630798e-05f, 7.465980888810009e-05f, 5.4233274568105116e-05f, 0.00012644757225643843f, 8.645835623610765e-05f, 0.00014466910215560347f, 3.388506593182683e-05f, 6.879662396386266e-05f, 0.00011290719703538343f, 0.00011357184848748147f, 9.434379899175838e-05f, 6.72884561936371e-05f, 0.00010407308582216501f, 4.416261799633503e-05f, 4.230739432387054e-05f, 0.00011103090218966827f, 0.00011990193888777867f, 0.00010955216566799209f, 7.512837328249589e-05f, 6.789359031245112e-05f, 4.4261843868298456e-05f, 8.530934428563341e-05f, 5.352275547920726e-05f, 7.143911352613941e-05f, 3.531479524099268e-05f, 0.00014531418855767697f, 4.422681013238616e-05f, 7.70795886637643e-05f, 7.754196849418804e-05f, 7.934313907753676e-05f, 6.97312134434469e-05f, 0.00012813731154892594f, 0.0001738225982990116f, 4.270688077667728e-05f, 1.870894448074978e-05f, 8.133507071761414e-05f, 0.0001296296832151711f, 4.602061744662933e-05f, 0.0001321908930549398f, 3.964990173699334e-05f, 4.2918152757920325e-05f, 0.000105482162325643f, 6.141776975709945e-05f, 0.00011859534424729645f, 5.685924770659767e-05f, 8.70022049639374e-05f, 0.00010208768071606755f, 2.4620003387099132e-05f, 3.765889414353296e-05f, 0.00012674558092840016f, 9.665012476034462e-05f, 5.96129430050496e-05f, 0.00017551460769027472f, 5.5030664952937514e-05f, 0.00019340994185768068f, 6.748998566763476e-05f, 0.0001064425305230543f, 4.8917248932411894e-05f, 0.00010712501534726471f, 3.58555480488576e-05f, 7.576499046990648e-05f, 7.406395161524415e-05f, 0.00010337740968680009f, 0.0001365671050734818f, 0.0001241212448803708f, 0.00010466068488312885f, 0.00013663437857758254f, 9.958881128113717e-05f, 0.00010071624274132773f, 0.00014244168414734304f, 5.880132448510267e-05f, 6.899139407323673e-05f, 5.2585401135729626e-05f, 0.00015933239774312824f, 0.00013246602611616254f, 0.00011420828377595171f, 0.00012337352382019162f, 9.756820509210229e-05f, 4.551696474663913e-05f, 0.0001908174017444253f, 9.436086838832125e-05f, 2.8463551643653773e-05f, 2.8388363716658205e-05f, 9.651829168433324e-05f, 0.00011760694906115532f, 0.00017034901247825474f, 6.315256905509159e-05f, 0.00010045523958979174f, 8.619333675596863e-05f, 9.461726585868746e-05f, 7.612461195094511e-05f, 3.9043086871970445e-05f, 3.497462239465676e-05f, 9.066696657100692e-05f, 0.00014667627692688257f, 3.236858538002707e-05f, 4.164973142906092e-05f, 4.084538159077056e-05f, 4.074355456396006e-05f, 0.00011130596249131486f, 6.41925071249716e-05f, 9.748762386152521e-05f, 0.00011593101226026192f, 0.00010412850679131225f, 0.00010559011570876464f, 0.00013557689089793712f, 8.704429637873545e-05f, 6.145993393147364e-05f, 0.00011041641846532002f, 0.00010991474846377969f, 7.690140773775056e-05f, 9.436025720788166e-05f, 0.0001147672810475342f, 0.0001023867807816714f, 8.183714089682326e-05f, 8.738393808016554e-05f, 7.721519796177745e-05f, 0.00015999031893443316f, 0.00010443482460686937f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #133 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_44_weights_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 192,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.018054069951176643f, 0.006620359607040882f, 0.025574853643774986f, 0.003165300702676177f, 0.0038707833737134933f, 0.010654552839696407f, 0.018586188554763794f, 0.009516652673482895f, 0.002369675086811185f, 0.009977934882044792f, 0.009137600660324097f, 0.006001332309097052f, 0.006852998398244381f, 0.0055337930098176f, 0.004216439556330442f, 0.005444965325295925f, 0.005392185878008604f, 0.001886388286948204f, 0.004735955037176609f, 0.0018985667265951633f, 0.009858437813818455f, 0.008257915265858173f, 0.01627267152070999f, 0.009266496635973454f, 0.006080280523747206f, 0.01218719407916069f, 0.009298691526055336f, 0.006684798281639814f, 0.013127396814525127f, 0.012594174593687057f, 0.004340497311204672f, 0.01436261460185051f, 0.00817538145929575f, 0.009938888251781464f, 0.00833510048687458f, 0.008014840073883533f, 0.021734444424510002f, 0.00337464502081275f, 0.007259948644787073f, 0.005115495529025793f, 0.04040203243494034f, 0.0065132747404277325f, 0.010180490091443062f, 0.017615055665373802f, 0.011495635844767094f, 0.0067142825573682785f, 0.012829427607357502f, 0.010898608714342117f, 0.006939527578651905f, 0.014497960917651653f, 0.009372871369123459f, 0.012696769088506699f, 0.0064120814204216f, 0.006217225454747677f, 0.006952555384486914f, 0.00991812627762556f, 0.013241811655461788f, 0.008346638642251492f, 0.017746424302458763f, 0.020466869696974754f, 0.00616034772247076f, 0.007098950445652008f, 0.004745627287775278f, 0.015753185376524925f, 0.010432726703584194f, 0.0037518369499593973f, 0.004354389384388924f, 0.01427605003118515f, 0.009706073440611362f, 0.01072175707668066f, 0.006314217112958431f, 0.027233602479100227f, 0.0033200338948518038f, 0.014634041115641594f, 0.008650427684187889f, 0.012654799968004227f, 0.012364260852336884f, 0.007224102504551411f, 0.0015333802439272404f, 0.017031719908118248f, 0.007008409593254328f, 0.00927030947059393f, 0.003003495279699564f, 0.0020464821718633175f, 0.0046643759123981f, 0.008930345997214317f, 0.023561742156744003f, 0.01828763633966446f, 0.008256755769252777f, 0.009024511091411114f, 0.008561867289245129f, 0.013110853731632233f, 0.010244139470160007f, 0.004618815612047911f, 0.006539377849549055f, 0.010644081979990005f, 0.009107488207519054f, 0.024293096736073494f, 0.004487911704927683f, 0.009070849046111107f, 0.011705826036632061f, 0.009653838351368904f, 0.010212792083621025f, 0.004330016206949949f, 0.003704899689182639f, 0.007189409341663122f, 0.01952354423701763f, 0.017613664269447327f, 0.006330360192805529f, 0.005396105349063873f, 0.016108980402350426f, 0.0017283160705119371f, 0.00666263559833169f, 0.015792200341820717f, 0.013920251280069351f, 0.00924642849713564f, 0.005742236971855164f, 0.013588028959929943f, 0.019500192254781723f, 0.004343730863183737f, 0.01191216055303812f, 0.016114214435219765f, 0.003987095318734646f, 0.007410502061247826f, 0.017223171889781952f, 0.006030035670846701f, 0.019651329144835472f, 0.011775963939726353f, 0.011120031587779522f, 0.010214206762611866f, 0.02053849585354328f, 0.007564245257526636f, 0.014181413687765598f, 0.009137528948485851f, 0.008277913555502892f, 0.008080964908003807f, 0.00548674026504159f, 0.005394511856138706f, 0.004774217959493399f, 0.006883119698613882f, 0.007588690146803856f, 0.017314834520220757f, 0.010868092998862267f, 0.00927661545574665f, 0.009569159708917141f, 0.015397798269987106f, 0.006086662411689758f, 0.008693883195519447f, 0.01323214266449213f, 0.004951925482600927f, 0.008388222195208073f, 0.014585408382117748f, 0.001807614928111434f, 0.001677349559031427f, 0.03017820417881012f, 0.038819875568151474f, 0.009412476792931557f, 0.005315831396728754f, 0.005033385008573532f, 0.02320755273103714f, 0.005093209911137819f, 0.005347067024558783f, 0.004767707083374262f, 0.021697018295526505f, 0.0214054137468338f, 0.021281491965055466f, 0.012034153565764427f, 0.00662871403619647f, 0.017615893855690956f, 0.013947735540568829f, 0.02492549456655979f, 0.016685280948877335f, 0.0028590322472155094f, 0.010823585093021393f, 0.015073404647409916f, 0.011003278195858002f, 0.005029336083680391f, 0.002625341759994626f, 0.0014480185927823186f, 0.007488604169338942f, 0.007097747642546892f, 0.0037012833636254072f, 0.007103467360138893f, 0.011099714785814285f, 0.005984210409224033f, 0.005986114498227835f, 0.010553400032222271f, 0.005812572315335274f, 0.013979761861264706f, 0.0033526450861245394f, 0.0028871374670416117f, 0.005886649712920189f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #134 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_44_bias_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 192,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0003601369680836797f, 0.00013206087169237435f, 0.0005101592396385968f, 6.314043275779113e-05f, 7.721318252151832e-05f, 0.00021253370505291969f, 0.0003707515134010464f, 0.0001898352347780019f, 4.726954284706153e-05f, 0.00019903674547094852f, 0.0001822740159695968f, 0.0001197127130581066f, 0.00013670147745870054f, 0.00011038638331228867f, 8.41082219267264e-05f, 0.0001086144766304642f, 0.00010756164556369185f, 3.762908818316646e-05f, 9.447136108065024e-05f, 3.7872017855988815e-05f, 0.00019665305444505066f, 0.00016472632705699652f, 0.00032460218062624335f, 0.00018484519387129694f, 0.0001212875431519933f, 0.00024310636217705905f, 0.00018548741354607046f, 0.00013334627146832645f, 0.00026186121976934373f, 0.0002512246719561517f, 8.658289152663201e-05f, 0.00028650095919147134f, 0.00016307996702380478f, 0.00019825785420835018f, 0.00016626599244773388f, 0.00015987754159141332f, 0.0004335519333835691f, 6.731636676704511e-05f, 0.00014481920516118407f, 0.00010204231512034312f, 0.0008059272076934576f, 0.00012992478150408715f, 0.00020307724480517209f, 0.00035137965460307896f, 0.0002293113648192957f, 0.00013393441622611135f, 0.0002559174317866564f, 0.00021740206284448504f, 0.00013842753833159804f, 0.0002892008051276207f, 0.00018696712504606694f, 0.0002532711951062083f, 0.00012790621258318424f, 0.00012401927961036563f, 0.00013868740643374622f, 0.00019784369214903563f, 0.0002641435421537608f, 0.00016649614553898573f, 0.00035400016349740326f, 0.00040826675831340253f, 0.00012288469588384032f, 0.00014160765567794442f, 9.466429764870554e-05f, 0.0003142396453768015f, 0.00020810878777410835f, 7.484047819161788e-05f, 8.68600036483258e-05f, 0.00028477419982664287f, 0.00019361374143045396f, 0.00021387427113950253f, 0.00012595404405146837f, 0.0005432474426925182f, 6.622700311709195e-05f, 0.0002919152902904898f, 0.00017255604325328022f, 0.0002524340234231204f, 0.0002466384321451187f, 0.00014410415315069258f, 3.058739093830809e-05f, 0.00033974344842135906f, 0.00013980157382320613f, 0.00018492125673219562f, 5.991278885630891e-05f, 4.082258965354413e-05f, 9.304351988248527e-05f, 0.00017813975864555687f, 0.00047000229824334383f, 0.00036479608388617635f, 0.00016470318951178342f, 0.0001800181344151497f, 0.00017078946984838694f, 0.0002615312405396253f, 0.00020434691396076232f, 9.213469456881285e-05f, 0.00013044547813478857f, 0.00021232484141364694f, 0.00018167334201280028f, 0.0004845911462325603f, 8.952346979640424e-05f, 0.00018094247207045555f, 0.0002335041790502146f, 0.00019257176609244198f, 0.00020372160361148417f, 8.637381688458845e-05f, 7.390418613795191e-05f, 0.00014341210771817714f, 0.00038944958942011f, 0.00035135188954882324f, 0.0001262760633835569f, 0.00010763983300421387f, 0.00032133693457581103f, 3.4475910069886595e-05f, 0.00013290418428368866f, 0.000315017910907045f, 0.0002776768524199724f, 0.0001844448852352798f, 0.00011454436025815085f, 0.00027104976470582187f, 0.00038898378261364996f, 8.664739289088175e-05f, 0.00023762007185723633f, 0.00032144133001565933f, 7.953333988552913e-05f, 0.00014782238577026874f, 0.0003435624821577221f, 0.00012028527999063954f, 0.0003919985902030021f, 0.00023490327293984592f, 0.0002218189329141751f, 0.00020374981977511197f, 0.0004096955235581845f, 0.00015088921645656228f, 0.00028288643807172775f, 0.00018227258988190442f, 0.00016512523870915174f, 0.00016119657084345818f, 0.00010944779205601662f, 0.0001076080443453975f, 9.52346163103357e-05f, 0.0001373023260384798f, 0.00015137683658394963f, 0.0003453909303061664f, 0.00021679334167856723f, 0.00018504704348742962f, 0.00019088262342847884f, 0.00030715050525031984f, 0.00012141485058236867f, 0.00017342287173960358f, 0.000263950671069324f, 9.877947013592348e-05f, 0.00016732564836274832f, 0.00029094520141370595f, 3.605773963499814e-05f, 3.345924778841436e-05f, 0.0006019854336045682f, 0.0007743667811155319f, 0.0001877571630757302f, 0.00010603855480439961f, 0.00010040440247394145f, 0.00046293705236166716f, 0.00010159776866203174f, 0.00010666163143469021f, 9.510474046692252e-05f, 0.000432805361924693f, 0.0004269885248504579f, 0.00042451659101061523f, 0.00024005355953704566f, 0.0001322275202255696f, 0.0003513963602017611f, 0.0002782250812742859f, 0.0004972059978172183f, 0.00033283280208706856f, 5.703108763555065e-05f, 0.00021590551477856934f, 0.0003006795886904001f, 0.00021948997164145112f, 0.0001003236320684664f, 5.236950164544396e-05f, 2.8884624043712392e-05f, 0.00014938034291844815f, 0.00014158365956973284f, 7.38320522941649e-05f, 0.00014169776113703847f, 0.00022141366207506508f, 0.0001193711650557816f, 0.00011940915283048525f, 0.00021051593648735434f, 0.00011594738316489384f, 0.0002788639394566417f, 6.687752465950325e-05f, 5.7591721997596323e-05f, 0.00011742505739675835f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #135 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_45_weights_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 32,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.007749897427856922f, 0.005714763421565294f, 0.00891017820686102f, 0.0028800428844988346f, 0.011259741149842739f, 0.006039251107722521f, 0.003631435101851821f, 0.006122638005763292f, 0.0035006001126021147f, 0.011075149290263653f, 0.0063078561797738075f, 0.006608118303120136f, 0.006569951307028532f, 0.0054818810895085335f, 0.005352150183171034f, 0.005054481793195009f, 0.012093666940927505f, 0.01664048433303833f, 0.007726133335381746f, 0.012266820296645164f, 0.013870679773390293f, 0.007803161628544331f, 0.016888733953237534f, 0.004401994403451681f, 0.010988786816596985f, 0.005640050396323204f, 0.014101756736636162f, 0.012818151153624058f, 0.0036602572072297335f, 0.00567741459235549f, 0.004379058722406626f, 0.007833954878151417f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #136 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_45_bias_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 32,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.00018235052993986756f, 0.0001344650227110833f, 0.00020965126168448478f, 6.776571535738185e-05f, 0.0002649350790306926f, 0.00014210003428161144f, 8.54455356602557e-05f, 0.00014406206901185215f, 8.236706344177946e-05f, 0.00026059173978865147f, 0.0001484201493440196f, 0.00015548513329122216f, 0.00015458709094673395f, 0.00012898544082418084f, 0.00012593294377438724f, 0.00011892898328369483f, 0.00028455688152462244f, 0.00039154081605374813f, 0.00018179137259721756f, 0.0002886310685425997f, 0.00032636892865411937f, 0.00018360381363891065f, 0.00039738198393024504f, 0.00010357634164392948f, 0.00025855968124233186f, 0.0001327070640400052f, 0.00033180604805238545f, 0.00030160354799591005f, 8.612369856564328e-05f, 0.00013358623255044222f, 0.00010303667659172788f, 0.00018432835349813104f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #137 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_47_weights_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 192,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0008625427144579589f, 0.00051379285287112f, 0.0007296895491890609f, 0.000546658702660352f, 0.001209146692417562f, 0.0005111004575155675f, 0.0006256686756387353f, 0.0008359849452972412f, 0.0005311143468134105f, 0.000782495888415724f, 0.0007235250086523592f, 0.001010733307339251f, 0.0002581264707259834f, 0.0007385193603113294f, 0.000339593825628981f, 0.0006864143651910126f, 0.0010900238994508982f, 0.0006189288105815649f, 0.00078851223224774f, 0.0004767559003084898f, 0.000597604492213577f, 0.0010670560877770185f, 0.0010359393199905753f, 0.0010001875925809145f, 0.0007992943283170462f, 0.00034232038888148963f, 0.0007739160791970789f, 0.0006788976606912911f, 0.0010651586344465613f, 0.0005619360599666834f, 0.0006341176340356469f, 0.0009419318521395326f, 0.0003293619956821203f, 0.00034364452585577965f, 0.0007245560409501195f, 0.0006921215099282563f, 0.0002382792008575052f, 0.00059777736896649f, 0.0004890146665275097f, 0.0009467689669691026f, 0.00047706166515126824f, 0.0008485311991535127f, 0.0005926581216044724f, 0.0011245313799008727f, 0.0005165537586435676f, 0.0008116841781884432f, 0.0005404351395554841f, 0.0006057712598703802f, 0.0014962459681555629f, 0.0007633787463419139f, 0.0006356958183459938f, 0.0009400745038874447f, 0.000943232502322644f, 0.00016035352018661797f, 0.0009569679968990386f, 0.00021536275744438171f, 0.0007625056896358728f, 0.0008143483428284526f, 0.0007173212943598628f, 0.0007827544468455017f, 0.0005537251709029078f, 0.0014227807987481356f, 0.0008706835797056556f, 0.0006278990767896175f, 0.0003101000329479575f, 0.0007867384701967239f, 0.0008765716920606792f, 0.00041726717608980834f, 0.001086161588318646f, 0.0004928153939545155f, 0.0004844842478632927f, 0.0005188795039430261f, 0.0005307404207997024f, 0.0008663290645927191f, 0.001121107256039977f, 0.0008398945210501552f, 0.0009402642608620226f, 0.0008013627957552671f, 0.0004064335080329329f, 0.0012637708568945527f, 0.0005791607545688748f, 0.0007223670254461467f, 0.0008164357859641314f, 0.0004893203149549663f, 0.0006815489032305777f, 0.00033381141838617623f, 0.0009274841868318617f, 0.0006080447346903384f, 0.000664547027554363f, 0.0008764293161220849f, 0.0008444120758213103f, 0.0009694222826510668f, 0.0007733152015134692f, 0.0010843065101653337f, 0.0009733180631883442f, 0.0005611676606349647f, 0.0004615365469362587f, 0.0011277964804321527f, 0.000733088469132781f, 0.0007174392812885344f, 0.0005699022440239787f, 0.000882044667378068f, 0.00037464036722667515f, 0.0007754567777737975f, 0.0008738130563870072f, 0.0004071898583788425f, 0.000660342862829566f, 0.0006980164325796068f, 0.0010012310231104493f, 0.0006227890262380242f, 0.0007714850944466889f, 0.0004533161118160933f, 0.00022306227765511721f, 0.0008311395649798214f, 0.0007627648301422596f, 0.0007503266097046435f, 0.0007808137452229857f, 0.0004313462704885751f, 0.0008490485488437116f, 0.0008822308154776692f, 0.00045108652557246387f, 0.0005932406056672335f, 0.0007453255821019411f, 0.000491010898258537f, 0.0008564531453885138f, 0.0005125324241816998f, 0.0006771680200472474f, 0.0008079250692389905f, 0.0009258085628971457f, 0.00032946636201813817f, 0.0008485734579153359f, 0.0002794366155285388f, 0.002470482839271426f, 0.0007100891671143472f, 0.0004241573915351182f, 0.0006259874789975584f, 0.0010425894288346171f, 0.0005358005873858929f, 0.00045203304034657776f, 0.0009928301442414522f, 0.0008864885312505066f, 0.0009048365755006671f, 0.0007861183839850128f, 0.001098264125175774f, 0.0004907884285785258f, 0.0011856890050694346f, 0.0006651260773651302f, 0.0007853349670767784f, 0.00032986249425448477f, 0.0006142286001704633f, 0.0009907200001180172f, 0.0008178122225217521f, 0.0009024980827234685f, 0.0008739387849345803f, 0.0010244139702990651f, 0.0010817450238391757f, 0.00033939265995286405f, 0.0009125432698056102f, 0.000779742025770247f, 0.0008890738245099783f, 0.0012509481748566031f, 0.00122064258903265f, 0.000714385649189353f, 0.0013826241483911872f, 0.000877216225489974f, 0.000656621006783098f, 0.0009237349731847644f, 0.0007226343150250614f, 0.00028698352980427444f, 0.0008438162039965391f, 0.000777672918047756f, 0.0006596830207854509f, 0.0003550536057446152f, 0.0004507796256802976f, 0.00037243010592646897f, 0.0003904745390173048f, 0.0007339532603509724f, 0.0005985241150483489f, 0.0007098575006239116f, 0.0009141196496784687f, 0.0007627690793015063f, 0.0007413552375510335f, 0.0007431278354488313f, 0.000912803749088198f, 0.001705822185613215f, 0.0008764963713474572f, 0.0003245310508646071f, 0.0006256687338463962f, 0.001273418660275638f, 0.0008483212441205978f, 0.0010146802524104714f, 0.0008299885084852576f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #138 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_47_bias_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 192,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.00013838661834597588f, 8.243308548117056e-05f, 0.00011707162047969177f, 8.770609565544873e-05f, 0.00019399587472435087f, 8.200111915357411e-05f, 0.00010038248001364991f, 0.000134125686599873f, 8.521215204382315e-05f, 0.00012554388376884162f, 0.00011608257773332298f, 0.00016216236690524966f, 4.1413892176933587e-05f, 0.00011848827853100374f, 5.448453885037452e-05f, 0.00011012853065039963f, 0.00017488376761320978f, 9.930112719302997e-05f, 0.00012650914140976965f, 7.649086182937026e-05f, 9.587984823156148e-05f, 0.0001711988152237609f, 0.00016620643145870417f, 0.0001604704011697322f, 0.00012823902943637222f, 5.492199125001207e-05f, 0.00012416733079589903f, 0.00010892255522776395f, 0.00017089438915718347f, 9.0157198428642e-05f, 0.00010173802729696035f, 0.00015112383698578924f, 5.284294093144126e-05f, 5.5134434660431e-05f, 0.00011624799662968144f, 0.00011104418808827177f, 3.8229587516980246e-05f, 9.590758418198675e-05f, 7.845766231184825e-05f, 0.00015189990517683327f, 7.65399236115627e-05f, 0.0001361386093776673f, 9.508625225862488e-05f, 0.00018042016017716378f, 8.287604578072205e-05f, 0.00013022686471231282f, 8.670757961226627e-05f, 9.719013178255409e-05f, 0.00024005817249417305f, 0.00012247671838849783f, 0.00010199123789789155f, 0.00015082584286574274f, 0.00015133251145016402f, 2.5727169486344792e-05f, 0.00015353623894043267f, 3.455286787357181e-05f, 0.0001223366562044248f, 0.00013065429811831564f, 0.00011508724855957553f, 0.0001255853712791577f, 8.88398353708908e-05f, 0.00022827139764558524f, 0.00013969274004921317f, 0.00010074032616103068f, 4.975254705641419e-05f, 0.0001262245641555637f, 0.00014063743583392352f, 6.694647890981287e-05f, 0.00017426410340704024f, 7.906745304353535e-05f, 7.773080142214894e-05f, 8.324918599100783e-05f, 8.51521544973366e-05f, 0.00013899410259909928f, 0.00017987079627346247f, 0.00013475293235387653f, 0.0001508562854724005f, 0.00012857090041507035f, 6.520831811940297e-05f, 0.00020275979477446526f, 9.292073082178831e-05f, 0.00011589679343160242f, 0.0001309892104472965f, 7.850670226616785e-05f, 0.00010934791498584673f, 5.355680696084164e-05f, 0.00014880584785714746f, 9.755488281371072e-05f, 0.0001066201293724589f, 0.00014061458932701498f, 0.00013547773414757103f, 0.0001555344060761854f, 0.0001240709243575111f, 0.00017396647308487445f, 0.00015615945449098945f, 9.003391460282728e-05f, 7.404906500596553e-05f, 0.00018094401457346976f, 0.00011761693895095959f, 0.00011510618060128763f, 9.143529314314947e-05f, 0.00014151552750263363f, 6.010741708450951e-05f, 0.0001244145241798833f, 0.00014019483933225274f, 6.532966654049233e-05f, 0.00010594561172183603f, 0.00011198997526662424f, 0.00016063782095443457f, 9.992046398110688e-05f, 0.00012377731036394835f, 7.273018127307296e-05f, 3.5788179957307875e-05f, 0.0001333482941845432f, 0.00012237823102623224f, 0.00012038263230351731f, 0.00012527400394901633f, 6.920532905496657e-05f, 0.0001362216135021299f, 0.00014154538803268224f, 7.237245881697163e-05f, 9.517970465822145e-05f, 0.00011958026880165562f, 7.8777942690067e-05f, 0.00013740960275754333f, 8.223086479119956e-05f, 0.000108645050204359f, 0.00012962374603375793f, 0.0001485370157752186f, 5.2859686547890306e-05f, 0.00013614539057016373f, 4.483289740164764e-05f, 0.00039636503788642585f, 0.00011392692977096885f, 6.805194425396621e-05f, 0.00010043362271972f, 0.00016727337788324803f, 8.59640131238848e-05f, 7.252432260429487e-05f, 0.00015928997891023755f, 0.00014222849858924747f, 0.0001451722637284547f, 0.00012612507271114737f, 0.00017620583821553737f, 7.874224684201181e-05f, 0.00019023231288883835f, 0.00010671303607523441f, 0.00012599938781931996f, 5.29232420376502e-05f, 9.854702511802316e-05f, 0.0001589514286024496f, 0.0001312100503128022f, 0.00014479707169812173f, 0.00014021500828675926f, 0.00016435729048680514f, 0.00017355551244691014f, 5.4452262702398e-05f, 0.0001464087254134938f, 0.00012510205851867795f, 0.00014264328638091683f, 0.0002007025177590549f, 0.00019584027177188545f, 0.00011461625399533659f, 0.00022182865359354764f, 0.0001407408417435363f, 0.00010534848115639761f, 0.00014820432988926768f, 0.0001159396706498228f, 4.604372588801198e-05f, 0.00013538212806452066f, 0.00012477008567657322f, 0.00010583974653854966f, 5.696490916307084e-05f, 7.232322241179645e-05f, 5.9752801462309435e-05f, 6.264785770326853e-05f, 0.00011775569146266207f, 9.602739737601951e-05f, 0.00011388975690351799f, 0.00014666163770016283f, 0.00012237891496624798f, 0.00011894326598849148f, 0.00011922766134375706f, 0.00014645051851402968f, 0.0002736826427280903f, 0.00014062534319236875f, 5.206786227063276e-05f, 0.00010038248728960752f, 0.00020430768199730664f, 0.00013610492169391364f, 0.00016279560804832727f, 0.00013316361582838f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #139 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_48_weights_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 192,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.016203798353672028f, 0.007554057519882917f, 0.004066365770995617f, 0.004748281091451645f, 0.004219761583954096f, 0.012228432111442089f, 0.0046197157353162766f, 0.020520733669400215f, 0.005375362001359463f, 0.00460541108623147f, 0.005876836366951466f, 0.006047585513442755f, 0.018575487658381462f, 0.002638086210936308f, 0.011204955168068409f, 0.0059713092632591724f, 0.0029317927546799183f, 0.020427679643034935f, 0.006107732187956572f, 0.007507406175136566f, 0.00726756127551198f, 0.008298497647047043f, 0.0135270981118083f, 0.011631753295660019f, 0.0021178063470870256f, 0.010800798423588276f, 0.005408957600593567f, 0.016951031982898712f, 0.008287230506539345f, 0.004936345387250185f, 0.009154113940894604f, 0.005108756013214588f, 0.012456993572413921f, 0.01994352973997593f, 0.012352596037089825f, 0.015573079697787762f, 0.018828265368938446f, 0.003236063988879323f, 0.005848153959959745f, 0.010064392350614071f, 0.008015774190425873f, 0.005387116689234972f, 0.007616246119141579f, 0.0036570231895893812f, 0.006200704257935286f, 0.006238773465156555f, 0.003814087016507983f, 0.008336582221090794f, 0.0025631317403167486f, 0.005506657995283604f, 0.008391538634896278f, 0.0012246272526681423f, 0.0021680211648344994f, 0.025277849286794662f, 0.0041873520240187645f, 0.023499736562371254f, 0.007079042959958315f, 0.002604075940325856f, 0.010222547687590122f, 0.004853956867009401f, 0.006549963727593422f, 0.005234846379607916f, 0.005766728427261114f, 0.00585844274610281f, 0.014938839711248875f, 0.005808607675135136f, 0.00799810141324997f, 0.007871921174228191f, 0.004368157126009464f, 0.00888268556445837f, 0.006928008049726486f, 0.01448057871311903f, 0.0065931170247495174f, 0.005201361607760191f, 0.010389847680926323f, 0.0044304425828158855f, 0.004964267369359732f, 0.0046560149639844894f, 0.010677642188966274f, 0.004456842318177223f, 0.014525695703923702f, 0.005282385274767876f, 0.005113884806632996f, 0.028444737195968628f, 0.007052164524793625f, 0.008121535181999207f, 0.007076418958604336f, 0.0036364237312227488f, 0.008585551753640175f, 0.0017275908030569553f, 0.005375778768211603f, 0.005427372641861439f, 0.0014747085515409708f, 0.0047073462046682835f, 0.0014292163541540504f, 0.009676567278802395f, 0.006433594040572643f, 0.006272854749113321f, 0.005234536714851856f, 0.0069043319672346115f, 0.013152011670172215f, 0.00797850638628006f, 0.01835136115550995f, 0.0015132968546822667f, 0.006619186606258154f, 0.023146644234657288f, 0.0024009146727621555f, 0.006353786215186119f, 0.012704758904874325f, 0.003986837808042765f, 0.005294825416058302f, 0.007499827072024345f, 0.0119880186393857f, 0.0016590936575084925f, 0.012636708095669746f, 0.0057333228178322315f, 0.009924924932420254f, 0.013512912206351757f, 0.0015329272719100118f, 0.004222664050757885f, 0.0188178401440382f, 0.006678732577711344f, 0.011024024337530136f, 0.01520662009716034f, 0.0044531188905239105f, 0.005063287913799286f, 0.006685076281428337f, 0.006183235440403223f, 0.008996655233204365f, 0.015121294185519218f, 0.007910223677754402f, 0.024142660200595856f, 0.001490857801400125f, 0.011371629312634468f, 0.01391166914254427f, 0.0063115814700722694f, 0.0017983692232519388f, 0.006221874617040157f, 0.003920017275959253f, 0.004404927138239145f, 0.00456650834530592f, 0.006975763011723757f, 0.0034290167968720198f, 0.00343267060816288f, 0.014398650266230106f, 0.005281529854983091f, 0.005939324852079153f, 0.005377169698476791f, 0.014922181144356728f, 0.008395967073738575f, 0.005178079940378666f, 0.007585057523101568f, 0.003966381307691336f, 0.0020307828672230244f, 0.004857709165662527f, 0.005210993345826864f, 0.007899516262114048f, 0.009750034660100937f, 0.004706408362835646f, 0.010133291594684124f, 0.004169276915490627f, 0.008083284832537174f, 0.011183748953044415f, 0.005547034554183483f, 0.003646834520623088f, 0.008109643124043941f, 0.006832651793956757f, 0.007940644398331642f, 0.018626684322953224f, 0.004149153828620911f, 0.005238965153694153f, 0.002244005212560296f, 0.00616175914183259f, 0.005735913757234812f, 0.008705979213118553f, 0.01571616716682911f, 0.008512546308338642f, 0.005795422941446304f, 0.0050806812942028046f, 0.0079620610922575f, 0.005968877114355564f, 0.004010705277323723f, 0.00588963134214282f, 0.002929034875705838f, 0.004261421505361795f, 0.002787009347230196f, 0.012331672012805939f, 0.009056318551301956f, 0.007884956896305084f, 0.006958882790058851f, 0.004402851220220327f, 0.0037137973122298717f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #140 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_48_bias_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 192,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0003812658542301506f, 0.00017774253501556814f, 9.567919914843515e-05f, 0.00011172426457051188f, 9.928851068252698e-05f, 0.00028772783116437495f, 0.00010869919788092375f, 0.00048284081276506186f, 0.0001264791062567383f, 0.00010836261935764924f, 0.00013827851216774434f, 0.00014229613589122891f, 0.00043707029544748366f, 6.207262049429119e-05f, 0.00026364601217210293f, 0.00014050138997845352f, 6.898336141603068e-05f, 0.0004806513024959713f, 0.00014371135330293328f, 0.00017664485494606197f, 0.00017100144759751856f, 0.00019525877723935992f, 0.0003182846703566611f, 0.00027368831797502935f, 4.983073813491501e-05f, 0.000254136451985687f, 0.00012726959539577365f, 0.0003988478274550289f, 0.0001949936558958143f, 0.00011614930554060265f, 0.0002153909154003486f, 0.00012020602298434824f, 0.00029310572426766157f, 0.00046925953938625753f, 0.0002906493318732828f, 0.00036642540362663567f, 0.00044301801244728267f, 7.614268542965874e-05f, 0.00013760362344328314f, 0.00023680923914071172f, 0.00018860645650420338f, 0.00012675569450948387f, 0.00017920578829944134f, 8.604760660091415e-05f, 0.00014589892816729844f, 0.00014679467130918056f, 8.974322554422542e-05f, 0.00019615488417912275f, 6.030898293829523e-05f, 0.00012956841965205967f, 0.00019744796736631542f, 2.8814760298701003e-05f, 5.101226270198822e-05f, 0.0005947729223407805f, 9.852593211689964e-05f, 0.0005529350019060075f, 0.00016656571824569255f, 6.127237429609522e-05f, 0.00024053054221440107f, 0.00011421075032558292f, 0.0001541168021503836f, 0.00012317285290919244f, 0.0001356877328362316f, 0.00013784570910502225f, 0.0003515021235216409f, 0.00013667313032783568f, 0.00018819062097463757f, 0.00018522168102208525f, 0.00010278016998199746f, 0.00020900437084492296f, 0.0001630119513720274f, 0.00034071950358338654f, 0.0001551321620354429f, 0.0001223849831148982f, 0.0002444669953547418f, 0.00010424570791656151f, 0.00011680629540933296f, 0.00010955329344142228f, 0.00025123864179477096f, 0.0001048668782459572f, 0.00034178109490312636f, 0.00012429141497705132f, 0.00012032670201733708f, 0.0006692879251204431f, 0.00016593329200986773f, 0.00019109495042357594f, 0.0001665039744693786f, 8.556291140848771e-05f, 0.00020201299048494548f, 4.064919630764052e-05f, 0.00012648891424760222f, 0.0001277028932236135f, 3.469902367214672e-05f, 0.0001107610878534615f, 3.362862116773613e-05f, 0.00022768393682781607f, 0.00015137868467718363f, 0.00014759658370167017f, 0.00012316557695157826f, 0.00016245487495325506f, 0.0003094591083936393f, 0.00018772957264445722f, 0.0004317967395763844f, 3.5606986784841865e-05f, 0.00015574556891806424f, 0.0005446269060485065f, 5.649211016134359e-05f, 0.00014950086188036948f, 0.0002989355125464499f, 9.380795381730422e-05f, 0.00012458412675186992f, 0.00017646652122493833f, 0.00028207103605382144f, 3.903749893652275e-05f, 0.0002973343071062118f, 0.00013490171113517135f, 0.00023352765128947794f, 0.0003179508785251528f, 3.606887912610546e-05f, 9.93568028206937e-05f, 0.0004427727253641933f, 0.00015714665642008185f, 0.00025938882026821375f, 0.00035780284088104963f, 0.00010477926844032481f, 0.00011913618800463155f, 0.0001572959154145792f, 0.00014548789476975799f, 0.00021168601233512163f, 0.00035579517134465277f, 0.00018612291023600847f, 0.0005680625909008086f, 3.5079006920568645e-05f, 0.0002675677533261478f, 0.00032733340049162507f, 0.00014850779552944005f, 4.231457205605693e-05f, 0.00014639705477748066f, 9.223569941241294e-05f, 0.0001036453468259424f, 0.00010744726023403928f, 0.0001641356066102162f, 8.068275201367214e-05f, 8.076872472884133e-05f, 0.0003387917822692543f, 0.00012427128967829049f, 0.0001397488231305033f, 0.00012652164150495082f, 0.0003511101531330496f, 0.00019755217363126576f, 0.00012183717626612633f, 0.00017847194976639003f, 9.332662011729553e-05f, 4.778312722919509e-05f, 0.00011429904407123104f, 0.0001226116146426648f, 0.00018587097292765975f, 0.00022941258794162422f, 0.00011073901987401769f, 0.00023843039525672793f, 9.810063784243539e-05f, 0.0001901949435705319f, 0.00026314702699892223f, 0.00013051845598965883f, 8.580787107348442e-05f, 0.00019081513164564967f, 0.00016076827887445688f, 0.00018683868984226137f, 0.0004382749320939183f, 9.762714762473479e-05f, 0.00012326976866461337f, 5.280012192088179e-05f, 0.00014498256496153772f, 0.0001349626836599782f, 0.00020484656852204353f, 0.0003697921638377011f, 0.0002002952096518129f, 0.00013636289804708213f, 0.00011954544606851414f, 0.00018734262266661972f, 0.00014044417184777558f, 9.436954132979736e-05f, 0.0001385795621899888f, 6.891846715006977e-05f, 0.000100268742244225f, 6.557669257745147e-05f, 0.0002901569823734462f, 0.0002130898501491174f, 0.00018552840629126877f, 0.00016373842663597316f, 0.00010359650332247838f, 8.738346514292061e-05f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #141 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_49_weights_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 32,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0101264463737607f, 0.00918611977249384f, 0.010365044698119164f, 0.005089129786938429f, 0.011219711042940617f, 0.0069084553979337215f, 0.004548918455839157f, 0.00854492001235485f, 0.006949711125344038f, 0.018635746091604233f, 0.00885335449129343f, 0.009021056815981865f, 0.009762370958924294f, 0.005212767980992794f, 0.006458087358623743f, 0.006344901397824287f, 0.014575164765119553f, 0.015147115103900433f, 0.007065828889608383f, 0.01379906851798296f, 0.030049363151192665f, 0.014199403114616871f, 0.027553731575608253f, 0.005239518359303474f, 0.03390667587518692f, 0.009121792390942574f, 0.02397788316011429f, 0.018095890060067177f, 0.00576006667688489f, 0.0073937661945819855f, 0.004664139822125435f, 0.00832268875092268f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #142 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_49_bias_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 32,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.00023826933465898037f, 0.00021614400611724705f, 0.0002438834053464234f, 0.00011974423250649124f, 0.0002639931917656213f, 0.00016255189257208258f, 0.00010703337466111407f, 0.000201056944206357f, 0.00016352262173313648f, 0.00043848814675584435f, 0.00020831423171330243f, 0.00021226015815045685f, 0.00022970285499468446f, 0.00012265336408745497f, 0.00015195499872788787f, 0.00014929179451428354f, 0.00034294507349841297f, 0.0003564027138054371f, 0.00016625480202492326f, 0.0003246839623898268f, 0.0007070438587106764f, 0.00033410362084396183f, 0.0006483230972662568f, 0.00012328279262874275f, 0.0007978041539900005f, 0.00021463041775859892f, 0.0005641854950226843f, 0.0004257856635376811f, 0.00013553097960539162f, 0.00017397096962668002f, 0.00010974446922773495f, 0.00019582797540351748f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #143 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_51_weights_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 192,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0007653206121176481f, 0.0006299425149336457f, 0.0005949361948296428f, 0.00047267350601032376f, 0.0006513496628031135f, 0.001058668247424066f, 0.001816323958337307f, 0.0010857894085347652f, 0.001072707469575107f, 0.0011234898120164871f, 0.000573095167055726f, 0.0006114342832006514f, 0.0005448478041216731f, 0.0007142863469198346f, 0.0013426911318674684f, 0.0006049048388376832f, 0.0008690024842508137f, 0.0002919101098086685f, 0.0009353847126476467f, 0.00098491704557091f, 0.0011313777649775147f, 0.000485420721815899f, 0.0006553393322974443f, 0.0006643316010013223f, 0.0007078956696204841f, 0.0007084242533892393f, 0.0007156254723668098f, 0.0008788052364252508f, 0.0006407378823496401f, 0.0005908616585657f, 0.0008390236180275679f, 0.0008337265462614596f, 0.0007419582107104361f, 0.0007365032215602696f, 0.0006312023033387959f, 0.0009218861232511699f, 0.0012705380795523524f, 0.0006730147288180888f, 0.0005956536042504013f, 0.0008489458123221993f, 0.0007397206500172615f, 0.0006131107802502811f, 0.001136388280428946f, 0.0008339046617038548f, 0.0007653885404579341f, 0.0007062885561026633f, 0.0009955506538972259f, 0.0007945940596982837f, 0.0008887035073712468f, 0.0006127237575128675f, 0.0006986695225350559f, 0.0006550028920173645f, 0.0006830822676420212f, 0.0010010438272729516f, 0.0011202315799891949f, 0.0007012280984781682f, 0.0008057239465415478f, 0.000580072752200067f, 0.0007062641670927405f, 0.0006601916393265128f, 0.0010650847107172012f, 0.0005910960026085377f, 0.0007692505605518818f, 0.0004490108403842896f, 0.0010924322996288538f, 0.0008853589533828199f, 0.0008410512236878276f, 0.0009643537341617048f, 0.0007739485590718687f, 0.0009991845581680536f, 0.0006546428194269538f, 0.0007597490912303329f, 0.0006493020919151604f, 0.0011633310932666063f, 0.0007234367658384144f, 0.00120117561891675f, 0.0009501109598204494f, 0.0008759661577641964f, 0.00012707778660114855f, 0.00046699753147549927f, 0.000810597266536206f, 0.0007498445920646191f, 0.001393856480717659f, 0.0007382231415249407f, 0.001074098632670939f, 0.0009630116983316839f, 0.0006063252221792936f, 0.0007428828394040465f, 0.0014866264536976814f, 0.0005553147057071328f, 0.00123645702842623f, 0.0008591893711127341f, 0.0010322353336960077f, 0.0008031727047637105f, 0.0011823801323771477f, 0.0010679408442229033f, 0.0012993600685149431f, 0.0004921942600049078f, 0.0009617207106202841f, 0.0005668814992532134f, 0.0008156906696967781f, 0.0007449545082636178f, 0.001065681572072208f, 0.000648419139906764f, 0.0006072766846045852f, 0.0008604033500887454f, 0.0006203708471730351f, 0.0007727888878434896f, 0.000455924920970574f, 0.0010554728796705604f, 0.0006336540682241321f, 0.0008895943174138665f, 0.0008807274280115962f, 0.0005733222351409495f, 0.0008103718282654881f, 0.0011205404298380017f, 0.0009419800480827689f, 0.0007543040555901825f, 0.000549929216504097f, 0.001017384696751833f, 0.0009328936575911939f, 0.0004703828599303961f, 0.001226139604113996f, 0.0008944662404246628f, 0.0010733610251918435f, 0.0009951255051419139f, 0.0009900034638121724f, 0.0004660437989514321f, 0.0005946456803940237f, 0.00018142240878660232f, 0.0005543497973121703f, 0.0008888635202310979f, 0.001475580153055489f, 0.0005209995433688164f, 0.0010578507790341973f, 0.0005582949379459023f, 0.0006605645176023245f, 0.0006793899228796363f, 0.0006175233866088092f, 0.0008597653941251338f, 0.0009327676962129772f, 0.0007032018038444221f, 0.0004550608282443136f, 0.0006568426615558565f, 0.0012350326869636774f, 0.0015564346686005592f, 0.0006890519871376455f, 0.0006754823843948543f, 0.0006636612233705819f, 0.0006759474636055529f, 0.0007022958598099649f, 0.0006855291430838406f, 0.000758960610255599f, 0.0007065821555443108f, 0.0005751291173510253f, 0.0007913770969025791f, 0.0007944458047859371f, 0.0009448741329833865f, 0.0015702878590673208f, 0.0005577494157478213f, 0.0007833252311684191f, 0.0005640321760438383f, 0.00079737463966012f, 0.0010043868096545339f, 0.0004153692570980638f, 0.000635752861853689f, 0.0005910141044296324f, 0.0006366406450979412f, 0.0008556044194847345f, 0.0007082325173541903f, 0.0008418226498179138f, 0.0006507334182970226f, 0.0006876332336105406f, 0.0008901226683519781f, 0.0006700005033053458f, 0.0009134577121585608f, 0.0011370222782716155f, 0.0008243467891588807f, 0.00081832759315148f, 0.0009958473965525627f, 0.0013876969460397959f, 0.000685600854922086f, 0.0006086709327064455f, 0.0005869036540389061f, 0.0007114008185453713f, 0.0009374994551762938f, 0.0007523528183810413f, 0.0005065113073214889f, 0.00046758976532146335f, 0.0012141508050262928f, 0.0007564661209471524f, 0.00018892358639277518f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #144 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_51_bias_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 192,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.00013841758482158184f, 0.0001139328014687635f, 0.00010760148143162951f, 8.548877667635679e-05f, 0.0001178045422420837f, 0.00019147308194078505f, 0.00032850439311005175f, 0.00019637828518170863f, 0.00019401224562898278f, 0.00020319686154834926f, 0.00010365126217948273f, 0.00011058535892516375f, 9.854238305706531e-05f, 0.00012918740685563534f, 0.0002428420993965119f, 0.00010940442734863609f, 0.00015716972120571882f, 5.27955089637544e-05f, 0.00016917574976105243f, 0.000178134287125431f, 0.00020462348766159266f, 8.779426570981741e-05f, 0.00011852612806251273f, 0.00012015248648822308f, 0.00012803157733287662f, 0.000128127183415927f, 0.00012942960893269628f, 0.00015894266834948212f, 0.00011588527559069917f, 0.00010686455061659217f, 0.00015174767759162933f, 0.00015078963770065457f, 0.00013419220340438187f, 0.00013320561265572906f, 0.00011416064808145165f, 0.00016673437494318932f, 0.00022979233472142369f, 0.00012172293645562604f, 0.00010773123358376324f, 0.00015354221977759153f, 0.000133787514641881f, 0.00011088857718277723f, 0.0002055297081824392f, 0.00015082184108905494f, 0.00013842986663803458f, 0.00012774091737810522f, 0.00018005749734584242f, 0.000143712037242949f, 0.0001607328886166215f, 0.00011081857519457117f, 0.00012636292376555502f, 0.00011846527922898531f, 0.00012354378122836351f, 0.0001810510002542287f, 0.00020260756718926132f, 0.0001268256746698171f, 0.00014572501822840422f, 0.00010491324792383239f, 0.00012773650814779103f, 0.00011940372496610507f, 0.00019263358262833208f, 0.00010690693306969479f, 0.0001391283585689962f, 8.120909478748217e-05f, 0.00019757973495870829f, 0.0001601279800524935f, 0.00015211438585538417f, 0.00017441515228711069f, 0.00013997805945109576f, 0.0001807147345971316f, 0.00011840015213238075f, 0.00013740990834776312f, 0.0001174342178273946f, 0.00021040263527538627f, 0.00013084238162264228f, 0.00021724728867411613f, 0.00017183917225338519f, 0.00015842918946873397f, 2.298356957908254e-05f, 8.446221181657165e-05f, 0.00014660641318187118f, 0.00013561855303123593f, 0.0002520959824323654f, 0.00013351667439565063f, 0.00019426386279519647f, 0.00017417242634110153f, 0.00010966132686007768f, 0.00013435943401418626f, 0.0002688745444174856f, 0.00010043544898508117f, 0.0002236283617094159f, 0.00015539489686489105f, 0.00018669237033464015f, 0.00014526359154842794f, 0.0002138478885171935f, 0.00019315014651510864f, 0.00023500515089835972f, 8.901934779714793e-05f, 0.00017393894086126238f, 0.00010252744687022641f, 0.00014752762217540294f, 0.00013473413127940148f, 0.0001927415287354961f, 0.00011727452510967851f, 0.00010983341053361073f, 0.00015561445616185665f, 0.00011220164742553607f, 0.00013976830814499408f, 8.245959179475904e-05f, 0.0001908951671794057f, 0.00011460408131824806f, 0.00016089400742202997f, 0.0001592903136042878f, 0.00010369232768425718f, 0.00014656565326731652f, 0.00020266343199182302f, 0.00017036859935615212f, 0.0001364251074846834f, 9.946141653927043e-05f, 0.00018400645058136433f, 0.0001687252224655822f, 8.50744909257628e-05f, 0.00022176232596393675f, 0.00016177515499293804f, 0.0001941304508363828f, 0.00017998060502577573f, 0.00017905421555042267f, 8.428971341345459e-05f, 0.00010754893446573988f, 3.281245881225914e-05f, 0.00010026093514170498f, 0.00016076183237601072f, 0.0002668767119757831f, 9.422912989975885e-05f, 0.00019132523448206484f, 0.00010097445920109749f, 0.00011947116581723094f, 0.0001228759647347033f, 0.00011168664786964655f, 0.00015549907402601093f, 0.00016870243416633457f, 0.00012718263315036893f, 8.230331150116399e-05f, 0.00011879802332259715f, 0.00022337074915412813f, 0.0002815002226270735f, 0.00012462347513064742f, 0.00012216923641972244f, 0.00012003123993054032f, 0.00012225336104165763f, 0.00012701879313681275f, 0.00012398631952237338f, 0.00013726729957852513f, 0.00012779401731677353f, 0.00010401912732049823f, 0.00014313022256828845f, 0.00014368523261509836f, 0.00017089203174691647f, 0.0002840057422872633f, 0.00010087579721584916f, 0.00014167393965180963f, 0.00010201211262028664f, 0.00014421495143324137f, 0.00018165563233196735f, 7.512460433645174e-05f, 0.00011498367530293763f, 0.00010689211921999231f, 0.00011514424113556743f, 0.0001547465071780607f, 0.0001280925062019378f, 0.00015225390961859375f, 0.00011769308912334964f, 0.0001243668666575104f, 0.00016098955529741943f, 0.00012117777805542573f, 0.00016520998906344175f, 0.00020564437727443874f, 0.0001490931899752468f, 0.00014800454664509743f, 0.00018011116480920464f, 0.00025098194601014256f, 0.00012399928527884185f, 0.00011008557339664549f, 0.00010614869825076312f, 0.00012866553151980042f, 0.00016955823230091482f, 0.00013607219443656504f, 9.160875924862921e-05f, 8.456932118861005e-05f, 0.00021959400328341872f, 0.00013681614655070007f, 3.4169137506978586e-05f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #145 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_53_weights_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 192,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.004314908757805824f, 0.002649448113515973f, 0.003374994033947587f, 0.0045773619785904884f, 0.004104216117411852f, 0.0035769487731158733f, 0.0009729044395498931f, 0.0039015973452478647f, 0.006177680566906929f, 0.004992414731532335f, 0.004664007108658552f, 0.004513063468039036f, 0.0019481314811855555f, 0.0025273326318711042f, 0.0032668483909219503f, 0.003509611589834094f, 0.0015259088249877095f, 0.011944684199988842f, 0.004345881752669811f, 0.0039019035175442696f, 0.0014141497667878866f, 0.002185175893828273f, 0.006100804544985294f, 0.004934641066938639f, 0.003092352068051696f, 0.005519087892025709f, 0.0034143917728215456f, 0.0020023109391331673f, 0.003921364434063435f, 0.0017979335971176624f, 0.0014870415907353163f, 0.0014639911241829395f, 0.002002543769776821f, 0.0016757764387875795f, 0.004346621222794056f, 0.0035552047193050385f, 0.002765296259894967f, 0.003043955424800515f, 0.0035127003211528063f, 0.003197475802153349f, 0.0035353570710867643f, 0.002480089198797941f, 0.0038717009592801332f, 0.002133316360414028f, 0.004076441749930382f, 0.002389742759987712f, 0.00414830818772316f, 0.0038531264290213585f, 0.004322872031480074f, 0.004775397013872862f, 0.00325251673348248f, 0.0021900911815464497f, 0.003465766552835703f, 0.0023811061400920153f, 0.005391736049205065f, 0.0038462579250335693f, 0.004639057908207178f, 0.00477550458163023f, 0.0031398527789860964f, 0.00628485344350338f, 0.003518199548125267f, 0.002252047648653388f, 0.0030118036083877087f, 0.0037934945430606604f, 0.003603368066251278f, 0.002489405684173107f, 0.003620502073317766f, 0.005420824512839317f, 0.0014605995966121554f, 0.0036074756644666195f, 0.003920667339116335f, 0.004424818325787783f, 0.003976491279900074f, 0.0011296524899080396f, 0.003467186586931348f, 0.004339213483035564f, 0.005244983360171318f, 0.003205004846677184f, 0.00525083439424634f, 0.008910317905247211f, 0.005257208365947008f, 0.004057386424392462f, 0.0023099679965525866f, 0.0016007745871320367f, 0.0023616363760083914f, 0.0023178798146545887f, 0.0033954186365008354f, 0.0017828105483204126f, 0.004012363031506538f, 0.006461850833147764f, 0.0024492342490702868f, 0.0033052561338990927f, 0.004411769565194845f, 0.004663617350161076f, 0.0030465128365904093f, 0.00238631060346961f, 0.001221217098645866f, 0.0054838345386087894f, 0.00553191639482975f, 0.0031561327632516623f, 0.0037597501650452614f, 0.0040629529394209385f, 0.0024915479589253664f, 0.0022125407122075558f, 0.004302074667066336f, 0.001806753221899271f, 0.003331280080601573f, 0.002616901881992817f, 0.004185068421065807f, 0.0036220091860741377f, 0.003432272933423519f, 0.002470677252858877f, 0.0027315232437103987f, 0.003053679596632719f, 0.004891824442893267f, 0.004931086208671331f, 0.0017051419708877802f, 0.004654018674045801f, 0.00760864419862628f, 0.003991309553384781f, 0.004837697371840477f, 0.005580045748502016f, 0.0018286440754309297f, 0.0036427276208996773f, 0.0016635647043585777f, 0.0016784906620159745f, 0.005600806791335344f, 0.005641627125442028f, 0.002422882942482829f, 0.011194935068488121f, 0.005050571169704199f, 0.0039756642654538155f, 0.0014278707094490528f, 0.002159907715395093f, 0.00431427638977766f, 0.004758033901453018f, 0.004211979452520609f, 0.003245822386816144f, 0.002405528211966157f, 0.004350580740720034f, 0.004991121590137482f, 0.006606617942452431f, 0.009653797373175621f, 0.0022174594923853874f, 0.00487481290474534f, 0.0019027068046852946f, 0.004109630361199379f, 0.002591331023722887f, 0.004313227254897356f, 0.0037382515147328377f, 0.0024465767201036215f, 0.00378734664991498f, 0.005164913833141327f, 0.0020317048765718937f, 0.006337813101708889f, 0.0023614673409610987f, 0.0033381888642907143f, 0.003162107430398464f, 0.00134503364097327f, 0.004035306628793478f, 0.0036809330340474844f, 0.005619870498776436f, 0.005405685398727655f, 0.002648942405357957f, 0.0038413063157349825f, 0.005155226681381464f, 0.002263101749122143f, 0.004004153423011303f, 0.002528493758291006f, 0.0031233401969075203f, 0.0038173419889062643f, 0.002338931430131197f, 0.003220207756385207f, 0.003001332748681307f, 0.005252020433545113f, 0.0038994373753666878f, 0.0028445625212043524f, 0.00403415085747838f, 0.004373136442154646f, 0.0031920920591801405f, 0.001675499719567597f, 0.003159981919452548f, 0.0034963779617100954f, 0.0031821441370993853f, 0.0019517902983352542f, 0.001863130833953619f, 0.002626303816214204f, 0.003839067881926894f, 0.004374506883323193f, 0.0037297706585377455f, 0.0032025587279349566f, 0.008879171684384346f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #146 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_53_bias_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 192,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0001015272646327503f, 6.233995372895151e-05f, 7.941162766655907e-05f, 0.0001077026390703395f, 9.656979091232643e-05f, 8.416350465267897e-05f, 2.2891868866281584e-05f, 9.180229244520888e-05f, 0.0001453571894671768f, 0.00011746858217520639f, 0.00010974134784191847f, 0.0001061897273757495f, 4.58383874502033e-05f, 5.946665260125883e-05f, 7.686702156206593e-05f, 8.2579099398572e-05f, 3.5903736716136336e-05f, 0.00028105141245760024f, 0.00010225604637525976f, 9.180949564324692e-05f, 3.327411104692146e-05f, 5.141590372659266e-05f, 0.0001435483427485451f, 0.00011610920046223328f, 7.276122778421268e-05f, 0.00012986089859623462f, 8.033862832235172e-05f, 4.7113200707826763e-05f, 9.226740075973794e-05f, 4.230432023177855e-05f, 3.498921432765201e-05f, 3.4446849895175546e-05f, 4.7118679503910244e-05f, 3.943003321182914e-05f, 0.00010227344318991527f, 8.365187386516482e-05f, 6.506579666165635e-05f, 7.162248220993206e-05f, 8.265177166322246e-05f, 7.52347259549424e-05f, 8.318487380165607e-05f, 5.835504271090031e-05f, 9.109884558711201e-05f, 5.019567834096961e-05f, 9.59162789513357e-05f, 5.6229240726679564e-05f, 9.760725515661761e-05f, 9.066180064110085e-05f, 0.00010171463509323075f, 0.00011236228601774201f, 7.652981003047898e-05f, 5.153155871084891e-05f, 8.154744864441454e-05f, 5.602602686849423e-05f, 0.00012686438276432455f, 9.050018707057461e-05f, 0.00010915430902969092f, 0.00011236481805099174f, 7.38788876333274e-05f, 0.00014787890540901572f, 8.27811672934331e-05f, 5.298935866449028e-05f, 7.086597179295495e-05f, 8.925869769882411e-05f, 8.478513336740434e-05f, 5.8574252761900425e-05f, 8.518828690284863e-05f, 0.00012754881754517555f, 3.436705083004199e-05f, 8.488177991239354e-05f, 9.225100075127557e-05f, 0.00010411337279947475f, 9.356450027553365e-05f, 2.6580059056868777e-05f, 8.158085984177887e-05f, 0.00010209914034930989f, 0.0001234113733517006f, 7.541188097093254e-05f, 0.00012354904902167618f, 0.00020965453586541116f, 0.00012369902106001973f, 9.546791989123449e-05f, 5.435218918137252e-05f, 3.766528607229702e-05f, 5.5567914387211204e-05f, 5.453834819491021e-05f, 7.989220466697589e-05f, 4.19484858866781e-05f, 9.440854046260938e-05f, 0.00015204354713205248f, 5.762904402217828e-05f, 7.777073187753558e-05f, 0.00010380634194007143f, 0.00010973217285936698f, 7.168265437940136e-05f, 5.614848487311974e-05f, 2.873452103813179e-05f, 0.00012903141032438725f, 0.0001301627344219014f, 7.426195224979892e-05f, 8.846470882417634e-05f, 9.55988944042474e-05f, 5.862466059625149e-05f, 5.205978231970221e-05f, 0.00010122529056388885f, 4.251184145687148e-05f, 7.838306191843003e-05f, 6.157416646601632e-05f, 9.84721991699189e-05f, 8.522374992026016e-05f, 8.07593678473495e-05f, 5.8133584388997406e-05f, 6.427113839890808e-05f, 7.185128924902529e-05f, 0.00011510175681905821f, 0.00011602556332945824f, 4.0120987250702456e-05f, 0.00010950632713502273f, 0.00017902693070936948f, 9.391316416440532e-05f, 0.00011382817319827154f, 0.00013129519356880337f, 4.302692104829475e-05f, 8.571123908041045e-05f, 3.914269836968742e-05f, 3.9493897929787636e-05f, 0.00013178368681110442f, 0.00013274417142383754f, 5.7009012380149215e-05f, 0.00026341024204157293f, 0.00011883697152370587f, 9.354504436487332e-05f, 3.359695983817801e-05f, 5.082135976408608e-05f, 0.0001015123852994293f, 0.00011195374099770561f, 9.910540393320844e-05f, 7.637229282408953e-05f, 5.66006638109684e-05f, 0.00010236660455120727f, 0.00011743815412046388f, 0.00015544983034487814f, 0.0002271481789648533f, 5.217551733949222e-05f, 0.00011470148456282914f, 4.47695711045526e-05f, 9.669718565419316e-05f, 6.097249570302665e-05f, 0.00010148770525120199f, 8.795886242296547e-05f, 5.756651080446318e-05f, 8.911403710953891e-05f, 0.00012152738781878725f, 4.7804820496821776e-05f, 0.00014912501501385123f, 5.556393807637505e-05f, 7.854562136344612e-05f, 7.440253102686256e-05f, 3.16478508466389e-05f, 9.494839468970895e-05f, 8.661019091960043e-05f, 0.00013223224959801883f, 0.00012719260121230036f, 6.232805753825232e-05f, 9.038367716129869e-05f, 0.00012129945389460772f, 5.32494523213245e-05f, 9.421537833986804e-05f, 5.949397018412128e-05f, 7.349035877268761e-05f, 8.981981227407232e-05f, 5.503368083736859e-05f, 7.576959615107626e-05f, 7.061959331622347e-05f, 0.0001235769595950842f, 9.17514698812738e-05f, 6.693088653264567e-05f, 9.492119716014713e-05f, 0.00010289732745150104f, 7.510805153287947e-05f, 3.9423524867743254e-05f, 7.435251609422266e-05f, 8.22677175165154e-05f, 7.487398397643119e-05f, 4.5924480218673125e-05f, 4.383837222121656e-05f, 6.179538468131796e-05f, 9.033101378008723e-05f, 0.0001029295744956471f, 8.775931200943887e-05f, 7.535432087024674e-05f, 0.00020892168686259538f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #147 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_54_weights_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 56,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.009533326141536236f, 0.008584550581872463f, 0.008388249203562737f, 0.010866490192711353f, 0.010092702694237232f, 0.008638420142233372f, 0.012402785941958427f, 0.008882776834070683f, 0.009763581678271294f, 0.009203629568219185f, 0.009199123829603195f, 0.007536252029240131f, 0.010540405288338661f, 0.007845109328627586f, 0.012860418297350407f, 0.010717393830418587f, 0.010358933359384537f, 0.011385289952158928f, 0.007690103258937597f, 0.009190372191369534f, 0.0074843354523181915f, 0.008188856765627861f, 0.008919746614992619f, 0.011640509590506554f, 0.00744195282459259f, 0.008141133934259415f, 0.011725598946213722f, 0.008650464937090874f, 0.0076873344369232655f, 0.008572283200919628f, 0.008720044046640396f, 0.006104491651058197f, 0.010987033136188984f, 0.008815215900540352f, 0.008693328127264977f, 0.009604510851204395f, 0.009939659386873245f, 0.007160607259720564f, 0.008906310424208641f, 0.007439324166625738f, 0.008104548789560795f, 0.006380293518304825f, 0.01788734272122383f, 0.008142066188156605f, 0.008164488710463047f, 0.007110198028385639f, 0.008561200462281704f, 0.01051352359354496f, 0.009092814289033413f, 0.007715991698205471f, 0.010086922906339169f, 0.007952072657644749f, 0.009709075093269348f, 0.008111713454127312f, 0.009539704769849777f, 0.011278841644525528f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #148 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_54_bias_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 56,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.00022431356774177402f, 0.00020198943093419075f, 0.00019737058028113097f, 0.0002556821273174137f, 0.00023747536761220545f, 0.0002032569464063272f, 0.0002918302488978952f, 0.00020900652452837676f, 0.00022973133309278637f, 0.00021655599994119257f, 0.0002164499746868387f, 0.00017732358537614346f, 0.0002480095427017659f, 0.00018459081184118986f, 0.00030259808409027755f, 0.00025217398069798946f, 0.0002437396178720519f, 0.00026788917602971196f, 0.00018094360711984336f, 0.00021624405053444207f, 0.00017610201030038297f, 0.00019267898460384458f, 0.00020987639436498284f, 0.00027389434399083257f, 0.00017510478210169822f, 0.00019155610061716288f, 0.0002758964546956122f, 0.00020354035950731486f, 0.00018087845819536597f, 0.00020170077914372087f, 0.00020517750817816705f, 0.00014363510126713663f, 0.00025851844111457467f, 0.0002074168442049995f, 0.00020454889454413205f, 0.00022598849318455905f, 0.00023387433611787856f, 0.00016848488303367049f, 0.00020956025400664657f, 0.00017504292191006243f, 0.00019069526751991361f, 0.0001501245569670573f, 0.00042087867041118443f, 0.00019157803035341203f, 0.0001921056245919317f, 0.00016729878552723676f, 0.00020144000882282853f, 0.0002473770291544497f, 0.00021394857321865857f, 0.0001815527502913028f, 0.00023733936541248113f, 0.00018710759468376637f, 0.00022844882914796472f, 0.00019086385145783424f, 0.00022446364164352417f, 0.00026538450038060546f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #149 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_55_weights_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 336,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.00042928577749989927f, 0.0005573263624683022f, 0.0004090734291821718f, 0.0007260119309648871f, 0.0005148794734850526f, 0.0005679684691131115f, 0.0005150361103005707f, 0.0009229715797118843f, 0.0007861324120312929f, 0.0004690679779741913f, 0.0004847782838623971f, 0.0006044183392077684f, 0.0004163326520938426f, 0.00040144348167814314f, 0.0005693355924449861f, 0.000824830261990428f, 0.0007785637862980366f, 0.0016101333312690258f, 0.0005788090056739748f, 0.000602437648922205f, 0.000967905973084271f, 0.0005683291819877923f, 0.0006322715780697763f, 0.0006145351799204946f, 0.0005178914871066809f, 0.0007041294011287391f, 0.0004777975264005363f, 0.0009330672910436988f, 0.0009362092241644859f, 0.0005970708443783224f, 0.0007456050952896476f, 0.0012741971295326948f, 0.0004618161474354565f, 0.0008420507656410336f, 0.0014397981576621532f, 0.0014380370266735554f, 0.0006781695410609245f, 0.0013118732022121549f, 0.000704277481418103f, 0.0004688726912718266f, 0.000779030320700258f, 0.001924334210343659f, 0.0007867860840633512f, 0.0006610905984416604f, 0.0008392397430725396f, 0.00047642859863117337f, 0.0008134982781484723f, 0.0009492703247815371f, 0.0009797585662454367f, 0.0006502544274553657f, 0.000961769837886095f, 0.0005364881944842637f, 0.0005042045377194881f, 0.0005224474589340389f, 0.0009910512017086148f, 0.0010730904759839177f, 0.0007974145119078457f, 0.0013076630420982838f, 0.0014045099960640073f, 0.0009525254718028009f, 0.0011431716848164797f, 0.003588717197999358f, 0.0009396056411787868f, 0.0009595952578820288f, 0.0005786056281067431f, 0.0010048910044133663f, 0.0006285416893661022f, 0.001123863155953586f, 0.0007415009313262999f, 0.0011331979185342789f, 0.0005774335004389286f, 0.001570980530232191f, 0.000394271599361673f, 0.0004936536424793303f, 0.0010369508527219296f, 0.000987194711342454f, 0.001059159985743463f, 0.00035875928006134927f, 0.0009492933750152588f, 0.0010158660588786006f, 0.0005084961885586381f, 0.0005768781411461532f, 0.0013241821434348822f, 0.0008347340044565499f, 0.0006211516447365284f, 0.0010432974668219686f, 0.0004932357696816325f, 0.0009661538060754538f, 0.001089937868528068f, 0.0015245556132867932f, 0.0006366211455315351f, 0.000887481844983995f, 0.0008756717434152961f, 0.000677277974318713f, 0.0008258528541773558f, 0.000477377325296402f, 0.0006047216011211276f, 0.00038295378908514977f, 0.0006154270377010107f, 0.00042180027230642736f, 0.0008751673740334809f, 0.0009809371549636126f, 0.0006114071002230048f, 0.0006457034032791853f, 0.0005594762042164803f, 0.0011376721085980535f, 0.0006024775211699307f, 0.0005689411773346364f, 0.0008815153269097209f, 0.0007793987169861794f, 0.0008786312537267804f, 0.0003590694395825267f, 0.0009322756086476147f, 0.0006261438247747719f, 0.0011871234746649861f, 0.0012701029190793633f, 0.000980932847596705f, 0.0006507301004603505f, 0.0007793800323270261f, 0.0012517876457422972f, 0.0011989576742053032f, 0.0005910518229939044f, 0.0006023484747856855f, 0.0010605129646137357f, 0.0011509854812175035f, 0.00047690622159279883f, 0.0009177171159535646f, 0.0006379784317687154f, 0.0007719465647824109f, 0.00097542634466663f, 0.0010574677726253867f, 0.0006045941263437271f, 0.0019562530796974897f, 0.001086596050299704f, 0.0008885955903679132f, 0.0010827850783243775f, 0.0011377132032066584f, 0.0005367817939259112f, 0.0013084581587463617f, 0.0006138592725619674f, 0.0012123218039050698f, 0.0006685921689495444f, 0.001143662491813302f, 0.0007773596444167197f, 0.00042236311128363013f, 0.001072858227416873f, 0.00043181743239983916f, 0.0008299274486489594f, 0.0004679902922362089f, 0.0006561424816027284f, 0.0007713463855907321f, 0.0009897274430841208f, 0.0009702134993858635f, 0.00027215946465730667f, 0.0011848628055304289f, 0.0014811479486525059f, 0.0006345989531837404f, 0.0010355828562751412f, 0.0008458707015961409f, 0.001581934280693531f, 0.0005138227134011686f, 0.0004411432601045817f, 0.0005788367707282305f, 0.0009980074828490615f, 0.0007114825421012938f, 0.00079846300650388f, 0.001022895099595189f, 0.0005114851519465446f, 0.0009039583965204656f, 0.0011467484291642904f, 0.0017324271611869335f, 0.0005634224507957697f, 0.0005623736069537699f, 0.0009739467641338706f, 0.0002510290942154825f, 0.0007609115564264357f, 0.0015174215659499168f, 0.0006317541119642556f, 0.0009206317481584847f, 0.0005621887394227087f, 0.0011028610169887543f, 0.0009676131303422153f, 0.0007311873487196863f, 0.0005404276889748871f, 0.0011439656373113394f, 0.0008048087474890053f, 0.0005928612663410604f, 0.00044965880806557834f, 0.0009069514344446361f, 0.0008229275117628276f, 0.0011212972458451986f, 0.00032042645034380257f, 0.001264982856810093f, 0.0004843043570872396f, 0.0003642999508883804f, 0.002302232664078474f, 0.0006788295577280223f, 0.0005031576147302985f, 0.0011653297115117311f, 0.0007154963095672429f, 0.001283424673601985f, 0.00050448311958462f, 0.0011317169992253184f, 0.0011204552138224244f, 0.0004353293334133923f, 0.0013179552042856812f, 0.0005034518544562161f, 0.00037929427344352007f, 0.003340802388265729f, 0.0011555296368896961f, 0.000933205068577081f, 0.001375598250888288f, 0.0012258555507287383f, 0.0006133101414889097f, 0.0009291812893934548f, 0.000768377271015197f, 0.000663168728351593f, 0.0005510458140634f, 0.0009852818911895156f, 0.0009334433707408607f, 0.0019347126362845302f, 0.0006776598165743053f, 0.00037151234573684633f, 0.0006033910904079676f, 0.0003061455499846488f, 0.0011469109449535608f, 0.0011456392239779234f, 0.0009130337275564671f, 0.0002562442678026855f, 0.0008723823120817542f, 0.0010401204926893115f, 0.0005696446751244366f, 0.00013729449710808694f, 0.0009562266059219837f, 1.0424884067106177e-08f, 0.0003465105255600065f, 0.0006356291123665869f, 0.0004644568543881178f, 0.0011109376791864634f, 0.0008332154247909784f, 0.0008288684766739607f, 0.00037669253651984036f, 0.0008199381409212947f, 0.0005774049204774201f, 0.0009018635028041899f, 0.0004603192210197449f, 0.0008788726408965886f, 0.0012339743552729487f, 0.0015696792397648096f, 0.0008403704850934446f, 0.0011186953634023666f, 0.0006399783305823803f, 0.0007694389787502587f, 0.0009070888627320528f, 0.0007168992888182402f, 0.0008703829371370375f, 0.0008026679279282689f, 0.0006494582048617303f, 0.001187171321362257f, 0.0006230896688066423f, 0.0009940371382981539f, 0.0005582367302849889f, 0.0004947673878632486f, 0.0003460619191173464f, 0.0009544598287902772f, 0.0005282929632812738f, 0.0008626411436125636f, 0.0004283000307623297f, 0.0009380962583236396f, 0.0012376990634948015f, 0.00038440630305558443f, 0.0005566786276176572f, 0.0005957828834652901f, 0.00039023635326884687f, 0.0007911575958132744f, 0.0009794948855414987f, 0.0005728279356844723f, 0.0013190656900405884f, 0.0008897414663806558f, 0.0005299331387504935f, 0.0008591029909439385f, 0.0008673944394104183f, 0.0005265825311653316f, 0.0007710435893386602f, 0.00046137289609760046f, 0.0007181822438724339f, 0.00040795208769850433f, 0.0012254122411832213f, 0.000605476088821888f, 0.0010225636651739478f, 0.00042088847840204835f, 0.001150153111666441f, 0.00046918896259739995f, 0.0007569235749542713f, 0.000803229515440762f, 0.0005900604883208871f, 0.000632172916084528f, 0.0008349006529897451f, 0.0007107594865374267f, 0.0008300148183479905f, 0.0009458669810555875f, 0.0014344279188662767f, 0.0009254714823327959f, 0.0008149297791533172f, 0.0008740840130485594f, 0.0005085791344754398f, 0.000610063667409122f, 0.0006398322293534875f, 0.0006539832684211433f, 0.00045568248606286943f, 0.0005118445260450244f, 0.0009463104070164263f, 0.0008628928917460144f, 0.0005833353498019278f, 0.00044552728650160134f, 0.0007002161000855267f, 0.0012015693355351686f, 0.0009570936672389507f, 0.0012327816803008318f, 0.0011633527465164661f, 0.000509640434756875f, 0.0009236938203684986f, 0.0012286078417673707f, 0.0011581461876630783f, 0.0012017444241791964f, 0.0013574251206591725f, 0.00032553254277445376f, 0.0006464249454438686f, 0.0014054671628400683f, 0.0008068879833444953f, 0.0011563068255782127f, 0.0007944353856146336f, 0.0013724536402150989f, 0.0010799398878589272f, 0.0012260806979611516f, 0.00012736738426610827f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #150 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_55_bias_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 336,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(4.0644765249453485e-05f, 5.2767645684070885e-05f, 3.8731061067664996e-05f, 6.873878737678751e-05f, 4.874877413385548e-05f, 5.377523848437704e-05f, 4.876360617345199e-05f, 8.738692849874496e-05f, 7.443099457304925e-05f, 4.441134296939708e-05f, 4.589879608829506e-05f, 5.722631249227561e-05f, 3.94183662137948e-05f, 3.800865670200437e-05f, 5.3904677770333365e-05f, 7.809490489307791e-05f, 7.371440005954355e-05f, 0.0001524473773315549f, 5.4801621445221826e-05f, 5.703878196072765e-05f, 9.164131188299507e-05f, 5.380939182941802e-05f, 5.9863457863684744e-05f, 5.818417412228882e-05f, 4.903395165456459e-05f, 6.666695117019117e-05f, 4.5237859012559056e-05f, 8.834278560243547e-05f, 8.864026312949136e-05f, 5.653065090882592e-05f, 7.059387280605733e-05f, 0.00012064095062669367f, 4.372473995317705e-05f, 7.972534513100982e-05f, 0.00013632005720864981f, 0.00013615330681204796f, 6.42090744804591e-05f, 0.00012420811981428415f, 6.66809719405137e-05f, 4.439285476109944e-05f, 7.375857239821926e-05f, 0.00018219591584056616f, 7.449288386851549e-05f, 6.259204383241013e-05f, 7.94591978774406e-05f, 4.51082487415988e-05f, 7.702199945924804e-05f, 8.987689216155559e-05f, 9.276351920561865e-05f, 6.156607560114935e-05f, 9.106034121941775e-05f, 5.079468974145129e-05f, 4.773807086166926e-05f, 4.946531043970026e-05f, 9.383269934915006e-05f, 0.00010160017700400203f, 7.549918518634513e-05f, 0.0001238094992004335f, 0.00013297896657604724f, 9.018508717417717e-05f, 0.00010823546472238377f, 0.00033977965358644724f, 8.896183862816542e-05f, 9.08544534468092e-05f, 5.478236562339589e-05f, 9.514305565971881e-05f, 5.951031198492274e-05f, 0.0001064073367160745f, 7.020528573775664e-05f, 0.00010729114728746936f, 5.467138907988556e-05f, 0.00014874039334245026f, 3.73296243196819e-05f, 4.673911462305114e-05f, 9.817848331294954e-05f, 9.34675699681975e-05f, 0.00010028124233940616f, 3.3967320632655174e-05f, 8.987907494883984e-05f, 9.618217154638842e-05f, 4.814440762856975e-05f, 5.4618805734207854e-05f, 0.00012537352449726313f, 7.90325939306058e-05f, 5.8810623158933595e-05f, 9.877937554847449e-05f, 4.6699551603524014e-05f, 9.147542004939169e-05f, 0.00010319529246771708f, 0.00014434488548431545f, 6.027527342666872e-05f, 8.4026760305278e-05f, 8.290857658721507e-05f, 6.412465882021934e-05f, 7.819172606104985e-05f, 4.51980740763247e-05f, 5.7255027058999985e-05f, 3.625805402407423e-05f, 5.826861524838023e-05f, 3.993603968410753e-05f, 8.286082447739318e-05f, 9.287510329158977e-05f, 5.7888009905582294e-05f, 6.113517883932218e-05f, 5.2971194236306474e-05f, 0.00010771476809168234f, 5.70425545447506e-05f, 5.3867337555857375e-05f, 8.346184768015519e-05f, 7.379345333902165e-05f, 8.318878099089488e-05f, 3.399668639758602e-05f, 8.826782868709415e-05f, 5.928328027948737e-05f, 0.00011239681771257892f, 0.00012025330943288282f, 9.287469583796337e-05f, 6.161110650282353e-05f, 7.379167800536379e-05f, 0.00011851922317873687f, 0.0001135172788053751f, 5.5960772442631423e-05f, 5.703033821191639e-05f, 0.00010040934284916148f, 0.00010897527681663632f, 4.515346881817095e-05f, 8.688943489687517e-05f, 6.0403781390050426e-05f, 7.308788190130144e-05f, 9.235334437107667e-05f, 0.00010012101847678423f, 5.7242956245318055e-05f, 0.00018521798483561724f, 0.00010287888289894909f, 8.413221075898036e-05f, 0.00010251806088490412f, 0.00010771865345304832f, 5.082248753751628e-05f, 0.00012388479080982506f, 5.812017843709327e-05f, 0.00011478259693831205f, 6.330228643491864e-05f, 0.00010828193626366556f, 7.360039307968691e-05f, 3.9989328797673807e-05f, 0.00010157818906009197f, 4.0884464397095144e-05f, 7.857751188566908e-05f, 4.430930857779458e-05f, 6.212355219759047e-05f, 7.303105667233467e-05f, 9.370737097924575e-05f, 9.185978706227615e-05f, 2.5768051273189485e-05f, 0.00011218278086744249f, 0.00014023504627402872f, 6.0083813878009096e-05f, 9.804895671550184e-05f, 8.008701843209565e-05f, 0.00014977749378886074f, 4.864872244070284e-05f, 4.176743095740676e-05f, 5.4804251703899354e-05f, 9.449131903238595e-05f, 6.736315117450431e-05f, 7.559845835203305e-05f, 9.684768156148493e-05f, 4.842740236199461e-05f, 8.558675472158939e-05f, 0.0001085741096176207f, 0.00016402616165578365f, 5.334482193575241e-05f, 5.324551966623403e-05f, 9.221325308317319e-05f, 2.376742850174196e-05f, 7.204308349173516e-05f, 0.00014366942923516035f, 5.981446156511083e-05f, 8.716539014130831e-05f, 5.3228013712214306e-05f, 0.00010441885387990624f, 9.161358320852742e-05f, 6.922880129422992e-05f, 5.1167680794605985e-05f, 0.00010831063991645351f, 7.619927055202425e-05f, 5.613208850263618e-05f, 4.257368345861323e-05f, 8.58701387187466e-05f, 7.791475218255073e-05f, 0.00010616439249133691f, 3.0337967473315075e-05f, 0.00011976854148088023f, 4.585392525768839e-05f, 3.4491909900680184e-05f, 0.00021797533554490656f, 6.427156768040732e-05f, 4.7638950491091236e-05f, 0.00011033338523702696f, 6.774317444069311e-05f, 0.00012151461123721674f, 4.776444984599948e-05f, 0.00010715093958424404f, 0.0001060846698237583f, 4.121696838410571e-05f, 0.00012478396820370108f, 4.7666810132795945e-05f, 3.591157292248681e-05f, 0.0003163070941809565f, 0.00010940551874227822f, 8.83558313944377e-05f, 0.00013024160580243915f, 0.00011606397310970351f, 5.8068188081961125e-05f, 8.797486225375906e-05f, 7.274994277395308e-05f, 6.278880027821288e-05f, 5.2173003496136516e-05f, 9.328646410722286e-05f, 8.837839413899928e-05f, 0.00018317854846827686f, 6.416081305360422e-05f, 3.517478035064414e-05f, 5.7129051128868014e-05f, 2.8985852623009123e-05f, 0.0001085894982679747f, 0.00010846908844541758f, 8.644600893603638e-05f, 2.4261200451292098e-05f, 8.259713649749756e-05f, 9.847858018474653e-05f, 5.393394167185761e-05f, 1.2999039427086245e-05f, 9.053551184479147e-05f, 9.870277928314408e-10f, 3.280760574853048e-05f, 6.0181348089827225e-05f, 4.3974763684673235e-05f, 0.0001051835497491993f, 7.888881373219192e-05f, 7.847724918974563e-05f, 3.566523810150102e-05f, 7.763172470731661e-05f, 5.466868242365308e-05f, 8.538841211702675e-05f, 4.358301157481037e-05f, 8.321164204971865e-05f, 0.00011683266347972676f, 0.0001486171968281269f, 7.95662563177757e-05f, 0.0001059180503943935f, 6.0593130911001936e-05f, 7.285046012839302e-05f, 8.588314813096076e-05f, 6.787600432289764e-05f, 8.240783063229173e-05f, 7.599657692480832e-05f, 6.14906894043088e-05f, 0.00011240135063417256f, 5.899411189602688e-05f, 9.411541395820677e-05f, 5.285384031594731e-05f, 4.68445650767535e-05f, 3.276513234595768e-05f, 9.036823030328378e-05f, 5.001876343158074e-05f, 8.167484338628128e-05f, 4.0551436541136354e-05f, 8.881893154466525e-05f, 0.000117185314593371f, 3.6395580536918715e-05f, 5.270631663734093e-05f, 5.640870949719101e-05f, 3.694756742333993e-05f, 7.490678399335593e-05f, 9.273854811908677e-05f, 5.423533366410993e-05f, 0.00012488910579122603f, 8.424069528700784e-05f, 5.0174054194940254e-05f, 8.133985102176666e-05f, 8.212488319259137e-05f, 4.985681880498305e-05f, 7.300238939933479e-05f, 4.368277222965844e-05f, 6.799747643526644e-05f, 3.862489393213764e-05f, 0.00011602199811022729f, 5.732645877287723e-05f, 9.681630035629496e-05f, 3.984971044701524e-05f, 0.00010889646364375949f, 4.4422798964660615e-05f, 7.166550494730473e-05f, 7.604974962305278e-05f, 5.586691258940846e-05f, 5.985411553410813e-05f, 7.904837548267096e-05f, 6.729469168931246e-05f, 7.858578464947641e-05f, 8.955466182669625e-05f, 0.00013581159873865545f, 8.762361539993435e-05f, 7.715752872172743e-05f, 8.275824802694842e-05f, 4.8152258386835456e-05f, 5.776081161457114e-05f, 6.057929931557737e-05f, 6.191911961650476e-05f, 4.314400575822219e-05f, 4.846142473979853e-05f, 8.959664410213009e-05f, 8.169867942342535e-05f, 5.523017534869723e-05f, 4.21825134253595e-05f, 6.629644485656172e-05f, 0.00011376455222489312f, 9.06176064745523e-05f, 0.00011671974061755463f, 0.00011014621122740209f, 4.8252742999466136e-05f, 8.745530794840306e-05f, 0.00011632456153165549f, 0.00010965325054712594f, 0.00011378113413229585f, 0.00012852097279392183f, 3.082141120103188e-05f, 6.120350008131936e-05f, 0.0001330695959040895f, 7.63961361371912e-05f, 0.00010947910050163046f, 7.521711813751608e-05f, 0.00012994387361686677f, 0.0001022486831061542f, 0.00011608529166551307f, 1.2059140317433048e-05f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #151 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_56_weights_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 336,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.007825935259461403f, 0.01299240905791521f, 0.007723917253315449f, 0.006867685355246067f, 0.005593663547188044f, 0.004755862057209015f, 0.009268234483897686f, 0.014328781515359879f, 0.00274422625079751f, 0.0074450294487178326f, 0.006256438326090574f, 0.01572675071656704f, 0.01047467440366745f, 0.012266453355550766f, 0.01115775853395462f, 0.006678607780486345f, 0.0036589461378753185f, 0.002882776316255331f, 0.005907048471271992f, 0.0064288778230547905f, 0.0037872730754315853f, 0.005986938718706369f, 0.004345461260527372f, 0.007184000685811043f, 0.007537662982940674f, 0.006998371332883835f, 0.010939104482531548f, 0.007372237741947174f, 0.005365185905247927f, 0.0026085947174578905f, 0.005080768372863531f, 0.006310209631919861f, 0.007830456830561161f, 0.00835137628018856f, 0.0029802799690514803f, 0.006409929133951664f, 0.008914180099964142f, 0.007498995400965214f, 0.006811207626014948f, 0.01064600795507431f, 0.007563465740531683f, 0.004484064411371946f, 0.007111836224794388f, 0.010051301680505276f, 0.011328790336847305f, 0.006688043940812349f, 0.0047980016097426414f, 0.015677474439144135f, 0.0039921533316373825f, 0.0052179316990077496f, 0.002006828784942627f, 0.005364612210541964f, 0.008613552898168564f, 0.009019805118441582f, 0.005784997250884771f, 0.0024030604399740696f, 0.005274871829897165f, 0.0026816397439688444f, 0.010015634819865227f, 0.005660230293869972f, 0.005809737369418144f, 0.010569253005087376f, 0.002480641473084688f, 0.007496165577322245f, 0.013227532617747784f, 0.007400856353342533f, 0.006197948008775711f, 0.007125506177544594f, 0.007573227863758802f, 0.0047293612733483315f, 0.007087354548275471f, 0.002098031109198928f, 0.007960649207234383f, 0.021744001656770706f, 0.0036065587773919106f, 0.005531896837055683f, 0.00634026899933815f, 0.019291609525680542f, 0.005899797659367323f, 0.007093743421137333f, 0.006620932370424271f, 0.01037029642611742f, 0.011386409401893616f, 0.007677809335291386f, 0.005214863456785679f, 0.002583656460046768f, 0.00599770899862051f, 0.009244261309504509f, 0.003582686884328723f, 0.009414313361048698f, 0.010069487616419792f, 0.007160534616559744f, 0.013118013739585876f, 0.007463764399290085f, 0.005118140019476414f, 0.008226045407354832f, 0.004759808536618948f, 0.011616019532084465f, 0.005884626414626837f, 0.005879709497094154f, 0.006285961717367172f, 0.00556746544316411f, 0.007514387834817171f, 0.005144632421433926f, 0.015559077262878418f, 0.011177764274179935f, 0.005314768757671118f, 0.007479274179786444f, 0.017425836995244026f, 0.008912330493330956f, 0.008732100948691368f, 0.008092198520898819f, 0.009464792907238007f, 0.0062214345671236515f, 0.006360511761158705f, 0.0020664813928306103f, 0.008971343748271465f, 0.00689599709585309f, 0.007059801369905472f, 0.0034532081335783005f, 0.008009670302271843f, 0.006716371979564428f, 0.0025989520363509655f, 0.0018637944012880325f, 0.01024861540645361f, 0.008183418773114681f, 0.003739577252417803f, 0.00843227468430996f, 0.013767465949058533f, 0.0015930883819237351f, 0.004032874014228582f, 0.009366904385387897f, 0.006906319875270128f, 0.00452135456725955f, 0.02137160301208496f, 0.0016452086856588721f, 0.011013912968337536f, 0.004418643191456795f, 0.0025593622121959925f, 0.004284280352294445f, 0.006434489507228136f, 0.009608142077922821f, 0.00649708416312933f, 0.005848165601491928f, 0.01209114957600832f, 0.005205809138715267f, 0.013049930334091187f, 0.0036327296402305365f, 0.010119356215000153f, 0.015925880521535873f, 0.0038967079017311335f, 0.005907867103815079f, 0.011886599473655224f, 0.015455172397196293f, 0.01078518945723772f, 0.00247614411637187f, 0.008338211104273796f, 0.003005241509526968f, 0.012213998474180698f, 0.0016915085725486279f, 0.01380784809589386f, 0.005722889676690102f, 0.007791133131831884f, 0.0027171727269887924f, 0.008512292988598347f, 0.007394341751933098f, 0.00877574272453785f, 0.010051531717181206f, 0.0068348306231200695f, 0.008818498812615871f, 0.0011896161595359445f, 0.006243076175451279f, 0.006429832894355059f, 0.0058157965540885925f, 0.014856388792395592f, 0.007124131079763174f, 0.0026461470406502485f, 0.011006120592355728f, 0.009028071537613869f, 0.008102662861347198f, 0.004310280550271273f, 0.011590343900024891f, 0.005203640554100275f, 0.013667084276676178f, 0.005957416258752346f, 0.014691132120788097f, 0.0072812363505363464f, 0.007472996599972248f, 0.009727152064442635f, 0.0038375400472432375f, 0.0023733917623758316f, 0.01808423548936844f, 0.010926878079771996f, 0.007197093218564987f, 0.009160175919532776f, 0.0021193567663431168f, 0.01471023727208376f, 0.009450823999941349f, 0.013630850240588188f, 0.004990869667381048f, 0.0069882539100945f, 0.00954101700335741f, 0.004778325092047453f, 0.006243910640478134f, 0.010098611004650593f, 0.008770275861024857f, 0.0115268025547266f, 0.007298235781490803f, 0.00796010997146368f, 0.018977295607328415f, 0.002994326176121831f, 0.011327886022627354f, 0.0023168534971773624f, 0.008640500716865063f, 0.0048729730769991875f, 0.004086566623300314f, 0.006726943887770176f, 0.014513709582388401f, 0.008909326046705246f, 0.005182474385946989f, 0.010530720464885235f, 0.0060333083383738995f, 0.01040664128959179f, 0.006505084224045277f, 0.012738293036818504f, 0.009197683073580265f, 0.00778215192258358f, 0.004762162454426289f, 0.014603656716644764f, 0.007682816591113806f, 0.006794599816203117f, 0.009539209306240082f, 0.018858643248677254f, 0.010304294526576996f, 0.13515953719615936f, 0.010605080053210258f, 0.00579939316958189f, 0.004222302697598934f, 0.014644003473222256f, 0.015375562943518162f, 0.012748553417623043f, 0.006996435578912497f, 0.004738663323223591f, 0.008592825382947922f, 0.003087725257501006f, 0.008880279026925564f, 0.007144061848521233f, 0.0024355719797313213f, 0.0087824035435915f, 0.006897639948874712f, 0.008042968809604645f, 0.006034154910594225f, 0.002787506440654397f, 0.004067649133503437f, 0.005642351694405079f, 0.004585638176649809f, 0.007098800968378782f, 0.01569535955786705f, 0.007901892066001892f, 0.0027663849759846926f, 0.002913397504016757f, 0.0114605026319623f, 0.009411702863872051f, 0.006658544298261404f, 0.004851949401199818f, 0.012679839506745338f, 0.006259653717279434f, 0.007954702712595463f, 0.004530700389295816f, 0.00646366598084569f, 0.014980321750044823f, 0.01065476331859827f, 0.008866463787853718f, 0.007424966432154179f, 0.005767343565821648f, 0.011410432867705822f, 0.004690644796937704f, 0.00466669537127018f, 0.004622758831828833f, 0.006119291763752699f, 0.0056945220567286015f, 0.013379807583987713f, 0.004961048252880573f, 0.014590318314731121f, 0.006939163897186518f, 0.007563568186014891f, 0.016403568908572197f, 0.0033094044774770737f, 0.010835697874426842f, 0.005085371434688568f, 0.013734562322497368f, 0.009743313305079937f, 0.006586045958101749f, 0.005001510493457317f, 0.008805522695183754f, 0.008207220584154129f, 0.004625616129487753f, 0.005680132191628218f, 0.008189259096980095f, 0.006370764225721359f, 0.020307060331106186f, 0.0030750150326639414f, 0.01613924466073513f, 0.005936744157224894f, 0.004420241340994835f, 0.011077254079282284f, 0.007809294853359461f, 0.011408556252717972f, 0.0071028973907232285f, 0.010390518233180046f, 0.013968037441372871f, 0.007131598424166441f, 0.0024071591906249523f, 0.014627144671976566f, 0.009632887318730354f, 0.0027008720207959414f, 0.002193572698161006f, 0.012879031710326672f, 0.01848437450826168f, 0.001999045256525278f, 0.009951970539987087f, 0.0038335409481078386f, 0.0029733125120401382f, 0.003692319616675377f, 0.0019008825765922666f, 0.011782863177359104f, 0.023831147700548172f, 0.005553562194108963f, 0.002241404727101326f, 0.007035982795059681f, 0.003554430790245533f, 0.013194410130381584f, 0.00582598801702261f, 0.007281225174665451f, 0.0021771849133074284f, 0.013541053980588913f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #152 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_56_bias_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 336,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0001841396588133648f, 0.0003057037538383156f, 0.00018173923308495432f, 0.00016159260121639818f, 0.00013161561219021678f, 0.0001119026419473812f, 0.000218076107557863f, 0.0003371477941982448f, 6.457002746174112e-05f, 0.00017517716332804412f, 0.0001472103176638484f, 0.00037004120531491935f, 0.0002464629360474646f, 0.00028862242470495403f, 0.00026253549731336534f, 0.00015714371693320572f, 8.609284850535914e-05f, 6.783003482269123e-05f, 0.00013898937322665006f, 0.0001512677117716521f, 8.911231270758435e-05f, 0.0001408691459801048f, 0.00010224615107290447f, 0.00016903530922718346f, 0.00017735677829477936f, 0.00016466756642330438f, 0.0002573906967882067f, 0.00017346441745758057f, 0.00012623966904357076f, 6.137869786471128e-05f, 0.00011954749061260372f, 0.00014847551938146353f, 0.0001842460478655994f, 0.0001965029805433005f, 7.012423884589225e-05f, 0.0001508218701928854f, 0.0002097454125760123f, 0.00017644694889895618f, 0.0001602637057658285f, 0.00025049431133084f, 0.00017796389875002205f, 0.0001055074026226066f, 0.00016733731899876148f, 0.00023650121875107288f, 0.0002665597712621093f, 0.00015736575005576015f, 0.00011289415851933882f, 0.000368881766917184f, 9.393302025273442e-05f, 0.00012277487257961184f, 4.721950244856998e-05f, 0.00012622616486623883f, 0.00020267184299882501f, 0.00021223071962594986f, 0.00013611758186016232f, 5.654259803122841e-05f, 0.00012411463831085712f, 6.309741002041847e-05f, 0.00023566199524793774f, 0.00013318189303390682f, 0.00013669970212504268f, 0.00024868830223567784f, 5.836803757119924e-05f, 0.0001763803738867864f, 0.00031123607186600566f, 0.00017413779278285801f, 0.0001458340702811256f, 0.0001676589745329693f, 0.00017819360073190182f, 0.00011127909237984568f, 0.00016676128143444657f, 4.936544064548798e-05f, 0.00018730940064415336f, 0.0005116235697641969f, 8.486020669806749e-05f, 0.00013016228331252933f, 0.00014918280066922307f, 0.00045392022002488375f, 0.00013881876657251269f, 0.00016691161727067083f, 0.00015578664897475392f, 0.00024400698021054268f, 0.0002679155149962753f, 0.0001806543441489339f, 0.00012270266597624868f, 6.079191734897904e-05f, 0.0001411225675838068f, 0.0002175120316678658f, 8.429851732216775e-05f, 0.00022151325538288802f, 0.000236929117818363f, 0.00016848316590767354f, 0.00030865916050970554f, 0.00017561798449605703f, 0.00012042682647006586f, 0.00019355402037035674f, 0.00011199549771845341f, 0.0002733181172516197f, 0.00013846179354004562f, 0.0001383461058139801f, 0.00014790498244110495f, 0.00013099919306114316f, 0.000176809131517075f, 0.0001210501795867458f, 0.00036609594826586545f, 0.00026300622266717255f, 0.00012505338236223906f, 0.00017598293197806925f, 0.00041001971112564206f, 0.0002097019023494795f, 0.00020546119776554406f, 0.00019040468032471836f, 0.00022270101180765778f, 0.00014638669381383806f, 0.00014965909940656275f, 4.862309288000688e-05f, 0.00021109044610057026f, 0.00016225875879172236f, 0.0001661129790591076f, 8.125195745378733e-05f, 0.0001884628291008994f, 0.00015803228598088026f, 6.11518116784282e-05f, 4.38539864262566e-05f, 0.0002411438908893615f, 0.00019255102961324155f, 8.799005445325747e-05f, 0.0001984064729185775f, 0.0003239403886254877f, 3.748443486983888e-05f, 9.489115473115817e-05f, 0.0002203977492172271f, 0.00016250164480879903f, 0.0001063848176272586f, 0.0005028612795285881f, 3.871079388773069e-05f, 0.00025915089645422995f, 0.00010396807920187712f, 6.0220289014978334e-05f, 0.00010080659558298066f, 0.0001513997558504343f, 0.00022607394203078002f, 0.00015287256974261254f, 0.00013760389992967248f, 0.000284497655229643f, 0.0001224896259373054f, 0.00030705719836987555f, 8.547599281882867e-05f, 0.00023810249695088714f, 0.00037472660187631845f, 9.168724500341341e-05f, 0.00013900863996241242f, 0.000279684696579352f, 0.000363651110092178f, 0.00025376916164532304f, 5.8262216043658555e-05f, 0.00019619319937191904f, 7.071156869642437e-05f, 0.0002873882185667753f, 3.980020119342953e-05f, 0.00032489054137840867f, 0.00013465623487718403f, 0.00018332077888771892f, 6.393347575794905e-05f, 0.0002002892579184845f, 0.00017398451745975763f, 0.000206488068215549f, 0.00023650663206353784f, 0.00016081954527180642f, 0.0002074941003229469f, 2.799096910166554e-05f, 0.0001468959089834243f, 0.00015129019448067993f, 0.00013684228179045022f, 0.0003495620912872255f, 0.0001676266110735014f, 6.22622828814201e-05f, 0.00025896754232235253f, 0.0002124252205248922f, 0.00019065089873038232f, 0.00010141836537513882f, 0.0002727139799389988f, 0.00012243860692251474f, 0.00032157846726477146f, 0.00014017449575476348f, 0.00034567370312288404f, 0.00017132320499513298f, 0.0001758352154865861f, 0.00022887416707817465f, 9.029506327351555e-05f, 5.5844513553893194e-05f, 0.0004255114181432873f, 0.0002571030054241419f, 0.000169343373272568f, 0.00021553355327341706f, 4.9867219786392525e-05f, 0.00034612324088811874f, 0.00022237232769839466f, 0.0003207258996553719f, 0.00011743223149096593f, 0.00016442951164208353f, 0.00022449452080763876f, 0.00011243118206039071f, 0.0001469155540689826f, 0.00023761438205838203f, 0.00020635942928493023f, 0.00027121888706460595f, 0.0001717231934890151f, 0.00018729671137407422f, 0.0004465246165636927f, 7.04547346686013e-05f, 0.0002665384963620454f, 5.451419929158874e-05f, 0.00020330589904915541f, 0.00011465819261502475f, 9.615450835553929e-05f, 0.00015828103641979396f, 0.00034149904968217015f, 0.0002096312091453001f, 0.0001219405748997815f, 0.00024778165970928967f, 0.00014196020492818207f, 0.00024486216716468334f, 0.0001530608133180067f, 0.0002997245464939624f, 0.00021641608327627182f, 0.00018310945597477257f, 0.00011205088230781257f, 0.00034361545112915337f, 0.00018077215645462275f, 0.00015987294318620116f, 0.00022445198555942625f, 0.00044373280252330005f, 0.00024245399981737137f, 0.003180224448442459f, 0.00024953129468485713f, 0.000136456306790933f, 9.934829722624272e-05f, 0.00034456478897482157f, 0.00036177795846015215f, 0.000299965962767601f, 0.0001646220189286396f, 0.00011149796046083793f, 0.0002021841355599463f, 7.265235763043165e-05f, 0.00020894774934276938f, 0.000168095575645566f, 5.7307577662868425e-05f, 0.0002066447923425585f, 0.0001622974086785689f, 0.00018924633332062513f, 0.00014198011194821447f, 6.558838504133746e-05f, 9.570939437253401e-05f, 0.00013276121171656996f, 0.0001078973727999255f, 0.0001670306082814932f, 0.0003693025792017579f, 0.00018592688138596714f, 6.509141530841589e-05f, 6.855052924947813e-05f, 0.00026965889264829457f, 0.00022145183174870908f, 0.00015667163825128227f, 0.00011416351480875164f, 0.0002983491576742381f, 0.00014728597307112068f, 0.0001871694839792326f, 0.00010660471889423206f, 0.00015208625700324774f, 0.0003524781786836684f, 0.00025070030824281275f, 0.00020862268866039813f, 0.0001747050991980359f, 0.00013570219743996859f, 0.000268480769591406f, 0.00011036811338271946f, 0.00010980459774145856f, 0.00010877080057980493f, 0.00014398334315046668f, 0.00013398875307757407f, 0.0003148190153297037f, 0.00011673055269056931f, 0.0003433016245253384f, 0.0001632744533708319f, 0.00017796631436794996f, 0.00038596632657572627f, 7.786833884892985e-05f, 0.00025495761656202376f, 0.00011965580051764846f, 0.00032316616852767766f, 0.00022925443772692233f, 0.00015496578998863697f, 0.0001176826044684276f, 0.0002071887720376253f, 0.00019311107462272048f, 0.00010883803042815998f, 0.00013365017366595566f, 0.00019268845790065825f, 0.0001499003410572186f, 0.000477813184261322f, 7.235329394461587e-05f, 0.0003797469544224441f, 0.00013968809798825532f, 0.00010400568135082722f, 0.00026064127450808883f, 0.00018374812498223037f, 0.0002684366190806031f, 0.0001671270001679659f, 0.0002444827987346798f, 0.00032865972025319934f, 0.00016780232544988394f, 5.663904084940441e-05f, 0.0003441681037656963f, 0.0002266561787109822f, 6.354993092827499e-05f, 5.16134750796482e-05f, 0.0003030360385309905f, 0.0004349264781922102f, 4.703635931946337e-05f, 0.00023416402109432966f, 9.020096331369132e-05f, 6.996029696892947e-05f, 8.68781135068275e-05f, 4.472665023058653e-05f, 0.00027724384563043714f, 0.000560732907615602f, 0.00013067205145489424f, 5.273893475532532e-05f, 0.0001655525411479175f, 8.363366941921413e-05f, 0.00031045672949403524f, 0.00013708206824958324f, 0.00017132294306065887f, 5.122788206790574e-05f, 0.0003186130488757044f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #153 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_57_weights_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 56,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003722590859979391f, 0.005166194401681423f, 0.006411546841263771f, 0.006104451138526201f, 0.008650653064250946f, 0.009354004636406898f, 0.007212489377707243f, 0.004446621518582106f, 0.011430935934185982f, 0.004489575512707233f, 0.008673436939716339f, 0.01507863774895668f, 0.003991708625108004f, 0.012610597535967827f, 0.009684494696557522f, 0.0032138540409505367f, 0.0063924542628228664f, 0.006518612615764141f, 0.006334715057164431f, 0.005306134466081858f, 0.0071409824304282665f, 0.00658711651340127f, 0.011111904866993427f, 0.005219192244112492f, 0.009618445299565792f, 0.005887886043637991f, 0.004762082826346159f, 0.010199238546192646f, 0.006264984607696533f, 0.004968222230672836f, 0.009383726865053177f, 0.0160351675003767f, 0.004920480772852898f, 0.007519877515733242f, 0.004266605246812105f, 0.007062897086143494f, 0.00655359635129571f, 0.011172286234796047f, 0.0032313591800630093f, 0.010231728665530682f, 0.008439477533102036f, 0.019687501713633537f, 0.004405539948493242f, 0.004756871145218611f, 0.005347731988877058f, 0.011479390785098076f, 0.005219428800046444f, 0.006460215430706739f, 0.005866401828825474f, 0.00501851923763752f, 0.009528109803795815f, 0.008587398566305637f, 0.007519822102040052f, 0.008015179075300694f, 0.008610982447862625f, 0.006810722406953573f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #154 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_57_bias_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 56,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(8.155089017236605e-05f, 0.00011317594180582091f, 0.00014045790885575116f, 0.00013373035471886396f, 0.00018951007223222405f, 0.00020491841132752597f, 0.00015800417168065906f, 9.741224494064227e-05f, 0.00025041779736056924f, 9.8353237262927e-05f, 0.0001900091883726418f, 0.00033032806823030114f, 8.744646038394421e-05f, 0.00027626066002994776f, 0.0002121584548149258f, 7.040597847662866e-05f, 0.0001400396431563422f, 0.00014280340110417455f, 0.0001387747615808621f, 0.0001162416156148538f, 0.0001564376725582406f, 0.0001443041255697608f, 0.00024342877441085875f, 0.00011433697363827378f, 0.0002107115142280236f, 0.00012898606655653566f, 0.00010432306589791551f, 0.00022343496675603092f, 0.0001372471742797643f, 0.0001088389617507346f, 0.00020556953677441925f, 0.00035128279705531895f, 0.00010779309377539903f, 0.00016473814321216196f, 9.346862498205155e-05f, 0.00015472705126740038f, 0.00014356979227159172f, 0.0002447515435051173f, 7.078946509864181e-05f, 0.0002241467300336808f, 0.00018488384375814348f, 0.00043129458208568394f, 9.651226719142869e-05f, 0.00010420889157103375f, 0.0001171528929262422f, 0.0002514793013688177f, 0.00011434215412009507f, 0.00014152409858070314f, 0.00012851539941038936f, 0.00010994081821991131f, 0.00020873252651654184f, 0.00018812435155268759f, 0.00016473692085128278f, 0.0001755887205945328f, 0.00018864100275095552f, 0.0001492026640335098f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #155 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_59_weights_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 336,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0005764568340964615f, 0.0005423232796601951f, 0.0010303477756679058f, 0.0006638749036937952f, 0.0008720578043721616f, 0.0006585454102605581f, 0.0016895580338314176f, 0.0007446880335919559f, 0.0007089873543009162f, 0.0007022980134934187f, 0.00027071169461123645f, 0.0012841671705245972f, 0.0010621445253491402f, 0.0006077828584238887f, 0.0005683014751411974f, 0.000296157319098711f, 0.0008524819277226925f, 0.0006806721212342381f, 0.0013563603861257434f, 0.0005509974434971809f, 0.0004096156044397503f, 0.0009711158345453441f, 0.000755250221118331f, 0.0009097674628719687f, 0.00042412805487401783f, 0.0006566779920831323f, 0.0005046341102570295f, 0.0006350338808260858f, 0.0005467486917041242f, 0.0006819072877988219f, 0.0003202423104085028f, 0.0009004311868920922f, 0.0005017536459490657f, 0.000763557618483901f, 0.0006429023342207074f, 0.00040411174995824695f, 0.0008481190889142454f, 0.0008370815776288509f, 0.00031104922527447343f, 0.0003814268275164068f, 0.0005169797805137932f, 0.00033719342900440097f, 0.0010868702083826065f, 0.0006684440304525197f, 0.0007356541464105248f, 0.0009286841377615929f, 0.0007559863734059036f, 0.0013422103365883231f, 0.0007863965583965182f, 0.0008385462570004165f, 0.0004087817796971649f, 0.0007050101412460208f, 0.0008302631322294474f, 0.0010051779681816697f, 0.0006775742513127625f, 0.0005824226536788046f, 0.0008389101712964475f, 0.0006843233131803572f, 0.0005537836696021259f, 0.000604048022069037f, 0.00044210487976670265f, 0.0006202583899721503f, 0.0007435393636114895f, 0.0002606152556836605f, 0.0006201800424605608f, 0.00037009938387200236f, 0.0005853591137565672f, 0.00036678012111224234f, 0.0007466966053470969f, 0.000780573405791074f, 0.00036893165088258684f, 0.00046701382962055504f, 0.0008881894173100591f, 0.0008671369287185371f, 0.0006067116628400981f, 0.00047535993508063257f, 0.000768498401157558f, 0.0004306133487261832f, 0.00034724894794635475f, 0.000680572644341737f, 0.000990980421192944f, 0.0004456835158634931f, 0.0007649481412954628f, 0.0005346631514839828f, 0.00038722436875104904f, 0.0005143532180227339f, 0.0005988790653645992f, 0.0004755106056109071f, 0.0005394488107413054f, 0.0008225610363297164f, 0.0004680970450863242f, 0.0008722737547941506f, 0.0004060437495354563f, 0.0008653984987176955f, 0.0006972866831347346f, 0.0005570548819378018f, 0.0007153099286369979f, 0.00048331075231544673f, 0.000760250783059746f, 0.0005694050923921168f, 0.00048263478674925864f, 0.000651601527351886f, 0.0008008485310710967f, 0.0007181179244071245f, 0.0007292472873814404f, 0.0009522295440547168f, 0.0004137176729273051f, 0.0009036797564476728f, 0.0007908676634542644f, 0.0010248656617477536f, 0.0004070586001034826f, 0.0006585383671335876f, 0.00048172182869166136f, 0.000660477380733937f, 0.0011007346911355853f, 0.0007574806804768741f, 0.0008325328235514462f, 0.0005614469409920275f, 0.0006495650741271675f, 0.0007058629998937249f, 0.0004777382127940655f, 0.0004165793361607939f, 0.0006813335930928588f, 0.0004925585817545652f, 0.0006582345231436193f, 0.00045083026634529233f, 0.000844196998514235f, 5.517206227523275e-05f, 0.0005299861659295857f, 0.000364342937245965f, 0.0004355336131993681f, 0.0006692348979413509f, 0.0008974457741715014f, 0.0004351605020929128f, 0.000473147229058668f, 0.00043498221202753484f, 0.00038845313247293234f, 0.0006424154271371663f, 0.0006835070089437068f, 0.0010234416695311666f, 0.0003456384874880314f, 0.0008141638827510178f, 0.0007155180210247636f, 0.0011677120346575975f, 0.0006744283600710332f, 0.0005805547698400915f, 0.0010610900353640318f, 0.0006003576563671231f, 0.0008319597109220922f, 0.00037461769534274936f, 0.0005131170037202537f, 0.0004277118423487991f, 0.0006978872115723789f, 0.00039449799805879593f, 0.0006699693622067571f, 0.0014492843765765429f, 0.0007562972023151815f, 0.0005075189401395619f, 0.00043793770601041615f, 0.0010521382791921496f, 0.0007864244980737567f, 0.0006818301044404507f, 0.0004850155964959413f, 0.0005548803019337356f, 0.00075968645978719f, 0.0009002372389659286f, 0.0007427912205457687f, 0.0006484441109932959f, 0.0003483426698949188f, 0.000744495599064976f, 0.0006594801088795066f, 0.0006138590397313237f, 0.001139461062848568f, 0.0007724636816419661f, 0.0008326562237925828f, 0.0009569113608449697f, 0.0008842534734867513f, 0.000208821875276044f, 0.00040611278382129967f, 0.0003877095296047628f, 0.0005058685783296824f, 0.0006710236775688827f, 0.0013349608052521944f, 0.0007652717176824808f, 0.00042882919660769403f, 0.00046376415411941707f, 0.0005674092099070549f, 0.0004279313434381038f, 0.001231739530339837f, 0.0010362102184444666f, 0.0007660217816010118f, 0.000511208432726562f, 0.0005479246028698981f, 0.00040808008634485304f, 0.0008274595020338893f, 0.0007820419850759208f, 0.00039233179995790124f, 0.0008025761344470084f, 0.0009308959124609828f, 0.0003375438682269305f, 0.0009068554500117898f, 0.0007096815388649702f, 0.0006146026425994933f, 0.0006218778435140848f, 0.0009329730528406799f, 0.0006311951437965035f, 0.00036736144102178514f, 0.0009962260955944657f, 0.0007606182480230927f, 0.0008977151592262089f, 0.00038453435990959406f, 0.00129055161960423f, 0.0008775726892054081f, 0.0005177489947527647f, 0.0006398863042704761f, 0.0008087416063062847f, 0.000937949400395155f, 0.000740537594538182f, 0.0006960763712413609f, 0.00028603230020962656f, 0.000514222017955035f, 0.0011427632998675108f, 0.0006409519701264799f, 0.0005910841864533722f, 0.0006062710890546441f, 0.00029881109367124736f, 0.0005719228647649288f, 0.0005010950844734907f, 0.00030769355362281203f, 0.0008769555133767426f, 0.0006765472353436053f, 0.000478168367408216f, 0.0006358715472742915f, 0.0008697412558831275f, 0.0006533824489451945f, 0.0002652071416378021f, 0.0009104169439524412f, 0.0008829112630337477f, 0.00047626724699512124f, 0.0005525168380700052f, 0.0003202176303602755f, 0.000763817981351167f, 0.0007840168545953929f, 0.0007419525645673275f, 0.0006414932431653142f, 0.00043420467409305274f, 0.000725971651263535f, 0.000573726836591959f, 0.0005960622802376747f, 0.0009677622001618147f, 0.000600817147642374f, 0.00023029099975246936f, 0.0005833784816786647f, 0.0008455839706584811f, 0.0004253120278008282f, 0.000484094227431342f, 0.0003345632285345346f, 0.0006704256520606577f, 0.0008369739516638219f, 0.000597357633523643f, 0.0008316842140629888f, 0.0007355866255238652f, 0.0003878417192026973f, 0.0008324418449774384f, 0.00042118068085983396f, 0.0007976651540957391f, 0.0004791353130713105f, 0.0005599388969130814f, 0.0006864155875518918f, 0.00039913924410939217f, 0.0013572657480835915f, 0.0008250927785411477f, 0.00033405033173039556f, 0.0005276220035739243f, 0.0006405177409760654f, 0.0010161662939935923f, 0.0006508614169433713f, 0.002023607026785612f, 0.0009090382955037057f, 0.000747669255360961f, 0.0004929961869493127f, 0.0006205242243595421f, 0.000845136761199683f, 0.0007090542349033058f, 0.0003957573208026588f, 0.0009522633627057076f, 0.0003916363057214767f, 0.0009494375553913414f, 0.0011515411315485835f, 0.0005825507687404752f, 0.0011906453873962164f, 0.0006142642232589424f, 0.0007588415173813701f, 0.0006500929594039917f, 0.0006588094402104616f, 0.0003280515084043145f, 0.0008707355009391904f, 0.0008772147702984512f, 0.0008445259882137179f, 0.0005458776140585542f, 0.0006903329049237072f, 0.00033653731225058436f, 0.00042017336818389595f, 0.0004965896951034665f, 0.000812902522739023f, 0.0005048617022112012f, 0.00038727547507733107f, 0.0006280053057707846f, 0.0005999045097269118f, 0.0002473389031365514f, 0.0010358532890677452f, 0.000520066125318408f, 0.0005790544091723859f, 0.00047165071009658277f, 0.00046822105650790036f, 0.0008078339160420001f, 0.0006113086128607392f, 0.0006543149356730282f, 0.000570831703953445f, 0.0002958358090836555f, 0.0006206100806593895f, 0.0008666564244776964f, 0.0005665792850777507f, 0.0007955426699481905f, 0.0005045979050919414f, 0.0009126923396252096f, 0.0002799311187118292f, 0.0011028748704120517f, 0.0005283884820528328f, 0.00025026031653396785f, 0.0005786542897112668f, 0.00046257529174908996f, 0.0015140583273023367f, 0.00031088737887330353f, 0.0005962432478554547f, 0.0007398063316941261f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #156 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_59_bias_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 336,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(6.630666030105203e-05f, 6.238046626094729e-05f, 0.00011851524322992191f, 7.636188092874363e-05f, 0.00010030801786342636f, 7.574885967187583e-05f, 0.00019434058049228042f, 8.565737516619265e-05f, 8.155091927619651e-05f, 8.0781479482539e-05f, 3.113847924396396e-05f, 0.00014771069982089102f, 0.0001221726561198011f, 6.990992551436648e-05f, 6.536860018968582e-05f, 3.406534960959107e-05f, 9.805631270864978e-05f, 7.829397509340197e-05f, 0.00015601469203829765f, 6.337821105262265e-05f, 4.71158346044831e-05f, 0.0001117021165555343f, 8.687228546477854e-05f, 0.00010464555089129135f, 4.878512118011713e-05f, 7.553405885118991e-05f, 5.804529064334929e-05f, 7.304445898626e-05f, 6.288949953159317e-05f, 7.843605271773413e-05f, 3.683571412693709e-05f, 0.00010357165592722595f, 5.771396536147222e-05f, 8.782783697824925e-05f, 7.394952262984589e-05f, 4.6482753532473e-05f, 9.755448263604194e-05f, 9.628489351598546e-05f, 3.5778284654952586e-05f, 4.38734314229805e-05f, 5.9465342928888276e-05f, 3.878550705849193e-05f, 0.00012501671153586358f, 7.688744517508894e-05f, 8.461825200356543e-05f, 0.00010682143329177052f, 8.695696305949241e-05f, 0.00015438708942383528f, 9.045487968251109e-05f, 9.645336831454188e-05f, 4.701992293121293e-05f, 8.109344344120473e-05f, 9.550061076879501e-05f, 0.00011562010331545025f, 7.793764234520495e-05f, 6.699287769151852e-05f, 9.649522689869627e-05f, 7.871395064285025e-05f, 6.369869515765458e-05f, 6.948032387299463e-05f, 5.085289740236476e-05f, 7.134491897886619e-05f, 8.55252510518767e-05f, 2.9977141821291298e-05f, 7.133590406738222e-05f, 4.2570500227157027e-05f, 6.733064219588414e-05f, 4.2188701627310365e-05f, 8.588840864831582e-05f, 8.97850695764646e-05f, 4.2436182411620393e-05f, 5.371803490561433e-05f, 0.00010216354712611064f, 9.974199929274619e-05f, 6.978670717217028e-05f, 5.467804294312373e-05f, 8.839614747557789e-05f, 4.9531088734511286e-05f, 3.994214057456702e-05f, 7.828253001207486e-05f, 0.00011398703645681962f, 5.1264527428429574e-05f, 8.798778435448185e-05f, 6.14993623457849e-05f, 4.454029112821445e-05f, 5.9163226978853345e-05f, 6.888576899655163e-05f, 5.469537427416071e-05f, 6.204983219504356e-05f, 9.461467561777681e-05f, 5.3842632041778415e-05f, 0.00010033285798272118f, 4.6704983105883e-05f, 9.954203414963558e-05f, 8.020505629247054e-05f, 6.407496402971447e-05f, 8.227817306760699e-05f, 5.5592579883523285e-05f, 8.744747174205258e-05f, 6.549553654622287e-05f, 5.551482900045812e-05f, 7.495014142477885e-05f, 9.211721044266596e-05f, 8.26011601020582e-05f, 8.388130663661286e-05f, 0.00010952973389066756f, 4.758767317980528e-05f, 0.00010394532000645995f, 9.096916619455442e-05f, 0.00011788466508733109f, 4.6821714931866154e-05f, 7.574805204058066e-05f, 5.540981510421261e-05f, 7.597108196932822e-05f, 0.00012661147047765553f, 8.712884300621226e-05f, 9.576167940394953e-05f, 6.458015559474006e-05f, 7.471589924534783e-05f, 8.119154517771676e-05f, 5.495160075952299e-05f, 4.791683386429213e-05f, 7.837005978217348e-05f, 5.665630669682287e-05f, 7.571309834020212e-05f, 5.1856528443749994e-05f, 9.710334416013211e-05f, 6.34613934380468e-06f, 6.0961396229686216e-05f, 4.190836625639349e-05f, 5.009703818359412e-05f, 7.697841647313908e-05f, 0.00010322825983166695f, 5.005412094760686e-05f, 5.4423526307800785e-05f, 5.0033613661071286e-05f, 4.468163024284877e-05f, 7.389351958408952e-05f, 7.862005440983921e-05f, 0.0001177208760054782f, 3.975689833168872e-05f, 9.364879952045158e-05f, 8.230211096815765e-05f, 0.00013431550178211182f, 7.757578714517877e-05f, 6.677802593912929e-05f, 0.00012205135863041505f, 6.905584450578317e-05f, 9.569575922796503e-05f, 4.3090214603580534e-05f, 5.902102930122055e-05f, 4.91973441967275e-05f, 8.02741342340596e-05f, 4.537693894235417e-05f, 7.706289761699736e-05f, 0.0001667032192926854f, 8.699270983925089e-05f, 5.837711432832293e-05f, 5.037356822867878e-05f, 0.00012102168693672866f, 9.045808837981895e-05f, 7.842716877348721e-05f, 5.578868149314076e-05f, 6.382483115885407e-05f, 8.738256292417645e-05f, 0.00010354934784118086f, 8.543919102521613e-05f, 7.458696200046688e-05f, 4.006794551969506e-05f, 8.56352417031303e-05f, 7.585637649754062e-05f, 7.06088321749121e-05f, 0.00013106594269629568f, 8.885225543053821e-05f, 9.57758747972548e-05f, 0.00011006825661752373f, 0.00010171082249144092f, 2.4019633201532997e-05f, 4.6712921175640076e-05f, 4.4596097723115236e-05f, 5.8187284594168887e-05f, 7.718416600255296e-05f, 0.00015355320647358894f, 8.80250008776784e-05f, 4.9325866712024435e-05f, 5.334424349712208e-05f, 6.526596553158015e-05f, 4.9222591769648716e-05f, 0.0001416802260791883f, 0.00011918957170564681f, 8.811127918306738e-05f, 5.880149910808541e-05f, 6.302475958364084e-05f, 4.6939210733398795e-05f, 9.517811849946156e-05f, 8.995399548439309e-05f, 4.5127770135877654e-05f, 9.231592412106693e-05f, 0.00010707584442570806f, 3.8825815863674507e-05f, 0.00010431060218252242f, 8.163076563505456e-05f, 7.069436833262444e-05f, 7.15311907697469e-05f, 0.000107314765045885f, 7.260291022248566e-05f, 4.225556767778471e-05f, 0.00011459041706984863f, 8.748973777983338e-05f, 0.00010325924085918814f, 4.4230873754713684e-05f, 0.00014844506222289056f, 0.00010094236495206133f, 5.9553822211455554e-05f, 7.360260497080162e-05f, 9.302510443376377e-05f, 0.0001078871646313928f, 8.517997048329562e-05f, 8.006583811948076e-05f, 3.29007234540768e-05f, 5.914813300478272e-05f, 0.00013144579133950174f, 7.372518302872777e-05f, 6.798916729167104e-05f, 6.97360301273875e-05f, 3.4370597859378904e-05f, 6.578514876309782e-05f, 5.7638215366750956e-05f, 3.539229874149896e-05f, 0.00010087137343361974f, 7.781950989738107e-05f, 5.5001080909278244e-05f, 7.314081449294463e-05f, 0.00010004155774367973f, 7.515499601140618e-05f, 3.0505319955409504e-05f, 0.00010472026042407379f, 0.00010155643394682556f, 5.478240564116277e-05f, 6.355297955451533e-05f, 3.683287650346756e-05f, 8.785778481978923e-05f, 9.01811508811079e-05f, 8.534272637916729e-05f, 7.378744339803234e-05f, 4.994417759007774e-05f, 8.350452844751999e-05f, 6.59926445223391e-05f, 6.856177060399204e-05f, 0.00011131636711070314f, 6.91086970618926e-05f, 2.6489109586691484e-05f, 6.710282468702644e-05f, 9.72628768067807e-05f, 4.89213052787818e-05f, 5.568269989453256e-05f, 3.8482969102915376e-05f, 7.711537909926847e-05f, 9.627251711208373e-05f, 6.871076766401529e-05f, 9.566406515659764e-05f, 8.46104885567911e-05f, 4.461130083655007e-05f, 9.575120930094272e-05f, 4.844610157306306e-05f, 9.175104059977457e-05f, 5.511230483534746e-05f, 6.440669676521793e-05f, 7.89546174928546e-05f, 4.5910794142400846e-05f, 0.00015611882554367185f, 9.490588854532689e-05f, 3.842397563857958e-05f, 6.068946095183492e-05f, 7.367524085566401e-05f, 0.00011688402446452528f, 7.48650127206929e-05f, 0.0002327644033357501f, 0.00010456168092787266f, 8.600029104854912e-05f, 5.670664177159779e-05f, 7.137549255276099e-05f, 9.721143578644842e-05f, 8.155861723935232e-05f, 4.552179234451614e-05f, 0.00010953362652799115f, 4.5047774619888514e-05f, 0.00010920858767349273f, 0.00013245544687379152f, 6.700761150568724e-05f, 0.00013695340021513402f, 7.065544195938855e-05f, 8.728537068236619e-05f, 7.47766243875958e-05f, 7.577922951895744e-05f, 3.77339638362173e-05f, 0.00010015592124545947f, 0.00010090119758388028f, 9.714118641568348e-05f, 6.278930231928825e-05f, 7.940520299598575e-05f, 3.871003718813881e-05f, 4.8330235586036e-05f, 5.711998528568074e-05f, 9.350370964966714e-05f, 5.807146953884512e-05f, 4.454617010196671e-05f, 7.223599823191762e-05f, 6.900371954543516e-05f, 2.8450034733396024e-05f, 0.00011914851347682998f, 5.9820351452799514e-05f, 6.660544750047848e-05f, 5.425139170256443e-05f, 5.385689655668102e-05f, 9.292069444200024e-05f, 7.031547283986583e-05f, 7.526225090259686e-05f, 6.565963849425316e-05f, 3.402836955501698e-05f, 7.138536602724344e-05f, 9.968673111870885e-05f, 6.517050496768206e-05f, 9.150690311798826e-05f, 5.804112515761517e-05f, 0.00010498198389541358f, 3.219893915229477e-05f, 0.0001268576452275738f, 6.077762373024598e-05f, 2.8786069378838874e-05f, 6.655942706856877e-05f, 5.320749551174231e-05f, 0.00017415381444152445f, 3.57596691173967e-05f, 6.858258711872622e-05f, 8.509586041327566e-05f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #157 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_60_weights_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 336,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003986581228673458f, 0.004265355411916971f, 0.00405023992061615f, 0.003894002176821232f, 0.004770467523485422f, 0.006517968140542507f, 0.0028859549202024937f, 0.007582823280245066f, 0.008036617189645767f, 0.006870428565889597f, 0.007251964416354895f, 0.006006656214594841f, 0.002795731881633401f, 0.007456622086465359f, 0.007226862944662571f, 0.009156133979558945f, 0.011699317954480648f, 0.005922253243625164f, 0.011935006827116013f, 0.003494794713333249f, 0.00957949087023735f, 0.00599547429010272f, 0.008594626560807228f, 0.012308595702052116f, 0.0033234863076359034f, 0.007458388805389404f, 0.005299712531268597f, 0.006591538432985544f, 0.00279097817838192f, 0.005901511292904615f, 0.01126986462622881f, 0.005774894263595343f, 0.006371113937348127f, 0.0049024298787117004f, 0.007083145435899496f, 0.007931267842650414f, 0.003854272421449423f, 0.008520376868546009f, 0.008391209878027439f, 0.0076475078240036964f, 0.008486940525472164f, 0.007300563622266054f, 0.006518820766359568f, 0.005416196305304766f, 0.0020357253961265087f, 0.004039425868541002f, 0.0038592456839978695f, 0.005067409947514534f, 0.002704393584281206f, 0.009009766392409801f, 0.0075386203825473785f, 0.0027376858051866293f, 0.00317312590777874f, 0.006567422766238451f, 0.005807327106595039f, 0.008049622178077698f, 0.003995547536760569f, 0.006356644444167614f, 0.013414678163826466f, 0.006899082101881504f, 0.009038809686899185f, 0.006940938998013735f, 0.004327190574258566f, 0.01334702130407095f, 0.004730137065052986f, 0.004220979288220406f, 0.005502942483872175f, 0.007137413136661053f, 0.005992077756673098f, 0.006203422322869301f, 0.015805769711732864f, 0.006643000058829784f, 0.016741082072257996f, 0.008580761030316353f, 0.005681533366441727f, 0.001433399855159223f, 0.006291293539106846f, 0.021499106660485268f, 0.009092300198972225f, 0.010097970254719257f, 0.0038666652981191874f, 0.013626877218484879f, 0.0015428599435836077f, 0.0036043229047209024f, 0.0070280213840305805f, 0.009912942536175251f, 0.011446019634604454f, 0.010288786143064499f, 0.0049148621037602425f, 0.0055427937768399715f, 0.0032764507923275232f, 0.009486708790063858f, 0.005912918131798506f, 0.0029149833135306835f, 0.004604875575751066f, 0.016671989113092422f, 0.009821872226893902f, 0.010020637884736061f, 0.002962188096717f, 0.010619275271892548f, 0.0029796722810715437f, 0.007594469003379345f, 0.008012717589735985f, 0.017671987414360046f, 0.010792922228574753f, 0.0011612457456067204f, 0.005928938277065754f, 0.00463944673538208f, 0.008048515766859055f, 0.005211780779063702f, 0.004118075128644705f, 0.007111347280442715f, 0.0033290947321802378f, 0.0052373469807207584f, 0.004607453942298889f, 0.004488830920308828f, 0.004606710281223059f, 0.008996855467557907f, 0.0030691390857100487f, 0.012146180495619774f, 0.0034916952718049288f, 0.004089586902409792f, 0.007209028583019972f, 0.010622133500874043f, 0.003458832623437047f, 0.008659918792545795f, 0.005830818321555853f, 0.18318727612495422f, 0.009691260755062103f, 0.014229022897779942f, 0.016230929642915726f, 0.002321495208889246f, 0.005865119397640228f, 0.008985960856080055f, 0.012499937787652016f, 0.003911823034286499f, 0.01454925537109375f, 0.003924067597836256f, 0.003600434632971883f, 0.002040113089606166f, 0.014523496851325035f, 0.002870710100978613f, 0.0044358293525874615f, 0.006418390665203333f, 0.001207095105201006f, 0.006780398078262806f, 0.007122736889868975f, 0.005257424432784319f, 0.006062102038413286f, 0.019986392930150032f, 0.0027939348947256804f, 0.004774697590619326f, 0.007736705243587494f, 0.010494733229279518f, 0.00849099736660719f, 0.0012754278723150492f, 0.0070600565522909164f, 0.008782629854977131f, 0.01554808858782053f, 0.006029572803527117f, 0.008596818894147873f, 0.006344845052808523f, 0.0031876948196440935f, 0.003716184990480542f, 0.005105137825012207f, 0.002011190867051482f, 0.0017161063151434064f, 0.004161303862929344f, 0.007659387309104204f, 0.006168346386402845f, 0.0044962638057768345f, 0.00403189193457365f, 0.0016749122878536582f, 0.00913112424314022f, 0.003351974068209529f, 0.0035429729614406824f, 0.005586015526205301f, 0.018582625314593315f, 0.005407437216490507f, 0.009255667217075825f, 0.007358316332101822f, 0.005844171158969402f, 0.007701467722654343f, 0.0031608683057129383f, 0.019264906644821167f, 0.007780506741255522f, 0.006871683988720179f, 0.009070298634469509f, 0.004991977941244841f, 0.004018355160951614f, 0.006490308791399002f, 0.007765051443129778f, 0.007056157570332289f, 0.0025807619094848633f, 0.004702460020780563f, 0.0014110880438238382f, 0.0036399648524820805f, 0.012897636741399765f, 0.0028401457238942385f, 0.019781917333602905f, 0.010179707780480385f, 0.004682526458054781f, 0.0042519401758909225f, 0.012136195786297321f, 0.007233080454170704f, 0.01102440059185028f, 0.0090734101831913f, 0.007725305389612913f, 0.0035558638628572226f, 0.01144507247954607f, 0.022218599915504456f, 0.009234985336661339f, 0.006783450022339821f, 0.001948460703715682f, 0.007579800207167864f, 0.0015347911976277828f, 0.008036362938582897f, 0.0038627067115157843f, 0.005389223340898752f, 0.012011048384010792f, 0.004152080975472927f, 0.0019574323669075966f, 0.011648508720099926f, 0.012594981119036674f, 0.007614612113684416f, 0.010976358316838741f, 0.00816228985786438f, 0.009660403244197369f, 0.006498024798929691f, 0.00822004210203886f, 0.011531050316989422f, 0.008025242015719414f, 0.006965884938836098f, 0.0020084248390048742f, 0.00714086415246129f, 0.008242735639214516f, 0.004161593969911337f, 0.005933578126132488f, 0.010801240801811218f, 0.004438138101249933f, 0.006986919324845076f, 0.00508681358769536f, 0.0044112359173595905f, 0.01238177064806223f, 0.006949361879378557f, 0.005898738745599985f, 0.009283707477152348f, 0.0044143060222268105f, 0.0033757882192730904f, 0.00907593872398138f, 0.0015842834254726768f, 0.013429033569991589f, 0.010209799744188786f, 0.0014485924039036036f, 0.008543891832232475f, 0.004180521704256535f, 0.009819074533879757f, 0.015282667241990566f, 0.005584838334470987f, 0.005511076655238867f, 0.008059040643274784f, 0.002883533015847206f, 0.0031367959454655647f, 0.005588970612734556f, 0.014254635199904442f, 0.003563378006219864f, 0.010806047357618809f, 0.006984042003750801f, 0.007953895255923271f, 0.005466955713927746f, 0.010594721883535385f, 0.012054994702339172f, 0.006099284626543522f, 0.006286675110459328f, 0.004018334671854973f, 0.0013322742888703942f, 0.006753504276275635f, 0.006616905331611633f, 0.00752987340092659f, 0.010540811344981194f, 0.0020375188905745745f, 0.0034300500992685556f, 0.011686010286211967f, 0.0037832544185221195f, 0.005466551054269075f, 0.003493217984214425f, 0.008963664062321186f, 0.005242681596428156f, 0.005152217112481594f, 0.005351724568754435f, 0.003356321481987834f, 0.007995998486876488f, 0.00675751268863678f, 0.0069473665207624435f, 0.006551441270858049f, 0.00674639455974102f, 0.006781953852623701f, 0.0028022744227200747f, 0.0020962455309927464f, 0.004261614754796028f, 0.008249045349657536f, 0.0186807531863451f, 0.005930028855800629f, 0.0021199325565248728f, 0.009491130709648132f, 0.005200052168220282f, 0.0049818591214716434f, 0.00451402273029089f, 0.008267806842923164f, 0.1805020123720169f, 0.008079704828560352f, 0.0028978220652788877f, 0.004257858265191317f, 0.012588941492140293f, 0.005427975673228502f, 0.010489578358829021f, 0.014231113716959953f, 0.01339210569858551f, 0.009728919714689255f, 0.015994537621736526f, 0.007224287372082472f, 0.007181243970990181f, 0.0067487140186131f, 0.010809380561113358f, 0.00986594520509243f, 0.003554128808900714f, 0.014426007866859436f, 0.0024851388297975063f, 0.009382425807416439f, 0.009525511413812637f, 0.013625465333461761f, 0.010744319297373295f, 0.006503599230200052f, 0.020398925989866257f, 0.0038926631677895784f, 0.009518614038825035f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #158 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_60_bias_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 336,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(8.402512321481481e-05f, 8.990084461402148e-05f, 8.536686073057353e-05f, 8.207384234992787e-05f, 0.0001005470912787132f, 0.00013737914559897035f, 6.0827238485217094e-05f, 0.00015982307377271354f, 0.00016938768385443836f, 0.00014480794197879732f, 0.0001528495631646365f, 0.00012660223001148552f, 5.892560875508934e-05f, 0.0001571631437400356f, 0.000152320513734594f, 0.00019298373081255704f, 0.0002465863944962621f, 0.00012482325837481767f, 0.0002515540109016001f, 7.365975034190342e-05f, 0.0002019068197114393f, 0.0001263665471924469f, 0.00018114884733222425f, 0.0002594281395431608f, 7.004908547969535e-05f, 0.00015720036753918976f, 0.00011170197831233963f, 0.0001389297831337899f, 5.882541518076323e-05f, 0.00012438608973752707f, 0.00023753481218591332f, 0.0001217173776240088f, 0.0001342838950222358f, 0.00010332845704397187f, 0.00014929137250874192f, 0.00016716723621357232f, 8.12364523881115e-05f, 0.00017958389071282f, 0.00017686143110040575f, 0.000161186428158544f, 0.0001788791414583102f, 0.0001538739015813917f, 0.00013739710266236216f, 0.00011415710469009355f, 4.290696233510971e-05f, 8.513893408235162e-05f, 8.134127710945904e-05f, 0.00010680573905119672f, 5.700047404388897e-05f, 0.0001898987393360585f, 0.0001588914165040478f, 5.770217103417963e-05f, 6.687994027743116e-05f, 0.00013842149928677827f, 0.00012240096111781895f, 0.0001696617982815951f, 8.421410893788561e-05f, 0.0001339789159828797f, 0.00028274100623093545f, 0.000145411875564605f, 0.00019051088020205498f, 0.00014629408542532474f, 9.120414324570447e-05f, 0.0002813150058500469f, 9.969704115064815e-05f, 8.896553481463343e-05f, 0.00011598545825108886f, 0.00015043516759760678f, 0.00012629495176952332f, 0.00013074946764390916f, 0.0003331380139570683f, 0.00014001443923916668f, 0.00035285158082842827f, 0.00018085660121869296f, 0.00011974960943916813f, 3.0211751436581835e-05f, 0.00013260151899885386f, 0.00045313642476685345f, 0.00019163830438628793f, 0.00021283479873090982f, 8.149765926646069e-05f, 0.000287213537376374f, 3.251884118071757e-05f, 7.596827344968915e-05f, 0.00014812951849307865f, 0.00020893497276119888f, 0.0002412476169411093f, 0.0002168566279578954f, 0.00010359049338148907f, 0.0001168254020740278f, 6.905771442689002e-05f, 0.00019995124603156f, 0.00012462650192901492f, 6.143906648503616e-05f, 9.705690899863839e-05f, 0.0003513953124638647f, 0.00020701548783108592f, 0.0002112048678100109f, 6.243400275707245e-05f, 0.00022382233873941004f, 6.280251545831561e-05f, 0.00016006853547878563f, 0.00016888395475689322f, 0.0003724722773768008f, 0.0002274822909384966f, 2.4475562895531766e-05f, 0.00012496416456997395f, 9.77855670498684e-05f, 0.00016963847156148404f, 0.00010984864638885483f, 8.679662278154865e-05f, 0.00014988578914199024f, 7.016729068709537e-05f, 0.00011038750380976126f, 9.711125312605873e-05f, 9.461103763896972e-05f, 9.709558071335778e-05f, 0.00018962661852128804f, 6.46882108412683e-05f, 0.0002560049179010093f, 7.359441951848567e-05f, 8.619617437943816e-05f, 0.00015194460866041481f, 0.00022388258366845548f, 7.290177745744586e-05f, 0.00018252500740345567f, 0.00012289609003346413f, 0.0038610361516475677f, 0.00020426258561201394f, 0.0002999049611389637f, 0.0003420991124585271f, 4.8930127377389e-05f, 0.00012361905828583986f, 0.0001893969892989844f, 0.0002634610573295504f, 8.244944910984486e-05f, 0.0003066544886678457f, 8.270752732641995e-05f, 7.588631706312299e-05f, 4.299943975638598e-05f, 0.0003061115858145058f, 6.050592492101714e-05f, 9.349392348667607e-05f, 0.00013528035196941346f, 2.544193011999596e-05f, 0.00014291037223301828f, 0.00015012583753559738f, 0.00011081067350460216f, 0.00012777085066772997f, 0.0004212529747746885f, 5.888773375772871e-05f, 0.00010063624358735979f, 0.00016306644829455763f, 0.00022119737695902586f, 0.00017896464851219207f, 2.6882178644882515e-05f, 0.00014880472735967487f, 0.00018511139205656946f, 0.00032770688994787633f, 0.00012708523718174547f, 0.00018119504966307431f, 0.0001337302237516269f, 6.718700751662254e-05f, 7.832598930690438e-05f, 0.00010760092845885083f, 4.2389845475554466e-05f, 3.617035326897167e-05f, 8.770775457378477e-05f, 0.0001614368229638785f, 0.0001300101721426472f, 9.476770355831832e-05f, 8.498013630742207e-05f, 3.5302105970913544e-05f, 0.00019245660223532468f, 7.064951932989061e-05f, 7.467519753845409e-05f, 0.00011773638107115403f, 0.00039166578790172935f, 0.00011397249181754887f, 0.00019508159311953932f, 0.00015509115473832935f, 0.00012317752407398075f, 0.00016232374764513224f, 6.662158557446674e-05f, 0.0004060462233610451f, 0.00016398965090047568f, 0.0001448343973606825f, 0.00019117457850370556f, 0.00010521586227696389f, 8.46948241814971e-05f, 0.00013679616677109152f, 0.0001636639062780887f, 0.00014872255269438028f, 5.439468804979697e-05f, 9.91136985248886e-05f, 2.974148628709372e-05f, 7.671949424548075e-05f, 0.00027184333885088563f, 5.9861718909814954e-05f, 0.0004169432504568249f, 0.00021455758542288095f, 9.86935556284152e-05f, 8.96180936251767e-05f, 0.0002557944681029767f, 0.00015245155373122543f, 0.00023236116976477206f, 0.0001912401639856398f, 0.00016282616707030684f, 7.494690362364054e-05f, 0.0002412276662653312f, 0.00046830117935314775f, 0.00019464567594695836f, 0.00014297469169832766f, 4.1067683923756704e-05f, 0.00015975936548784375f, 3.2348776585422456e-05f, 0.00016938232874963433f, 8.141422586049885e-05f, 0.00011358859774190933f, 0.000253156729741022f, 8.751336281420663e-05f, 4.125677878619172e-05f, 0.0002455154899507761f, 0.00026546427397988737f, 0.00016049308760557324f, 0.00023134857474360615f, 0.0001720364816719666f, 0.0002036122023127973f, 0.00013695879897568375f, 0.00017325373482890427f, 0.00024303981626871973f, 0.0001691479264991358f, 0.0001468198752263561f, 4.233154686517082e-05f, 0.00015050791262183338f, 0.00017373204173054546f, 8.771386637818068e-05f, 0.00012506195344030857f, 0.00022765762696508318f, 9.354258509119973e-05f, 0.00014726321387570351f, 0.00010721471335273236f, 9.297556971432641e-05f, 0.0002609704388305545f, 0.00014647161879111081f, 0.00012432764924596995f, 0.00019567259005270898f, 9.304027480538934e-05f, 7.115145126590505e-05f, 0.0001912934530992061f, 3.339192335261032e-05f, 0.0002830435987561941f, 0.00021519183064810932f, 3.053196633118205e-05f, 0.00018007951439358294f, 8.811280713416636e-05f, 0.00020695652347058058f, 0.0003221126098651439f, 0.00011771157005568966f, 0.00011615690164035186f, 0.00016986030095722526f, 6.0776190366595984e-05f, 6.611421122215688e-05f, 0.00011779867054428905f, 0.0003004447789862752f, 7.510527939302847e-05f, 0.00022775893739890307f, 0.0001472025760449469f, 0.00016764416068326682f, 0.00011522696149768308f, 0.00022330482897814363f, 0.000254082988249138f, 0.0001285545586142689f, 0.00013250418123789132f, 8.469439489999786e-05f, 2.808033059409354e-05f, 0.0001423435314791277f, 0.00013946443505119532f, 0.00015870705829001963f, 0.00022216855722945184f, 4.2944760934915394e-05f, 7.229512266349047e-05f, 0.0002463058917783201f, 7.973960600793362e-05f, 0.00011521843407535926f, 7.362651376752183e-05f, 0.00018892704974859953f, 0.00011049993918277323f, 0.00010859322355827317f, 0.00011279823957011104f, 7.074114546412602e-05f, 0.00016853156557772309f, 0.0001424280198989436f, 0.00014642956375610083f, 0.00013808465155307204f, 0.00014219367585610598f, 0.0001429431576980278f, 5.9063506341772154e-05f, 4.418254320626147e-05f, 8.982200233731419e-05f, 0.0001738650316838175f, 0.00039373402250930667f, 0.00012498715659603477f, 4.468179395189509e-05f, 0.0002000444510485977f, 0.00010960143845295534f, 0.00010500258940737695f, 9.514200792182237e-05f, 0.00017426046542823315f, 0.0038044387474656105f, 0.00017029583978001028f, 6.107736408011988e-05f, 8.974283264251426e-05f, 0.0002653369738254696f, 0.00011440538219176233f, 0.00022108871780801564f, 0.0002999490243382752f, 0.00028226524591445923f, 0.00020505633438006043f, 0.00033711668220348656f, 0.00015226622053887695f, 0.00015135899593587965f, 0.0001422425702912733f, 0.00022782919404562563f, 0.00020794440933968872f, 7.491033466067165e-05f, 0.0003040567971765995f, 5.237924415268935e-05f, 0.0001977532810997218f, 0.00020076909277122468f, 0.00028718376415781677f, 0.00022645789431408048f, 0.00013707629113923758f, 0.0004299479187466204f, 8.204561891034245e-05f, 0.0002006237191380933f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #159 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_61_weights_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 56,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.006004514172673225f, 0.006672288756817579f, 0.0075259641744196415f, 0.011787718161940575f, 0.010811428539454937f, 0.011334644630551338f, 0.008355858735740185f, 0.006288899574428797f, 0.016605764627456665f, 0.007369942497462034f, 0.01625916175544262f, 0.017795192077755928f, 0.00704930629581213f, 0.010395390912890434f, 0.021041570231318474f, 0.006864215712994337f, 0.008627905510365963f, 0.009934168308973312f, 0.01113484613597393f, 0.011730756610631943f, 0.011761287227272987f, 0.01130280178040266f, 0.009016536176204681f, 0.007169374264776707f, 0.01562911830842495f, 0.009375156834721565f, 0.00883254874497652f, 0.022451287135481834f, 0.009491574950516224f, 0.013603302650153637f, 0.013262934051454067f, 0.019815586507320404f, 0.008827341720461845f, 0.011305060237646103f, 0.008206081576645374f, 0.014803512021899223f, 0.005457728169858456f, 0.023198174312710762f, 0.005911354906857014f, 0.017302898690104485f, 0.008570591919124126f, 0.017877688631415367f, 0.004735969007015228f, 0.008470072411000729f, 0.012854507192969322f, 0.018218044191598892f, 0.006430936977267265f, 0.008358840830624104f, 0.010580864734947681f, 0.007810387294739485f, 0.012674505822360516f, 0.013405994512140751f, 0.014385713264346123f, 0.012731337919831276f, 0.010558334179222584f, 0.00998570118099451f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #160 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_61_bias_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 56,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.00010464948718436062f, 0.00011628777428995818f, 0.00013116603076923639f, 0.00020544187282212079f, 0.00018842665303964168f, 0.00019754550885409117f, 0.00014562981959898025f, 0.00010960589133901522f, 0.00028941305936314166f, 0.00012844681623391807f, 0.00028337229741737247f, 0.0003101429610978812f, 0.0001228586188517511f, 0.0001811757538234815f, 0.0003667223500087857f, 0.00011963277211179957f, 0.00015037118282634765f, 0.0001731373486109078f, 0.00019406332285143435f, 0.00020444912661332637f, 0.00020498123194556683f, 0.0001969905279111117f, 0.00015714441542513669f, 0.0001249512133654207f, 0.0002723915968090296f, 0.00016339462308678776f, 0.00015393779904115945f, 0.00039129157084971666f, 0.0001654236257309094f, 0.00023708473599981517f, 0.0002311526332050562f, 0.0003453553363215178f, 0.00015384705329779536f, 0.00019702989084180444f, 0.0001430194388376549f, 0.0002580025466158986f, 9.511984535492957e-05f, 0.0004043086664751172f, 0.0001030258645187132f, 0.0003015630354639143f, 0.00014937229570932686f, 0.00031158074853010476f, 8.254068961832672e-05f, 0.00014762039063498378f, 0.00022403437469620258f, 0.00031751260394230485f, 0.00011208138312213123f, 0.00014568179904017597f, 0.00018440827261656523f, 0.00013612309703603387f, 0.00022089722915552557f, 0.00023364595836028457f, 0.0002507209428586066f, 0.0002218877343693748f, 0.00018401560373604298f, 0.00017403547826688737f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #161 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_63_weights_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 336,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0006649402785114944f, 0.0007016371819190681f, 0.0006823450676165521f, 0.00038752934779040515f, 0.0010318420827388763f, 0.001696089399047196f, 0.0012214476009830832f, 0.0004119074728805572f, 0.000776986125856638f, 0.0006520307506434619f, 0.0007898996700532734f, 0.0005561304278671741f, 0.000725434860214591f, 0.0007528444984927773f, 0.000570882810279727f, 0.0007315912516787648f, 0.0007319690776057541f, 0.0005577296251431108f, 0.0006917889695614576f, 0.0007486868998967111f, 0.0006801199051551521f, 0.0007849588291719556f, 0.0006584518123418093f, 0.0004536891356110573f, 0.0008272877312265337f, 0.0010672510834410787f, 0.00041948974831029773f, 0.0007390722166746855f, 0.0004609463212545961f, 0.0006863683229312301f, 0.0008935623336583376f, 0.0007655819645151496f, 0.0008401668746955693f, 0.000964007806032896f, 0.0006039122818037868f, 0.0007070221472531557f, 0.0006653124000877142f, 0.0010880768531933427f, 0.0006344556459225714f, 0.0005510462215170264f, 0.0006192507571540773f, 0.0006442319136112928f, 0.000798747583758086f, 0.0007824029889889061f, 0.0007424806826747954f, 0.0005568764754571021f, 0.0008408682770095766f, 0.0009031985537149012f, 0.0007894692244008183f, 0.0006747341831214726f, 0.000268580304691568f, 0.0008293255814351141f, 0.0006266394047997892f, 0.0009253064636141062f, 0.0004643349093385041f, 0.0008749538101255894f, 0.0007463135989382863f, 0.0007135902997106314f, 0.0007052310975268483f, 0.0005086322780698538f, 0.0006267601856961846f, 0.000617068784777075f, 0.0005208669463172555f, 0.0005122447619214654f, 0.0009067363571375608f, 0.0006690305308438838f, 0.0007627886370755732f, 0.00032541804830543697f, 0.0008087654714472592f, 0.001101383357308805f, 0.0008099450496956706f, 0.0005581793375313282f, 0.0005641504540108144f, 0.0004897693870589137f, 0.0009046258055604994f, 0.0008677614969201386f, 0.0006496286951005459f, 0.0006111497059464455f, 0.0005427730502560735f, 0.0009012096561491489f, 0.0008865157142281532f, 0.0010000335751101375f, 0.0014974242076277733f, 0.0010252241045236588f, 0.0005524339503608644f, 0.0005018217489123344f, 0.0006486981292255223f, 0.0006214958266355097f, 0.0004932566662319005f, 0.0008064733119681478f, 0.0007182647241279483f, 0.0007632864871993661f, 0.0005514384247362614f, 0.000708598701748997f, 0.00079065264435485f, 0.0006732718902640045f, 0.0007120525115169585f, 0.0008881025132723153f, 0.000682998972479254f, 0.0005107492324896157f, 0.0005839763325639069f, 0.0006604923983104527f, 0.0010148006258532405f, 0.000852219935040921f, 0.0007370282546617091f, 0.0009174800361506641f, 0.0006176052265800536f, 0.000966439547482878f, 0.0007404366042464972f, 0.0008296563173644245f, 0.0003971608530264348f, 0.0007663253927603364f, 0.0005548582412302494f, 0.0006955345743335783f, 0.0005433241021819413f, 0.000794643652625382f, 0.0007300672004930675f, 0.0009290980524383485f, 0.0008731738198548555f, 0.0007790510426275432f, 0.0007122164824977517f, 0.0006496662390418351f, 0.0006310648750513792f, 0.0006980012403801084f, 0.0011033689370378852f, 0.0008455868810415268f, 0.001059798989444971f, 0.0008595704566687346f, 0.0007392800180241466f, 0.0005228102672845125f, 0.000836299208458513f, 0.0005055915680713952f, 0.000738660164643079f, 0.0005357160698622465f, 0.0003413863596506417f, 0.000769502017647028f, 0.0006515212589874864f, 0.0006481357850134373f, 0.0009932483080774546f, 0.0005974641535431147f, 0.0005079153925180435f, 0.0006440321449190378f, 0.0011980341514572501f, 0.0007443932117894292f, 0.0007645730511285365f, 0.0008629985968582332f, 0.0007776675629429519f, 0.0005717951571568847f, 0.0008317836909554899f, 0.0010040400084108114f, 0.00048461832921020687f, 0.0007265011081472039f, 0.0009660912328399718f, 0.0006104922504164279f, 0.000715815054718405f, 0.0005773053853772581f, 0.0005395496846176684f, 0.0007730299257673323f, 0.0008862834656611085f, 0.0006451529334299266f, 0.0005049113533459604f, 0.0008896293002180755f, 0.0010158185614272952f, 0.0005213829572312534f, 0.0006666505942121148f, 0.0004966082633472979f, 0.0012062093010172248f, 0.000834634352941066f, 0.0007221339619718492f, 0.0009476802661083639f, 0.0006136801675893366f, 0.0009166725794784725f, 0.0009257923229597509f, 0.00081584881991148f, 0.0005824693944305182f, 0.000789992802310735f, 0.0007081245421431959f, 0.0006237251218408346f, 0.0006963793421164155f, 0.0007158592343330383f, 0.0006192934815771878f, 0.0012883666204288602f, 0.0007644848083145916f, 0.0011048807064071298f, 0.0006988706300035119f, 0.001664515002630651f, 0.0006124029750935733f, 0.0005761178326793015f, 0.0005902366247028112f, 0.0007354816189035773f, 0.000516422267537564f, 0.0005960081471130252f, 0.0006981016485951841f, 0.0004966252599842846f, 0.0008808944257907569f, 0.0006731220637448132f, 0.0023691197857260704f, 0.0006153880385681987f, 0.0006232004961930215f, 0.0006243691314011812f, 0.0008073897333815694f, 0.0010309397475793958f, 0.0008432955364696681f, 0.0006954643176868558f, 0.0006461467128247023f, 0.001237629447132349f, 0.0008223797776736319f, 0.0005952493520453572f, 0.0005784654640592635f, 0.00047910751891322434f, 0.0007281992584466934f, 0.0005200597806833684f, 0.0004774031403940171f, 0.0006553486455231905f, 0.0005547984619624913f, 0.0005771591677330434f, 0.0008327788673341274f, 0.0006448639906011522f, 0.00036707971594296396f, 0.0013325391337275505f, 0.0006791321211494505f, 0.0008541470160707831f, 0.0006411985377781093f, 0.0006564127979800105f, 0.0007730436627753079f, 0.0007835862343199551f, 0.0006455513648688793f, 0.000928052410017699f, 0.0010667558526620269f, 0.0010185865685343742f, 0.0014743218198418617f, 0.0009656815673224628f, 0.0007533603347837925f, 0.0006726727588102221f, 0.0008569830097258091f, 0.0005153596284799278f, 0.0008041919791139662f, 0.000872890290338546f, 0.0008216716232709587f, 0.0005795761244371533f, 0.0006649067508988082f, 0.0007662393618375063f, 0.000752572319470346f, 0.0005786336841993034f, 0.0005732288700528443f, 0.0009738713270053267f, 0.0010180409299209714f, 0.0007430104305967689f, 0.00079192133853212f, 0.0010527493432164192f, 0.0007440099725499749f, 0.0009008998749777675f, 0.0007418413879349828f, 0.0009428259800188243f, 0.0005554371164180338f, 0.0006758459494449198f, 0.0005959613481536508f, 0.0006964536150917411f, 0.0007224155706353486f, 0.000700930948369205f, 0.0007383791962638497f, 0.0006590168341062963f, 0.0007068226113915443f, 0.0005311210406944156f, 0.0005404299590736628f, 0.0008274185238406062f, 0.0006979000754654408f, 0.0007115774787962437f, 0.00045073599903844297f, 0.0010233415523543954f, 0.0008540228009223938f, 0.000854324025567621f, 0.0006314110360108316f, 0.0009409774793311954f, 0.0006152119603939354f, 0.0006033758982084692f, 0.000726023456081748f, 0.0009334191563539207f, 0.000657502852845937f, 0.0008735554874874651f, 0.0005718721076846123f, 0.0005827210261486471f, 0.0009951452957466245f, 0.0011103133438155055f, 0.000857610662933439f, 0.0008587014162912965f, 0.0007484618108719587f, 0.0005938700633123517f, 0.0010011321865022182f, 0.0005589908105321229f, 0.0011637533316388726f, 0.000691585591994226f, 0.0006090041715651751f, 0.0004874364531133324f, 0.0008569139172323048f, 0.0006685436819680035f, 0.0005932959029451013f, 0.0007423193892464042f, 0.0007524426328018308f, 0.0005995317478664219f, 0.0010298789711669087f, 0.0005969707854092121f, 0.0013417761074379086f, 0.0011379476636648178f, 0.0008261798648163676f, 0.0005103235016576946f, 0.0008949760813266039f, 0.0006799369584769011f, 0.0005645584315061569f, 0.0008377734338864684f, 0.000847703660838306f, 0.000654683681204915f, 0.0007077237823978066f, 0.0007923412485979497f, 0.000655554817058146f, 0.0006246514385566115f, 0.0006450929795391858f, 0.0006529766251333058f, 0.000604666885919869f, 0.0006776911322958767f, 0.000966912426520139f, 0.00054059864487499f, 0.0006470021326094866f, 0.0009280264494009316f, 0.0014496106887236238f, 0.0006949928938411176f, 0.0004989245207980275f, 0.0007888039690442383f, 0.00099334423430264f, 0.0007020909106358886f, 0.0005758300540037453f, 0.0006072219694033265f, 0.00039745241519995034f, 0.0006620276835747063f, 0.0005242477636784315f, 0.0007953707245178521f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #162 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_63_bias_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 336,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(7.507495320169255e-05f, 7.921821088530123e-05f, 7.70400365581736e-05f, 4.3753927457146347e-05f, 0.00011649993393803015f, 0.000191496656043455f, 0.00013790730736218393f, 4.6506334911100566e-05f, 8.77254715305753e-05f, 7.361740426858887e-05f, 8.918347157305107e-05f, 6.278979708440602e-05f, 8.19050837890245e-05f, 8.499976684106514e-05f, 6.44554165774025e-05f, 8.260017057182267e-05f, 8.264282951131463e-05f, 6.29703572485596e-05f, 7.810629904270172e-05f, 8.453035115962848e-05f, 7.678880501771346e-05f, 8.862562390277162e-05f, 7.434237340930849e-05f, 5.1223683840362355e-05f, 9.340476390207186e-05f, 0.00012049778160871938f, 4.736240953207016e-05f, 8.344480738742277e-05f, 5.20430548931472e-05f, 7.749428186798468e-05f, 0.00010088748240377754f, 8.643788896733895e-05f, 9.485887858318165e-05f, 0.0001088411154341884f, 6.8184599513188e-05f, 7.982619717950001e-05f, 7.511697185691446e-05f, 0.00012284911645110697f, 7.163309055613354e-05f, 6.221576768439263e-05f, 6.991638656472787e-05f, 7.273688243003562e-05f, 9.018244600156322e-05f, 8.833705942379311e-05f, 8.382964006159455e-05f, 6.287403084570542e-05f, 9.493807010585442e-05f, 0.000101975463621784f, 8.913487545214593e-05f, 7.61807314120233e-05f, 3.0324008548632264e-05f, 9.363484423374757e-05f, 7.075060420902446e-05f, 0.00010447154636494815f, 5.2425642934395e-05f, 9.878649143502116e-05f, 8.426239219261333e-05f, 8.056777733145282e-05f, 7.962398376548663e-05f, 5.742703069699928e-05f, 7.076423935359344e-05f, 6.967002991586924e-05f, 5.8808382163988426e-05f, 5.7834895414998755e-05f, 0.00010237489914288744f, 7.553676550742239e-05f, 8.612250530859455e-05f, 3.674126128316857e-05f, 9.131350816460326e-05f, 0.00012435148528311402f, 9.144669456873089e-05f, 6.302112888079137e-05f, 6.369529728544876e-05f, 5.5297317885560915e-05f, 0.00010213660425506532f, 9.797444363357499e-05f, 7.334620750043541e-05f, 6.90017404849641e-05f, 6.128168752184138e-05f, 0.00010175090574193746f, 0.00010009188554249704f, 0.00011290860129520297f, 0.00016906639211811125f, 0.00011575272947084159f, 6.237244815565646e-05f, 5.665808930643834e-05f, 7.324113539652899e-05f, 7.01698663760908e-05f, 5.569104905589484e-05f, 9.105471690418199e-05f, 8.109553891699761e-05f, 8.617871208116412e-05f, 6.226004916243255e-05f, 8.000420348253101e-05f, 8.926848386181518e-05f, 7.601563265779987e-05f, 8.039415115490556e-05f, 0.00010027104144683108f, 7.711386570008472e-05f, 5.766604590462521e-05f, 6.593373836949468e-05f, 7.457276660716161e-05f, 0.00011457587243057787f, 9.621973003959283e-05f, 8.321403583977371e-05f, 0.00010358791041653603f, 6.973060226300731e-05f, 0.00010911567369475961f, 8.359885396203026e-05f, 9.367219172418118e-05f, 4.484137025428936e-05f, 8.652182441437617e-05f, 6.264616240514442e-05f, 7.85291995271109e-05f, 6.134390423540026e-05f, 8.971909119281918e-05f, 8.242810145020485e-05f, 0.00010489964188309386f, 9.85855222097598e-05f, 8.795860776444897e-05f, 8.041266846703365e-05f, 7.335044210776687e-05f, 7.125025877030566e-05f, 7.880769408075139e-05f, 0.000124575657537207f, 9.547082299832255e-05f, 0.00011965640442213044f, 9.704964031698182e-05f, 8.346827235072851e-05f, 5.9027792303822935e-05f, 9.442220471100882e-05f, 5.7083718274952844e-05f, 8.339828491443768e-05f, 6.048491923138499e-05f, 3.8544163544429466e-05f, 8.688047819305211e-05f, 7.355988054769114e-05f, 7.317764539038762e-05f, 0.00011214250844204798f, 6.745657447027043e-05f, 5.73460893065203e-05f, 7.271432696143165e-05f, 0.00013526382099371403f, 8.404557593166828e-05f, 8.63239765749313e-05f, 9.743669215822592e-05f, 8.780240750638768e-05f, 6.45584223093465e-05f, 9.391237836098298e-05f, 0.00011336094758007675f, 5.471573967952281e-05f, 8.202547178370878e-05f, 0.00010907634714385495f, 6.89275111653842e-05f, 8.081896521616727e-05f, 6.518055306514725e-05f, 6.091775503591634e-05f, 8.727879321668297e-05f, 0.00010006566299125552f, 7.284087041625753e-05f, 5.700692054233514e-05f, 0.00010044342343462631f, 0.00011469080345705152f, 5.8866644394584e-05f, 7.526805711677298e-05f, 5.6069460697472095e-05f, 0.00013618683442473412f, 9.423423034604639e-05f, 8.15323946881108e-05f, 0.00010699765698518604f, 6.928744551260024e-05f, 0.00010349674266763031f, 0.0001045264070853591f, 9.211325232172385e-05f, 6.576359737664461e-05f, 8.919398533180356e-05f, 7.995066698640585e-05f, 7.042156357783824e-05f, 7.862458005547523e-05f, 8.082394924713299e-05f, 6.992121052462608e-05f, 0.00014546279271598905f, 8.631400851299986e-05f, 0.00012474635150283575f, 7.890585402492434e-05f, 0.00018793174240272492f, 6.914324330864474e-05f, 6.504647171823308e-05f, 6.664055399596691e-05f, 8.303941285703331e-05f, 5.8306559367338195e-05f, 6.729218875989318e-05f, 7.881903002271429e-05f, 5.607138155028224e-05f, 9.945721831172705e-05f, 7.59987160563469e-05f, 0.0002674850111361593f, 6.948026566533372e-05f, 7.036233000690117e-05f, 7.049427949823439e-05f, 9.115818102145568e-05f, 0.00011639805597951636f, 9.521211904939264e-05f, 7.852126873331144e-05f, 7.295307295862585e-05f, 0.00013973431487102062f, 9.285063424613327e-05f, 6.720651435898617e-05f, 6.531153485411778e-05f, 5.409354344010353e-05f, 8.221720054280013e-05f, 5.871725079487078e-05f, 5.390110891312361e-05f, 7.399201422231272e-05f, 6.263941759243608e-05f, 6.516404391732067e-05f, 9.402474097441882e-05f, 7.280824502231553e-05f, 4.1445066017331555e-05f, 0.00015045008331071585f, 7.667727913940325e-05f, 9.643730300012976e-05f, 7.239439582917839e-05f, 7.411216211039573e-05f, 8.72803502716124e-05f, 8.847065328154713e-05f, 7.288585038622841e-05f, 0.00010478158219484612f, 0.00012044186587445438f, 0.00011500332038849592f, 0.0001664580195210874f, 0.00010903009388130158f, 8.505800360580906e-05f, 7.59479880798608e-05f, 9.675750334281474e-05f, 5.818657882628031e-05f, 9.079714072868228e-05f, 9.855351527221501e-05f, 9.2770678747911e-05f, 6.543692870764062e-05f, 7.507116970373318e-05f, 8.651211101096123e-05f, 8.496903319610283e-05f, 6.53305251034908e-05f, 6.472029781434685e-05f, 0.00010995475895470008f, 0.00011494171485537663f, 8.388944843318313e-05f, 8.941172563936561e-05f, 0.00011886046559084207f, 8.400230581173673e-05f, 0.00010171593021368608f, 8.375746256206185e-05f, 0.00010644958820194006f, 6.271152233239263e-05f, 7.63062562327832e-05f, 6.728689913870767e-05f, 7.863296195864677e-05f, 8.156419062288478e-05f, 7.91384736658074e-05f, 8.336656173923984e-05f, 7.440616900566965e-05f, 7.98036708147265e-05f, 5.996612162562087e-05f, 6.101714097894728e-05f, 9.341953409602866e-05f, 7.879627810325474e-05f, 8.034052007133141e-05f, 5.08902630826924e-05f, 0.00011554018419701606f, 9.642328222980723e-05f, 9.645729005569592e-05f, 7.128934521460906e-05f, 0.00010624088463373482f, 6.946038774913177e-05f, 6.812404171796516e-05f, 8.197154238587245e-05f, 0.00010538750939304009f, 7.423523493343964e-05f, 9.862861770670861e-05f, 6.456710980273783e-05f, 6.5792009991128e-05f, 0.0001123566908063367f, 0.0001253597147297114f, 9.682837116997689e-05f, 9.695151675259694e-05f, 8.450493623968214e-05f, 6.70507870381698e-05f, 0.00011303264182060957f, 6.311274773906916e-05f, 0.0001313933462370187f, 7.808333612047136e-05f, 6.87595020281151e-05f, 5.503392094396986e-05f, 9.674970351625234e-05f, 7.548179564764723e-05f, 6.698595825582743e-05f, 8.381142833968624e-05f, 8.495439396938309e-05f, 6.769001629436389e-05f, 0.00011627828644122928f, 6.740086973877624e-05f, 0.00015149297541938722f, 0.0001284797617699951f, 9.327968291472644e-05f, 5.7617977290647104e-05f, 0.0001010471023619175f, 7.67681558500044e-05f, 6.374136137310416e-05f, 9.458864951739088e-05f, 9.570982365403324e-05f, 7.391693361569196e-05f, 7.990541780600324e-05f, 8.945913577917963e-05f, 7.401529001072049e-05f, 7.052614819258451e-05f, 7.283409649971873e-05f, 7.372420077444986e-05f, 6.826980097685009e-05f, 7.651458872715011e-05f, 0.00010916906467173249f, 6.103618943598121e-05f, 7.304965401999652e-05f, 0.00010477864998392761f, 0.00016366802447009832f, 7.846803782740608e-05f, 5.633097680401988e-05f, 8.90597584657371e-05f, 0.0001121533423429355f, 7.92694409028627e-05f, 6.501398456748575e-05f, 6.855827814433724e-05f, 4.487429032451473e-05f, 7.474610902136192e-05f, 5.919009345234372e-05f, 8.98011785466224e-05f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #163 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_64_weights_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 336,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.007026305887848139f, 0.0036353529430925846f, 0.0043481579050421715f, 0.008057111874222755f, 0.003183589316904545f, 0.0027583667542785406f, 0.003780241822823882f, 0.007726652547717094f, 0.004968347959220409f, 0.005624198820441961f, 0.004172229673713446f, 0.0031316557433456182f, 0.004894586279988289f, 0.002193683059886098f, 0.0642755776643753f, 0.0040529025718569756f, 0.004861879162490368f, 0.005475187674164772f, 0.003523684572428465f, 0.003793739015236497f, 0.004936523269861937f, 0.003193435026332736f, 0.004381969105452299f, 0.011412026360630989f, 0.002301872009411454f, 0.005593509413301945f, 0.005368095822632313f, 0.0021228219848126173f, 0.005094510968774557f, 0.003938939888030291f, 0.003465060144662857f, 0.0058786217123270035f, 0.003438799176365137f, 0.0043287742882966995f, 0.0038222346920520067f, 0.006653220392763615f, 0.003924541641026735f, 0.002440341981127858f, 0.0033816045615822077f, 0.003662097966298461f, 0.0040904865600168705f, 0.010454904288053513f, 0.005960528273135424f, 0.0028180594090372324f, 0.004318201914429665f, 0.005548769608139992f, 0.004094368778169155f, 0.0051822783425450325f, 0.005441732704639435f, 0.006758775562047958f, 0.02370382845401764f, 0.004296198952943087f, 0.005581038072705269f, 0.0017924278508871794f, 0.0034576384350657463f, 0.0032016041222959757f, 0.0031843273900449276f, 0.006726375315338373f, 0.0030015420634299517f, 0.0043002404272556305f, 0.003664026502519846f, 0.006434028036892414f, 0.004881277680397034f, 0.0046693491749465466f, 0.0035531490575522184f, 0.004411450587213039f, 0.0056914035230875015f, 0.0163893885910511f, 0.002642915118485689f, 0.004250579979270697f, 0.003994683735072613f, 0.004687989596277475f, 0.004319107159972191f, 0.004353510681539774f, 0.0020532789640128613f, 0.01010042242705822f, 0.004713099449872971f, 0.00464484840631485f, 0.008694387041032314f, 0.004849503748118877f, 0.002649323083460331f, 0.0037551983259618282f, 0.006822052877396345f, 0.0034535008016973734f, 0.0042635295540094376f, 0.0030570910312235355f, 0.0038581560365855694f, 0.0031596976332366467f, 0.007940893992781639f, 0.0019640843383967876f, 0.008930223993957043f, 0.005371318198740482f, 0.005744413007050753f, 0.0029245803598314524f, 0.007753543555736542f, 0.006413228809833527f, 0.005709158722311258f, 0.0025956472381949425f, 0.002790553495287895f, 0.003386574564501643f, 0.004355667624622583f, 0.004137834068387747f, 0.003153326688334346f, 0.0047872671857476234f, 0.006252498831599951f, 0.004070739261806011f, 0.004481947980821133f, 0.003659911686554551f, 0.00381884234957397f, 0.0030711940489709377f, 0.006808190140873194f, 0.0028181946836411953f, 0.006303002592176199f, 0.004351021721959114f, 0.004787645302712917f, 0.0022095858585089445f, 0.003434413345530629f, 0.005142256151884794f, 0.003685382893308997f, 0.004150067456066608f, 0.005020297132432461f, 0.0045674992725253105f, 0.004001356195658445f, 0.0018157820450142026f, 0.0035077587235718966f, 0.002471582032740116f, 0.0031753829680383205f, 0.0023147377651184797f, 0.004188192542642355f, 0.0050335838459432125f, 0.0016429719980806112f, 0.0066215344704687595f, 0.007094143889844418f, 0.003244758350774646f, 0.017853837460279465f, 0.0021608907263725996f, 0.00404993025586009f, 0.004498165566474199f, 0.00237607816234231f, 0.005129439756274223f, 0.0048299371264874935f, 0.0023331379052251577f, 0.001702204579487443f, 0.0037458916194736958f, 0.003990980330854654f, 0.004722705576568842f, 0.002407197142019868f, 0.006313357502222061f, 0.0035650404170155525f, 0.005057231057435274f, 0.006367780268192291f, 0.005226158536970615f, 0.0018044125754386187f, 0.005949866957962513f, 0.004910432267934084f, 0.0026581089477986097f, 0.004516463726758957f, 0.00603885855525732f, 0.0037233096081763506f, 0.005230995826423168f, 0.005408903118222952f, 0.002575879218056798f, 0.0025459090247750282f, 0.006581171415746212f, 0.004278930835425854f, 0.0055853757075965405f, 0.0035550864413380623f, 0.003986450377851725f, 0.004394447430968285f, 0.0031657994259148836f, 0.0022170848678797483f, 0.0035492312163114548f, 0.004178149159997702f, 0.00456454511731863f, 0.004653145093470812f, 0.0027996054850518703f, 0.0059822057373821735f, 0.0037832113448530436f, 0.005278708413243294f, 0.00497553450986743f, 0.003997192718088627f, 0.0027048231568187475f, 0.003485300811007619f, 0.0035568445455282927f, 0.005490637384355068f, 0.0022080312483012676f, 0.005447689443826675f, 0.0027553376276046038f, 0.004064467269927263f, 0.007070546504110098f, 0.005796933546662331f, 0.005282799247652292f, 0.003939659800380468f, 0.006877190433442593f, 0.007609374821186066f, 0.00458519859239459f, 0.0039587500505149364f, 0.004205511417239904f, 0.0032176338136196136f, 0.0046674953773617744f, 0.004302313085645437f, 0.003316274145618081f, 0.005796187557280064f, 0.006121799349784851f, 0.004162074998021126f, 0.004304991569370031f, 0.001682663569226861f, 0.002282768953591585f, 0.006524393800646067f, 0.0061553241685032845f, 0.003055906854569912f, 0.004598713479936123f, 0.0055746715515851974f, 0.003909089602530003f, 0.004700998309999704f, 0.004975238814949989f, 0.003800296690315008f, 0.0055268011055886745f, 0.005057735368609428f, 0.0024294257164001465f, 0.0045027825981378555f, 0.0031977402977645397f, 0.004256733693182468f, 0.004438144154846668f, 0.00301182153634727f, 0.004923816304653883f, 0.0032859870698302984f, 0.002459344221279025f, 0.004615515936166048f, 0.0026306379586458206f, 0.003161703236401081f, 0.003403307870030403f, 0.003850178560242057f, 0.002680955920368433f, 0.003304394194856286f, 0.006883312948048115f, 0.0042607346549630165f, 0.006623898167163134f, 0.004177474416792393f, 0.004200772847980261f, 0.004677495453506708f, 0.004325640853494406f, 0.005212373100221157f, 0.003942255862057209f, 0.0048080445267260075f, 0.002576688537374139f, 0.002445887541398406f, 0.006772426888346672f, 0.002428667852655053f, 0.0035877772606909275f, 0.0024100197479128838f, 0.0025519386399537325f, 0.003891038242727518f, 0.00238648965023458f, 0.005907416809350252f, 0.0038133657071739435f, 0.009106242097914219f, 0.004252016544342041f, 0.0046784463338553905f, 0.0038370199035853148f, 0.004881618544459343f, 0.00405421108007431f, 0.0040916032157838345f, 0.0111374007537961f, 0.003552887123078108f, 0.0034982911311089993f, 0.005068909376859665f, 0.0053169019520282745f, 0.0059785619378089905f, 0.003508134977892041f, 0.0046171811409294605f, 0.006955884397029877f, 0.00230309646576643f, 0.004287064541131258f, 0.0033074328675866127f, 0.004417729564011097f, 0.005528740584850311f, 0.00434800935909152f, 0.005196909885853529f, 0.004455406218767166f, 0.0022807985078543425f, 0.004327484872192144f, 0.0046179043129086494f, 0.0038224111776798964f, 0.0036609165836125612f, 0.0027214838191866875f, 0.0030328838620334864f, 0.004453353583812714f, 0.005692995153367519f, 0.005361975636333227f, 0.0037250069435685873f, 0.005731720011681318f, 0.005036912392824888f, 0.005591175984591246f, 0.00796284805983305f, 0.004324917681515217f, 0.004602448083460331f, 0.004843942821025848f, 0.004163730423897505f, 0.003978013526648283f, 0.0036294772289693356f, 0.012953465804457664f, 0.0020756935700774193f, 0.004439596552401781f, 0.005450421944260597f, 0.004445825237780809f, 0.0041140904650092125f, 0.006975745782256126f, 0.003756680991500616f, 0.0064507536590099335f, 0.003711734199896455f, 0.005529663525521755f, 0.0020452069584280252f, 0.004133058711886406f, 0.0032451197039335966f, 0.00495003629475832f, 0.003195772645995021f, 0.004709722939878702f, 0.005082792602479458f, 0.0025306642055511475f, 0.0018099579028785229f, 0.005530160386115313f, 0.0053873322904109955f, 0.004230875987559557f, 0.0025703832507133484f, 0.003149328986182809f, 0.004499286878854036f, 0.006192033179104328f, 0.00451452424749732f, 0.004228617064654827f, 0.0023970953188836575f, 0.0023629760835319757f, 0.00640035979449749f, 0.006206463556736708f, 0.0059488750994205475f, 0.004185473080724478f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #164 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_64_bias_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 336,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.00016532484733033925f, 8.553771476726979e-05f, 0.00010230959742330015f, 0.00018957910651806742f, 7.490798452636227e-05f, 6.490274972748011e-05f, 8.894686470739543e-05f, 0.0001818035962060094f, 0.00011690230894600973f, 0.00013233409845270216f, 9.817010868573561e-05f, 7.368601654889062e-05f, 0.00011516673839651048f, 5.161607259651646e-05f, 0.0015123665798455477f, 9.536241850582883e-05f, 0.0001143971603596583f, 0.00012882794544566423f, 8.291022822959349e-05f, 8.926444570533931e-05f, 0.00011615348921623081f, 7.513965101679787e-05f, 0.00010310515790479258f, 0.0002685182844288647f, 5.416169369709678e-05f, 0.00013161198876332492f, 0.00012630813580472022f, 4.9948754167417064e-05f, 0.00011987084872089326f, 9.268093708669767e-05f, 8.153083035722375e-05f, 0.0001383205089950934f, 8.091292693279684e-05f, 0.00010185351129621267f, 8.993493247544393e-05f, 0.00015654636081308126f, 9.234216122422367e-05f, 5.741981294704601e-05f, 7.956716581247747e-05f, 8.616701234132051e-05f, 9.62467456702143e-05f, 0.0002459977404214442f, 0.00014024772099219263f, 6.630727875744924e-05f, 0.00010160475358134136f, 0.00013055928866378963f, 9.633808804210275e-05f, 0.0001219359619426541f, 0.00012804077414330095f, 0.000159030023496598f, 0.0005577371339313686f, 0.00010108703281730413f, 0.0001313185493927449f, 4.217477544443682e-05f, 8.135620009852573e-05f, 7.533185998909175e-05f, 7.492535223718733e-05f, 0.0001582676632096991f, 7.062451913952827e-05f, 0.00010118212958332151f, 8.621239248896018e-05f, 0.00015138890012167394f, 0.00011485359573271126f, 0.00010986704000970349f, 8.360351057490334e-05f, 0.00010379884042777121f, 0.00013391538232099265f, 0.0003856326802633703f, 6.218624184839427e-05f, 0.00010001364717027172f, 9.399255941389129e-05f, 0.00011030564201064408f, 0.00010162605030927807f, 0.00010243554424960166f, 4.831244586966932e-05f, 0.00023765700461808592f, 0.00011089645704487339f, 0.0001092905513360165f, 0.00020457382197491825f, 0.00011410596925998107f, 6.233701424207538e-05f, 8.835760672809556e-05f, 0.00016051888815127313f, 8.125884050969034e-05f, 0.00010031834244728088f, 7.193155761342496e-05f, 9.078014409169555e-05f, 7.434582948917523e-05f, 0.00018684456881601363f, 4.6213750465540215e-05f, 0.0002101229183608666f, 0.00012638396583497524f, 0.00013516265607904643f, 6.881365698063746e-05f, 0.000182436328032054f, 0.00015089950466062874f, 0.00013433315325528383f, 6.107405351940542e-05f, 6.566008232766762e-05f, 7.968411227921024e-05f, 0.0001024863013299182f, 9.736080392030999e-05f, 7.419592293445021e-05f, 0.00011264158092672005f, 0.0001471176219638437f, 9.578210301697254e-05f, 0.00010545759869273752f, 8.611557132098824e-05f, 8.985511522041634e-05f, 7.226339221233502e-05f, 0.0001601927069714293f, 6.631046562688425e-05f, 0.00014830594591330737f, 0.0001023769800667651f, 0.0001126504794228822f, 5.199025690671988e-05f, 8.080972474999726e-05f, 0.0001209942638524808f, 8.671489194966853e-05f, 9.76486480794847e-05f, 0.00011812464072136208f, 0.00010747057240223512f, 9.414956002729014e-05f, 4.272428486729041e-05f, 8.253550186054781e-05f, 5.8154873840976506e-05f, 7.471489516319707e-05f, 5.44644208275713e-05f, 9.854570816969499e-05f, 0.0001184372667921707f, 3.86581668863073e-05f, 0.00015580080798827112f, 0.00016692103235982358f, 7.634725625393912e-05f, 0.00042009030585177243f, 5.084449003334157e-05f, 9.52924820012413e-05f, 0.00010583919356577098f, 5.590772343566641e-05f, 0.00012069270451320335f, 0.00011364558304194361f, 5.489736213348806e-05f, 4.005187292932533e-05f, 8.81386295077391e-05f, 9.390542254550382e-05f, 0.000111122484668158f, 5.663993215421215e-05f, 0.00014854958862997591f, 8.388330752495676e-05f, 0.00011899367382284254f, 0.00014983012806624174f, 0.00012296844215597957f, 4.245676609571092e-05f, 0.00013999687507748604f, 0.0001155395875684917f, 6.254373874980956e-05f, 0.00010626973380567506f, 0.00014209079381544143f, 8.760728815104812e-05f, 0.00012308225268498063f, 0.00012726831482723355f, 6.060892337700352e-05f, 5.990374120301567e-05f, 0.00015485109179280698f, 0.0001006807287922129f, 0.00013142060197424144f, 8.36490944493562e-05f, 9.379883704241365e-05f, 0.00010339876462239772f, 7.44893986848183e-05f, 5.2166702516842633e-05f, 8.351132419193164e-05f, 9.830939234234393e-05f, 0.00010740106517914683f, 0.00010948577255476266f, 6.587307143490762e-05f, 0.0001407577801728621f, 8.901673572836444e-05f, 0.00012420490384101868f, 0.00011707140220096335f, 9.405159653397277e-05f, 6.364289583871141e-05f, 8.200707816286013e-05f, 8.369045826839283e-05f, 0.00012919146683998406f, 5.195367702981457e-05f, 0.00012818092363886535f, 6.483147444669157e-05f, 9.563452476868406e-05f, 0.00016636580403428525f, 0.0001363984338240698f, 0.00012430116476025432f, 9.26978827919811e-05f, 0.00016181624960154295f, 0.00017904411652125418f, 0.00010788702638819814f, 9.314706403529271e-05f, 9.895321272779256e-05f, 7.57090310798958e-05f, 0.00010982342064380646f, 0.00010123090032720938f, 7.802998152328655e-05f, 0.0001363808842143044f, 0.00014404233661480248f, 9.793118078960106e-05f, 0.00010129392467206344f, 3.9592083339812234e-05f, 5.371221050154418e-05f, 0.00015351515321526676f, 0.0001448311668355018f, 7.190369069576263e-05f, 0.00010820502211572602f, 0.0001311687519773841f, 9.197858162224293e-05f, 0.00011061172699555755f, 0.00011706444638548419f, 8.94187469384633e-05f, 0.00013004237553104758f, 0.00011900554090971127f, 5.7162960729328915e-05f, 0.00010594783088890836f, 7.524094689870253e-05f, 0.00010015843872679397f, 0.00010442692291690037f, 7.086639379849657e-05f, 0.00011585450556594878f, 7.731734513072297e-05f, 5.786692418041639e-05f, 0.00010860037582460791f, 6.189736450323835e-05f, 7.439302135026082e-05f, 8.007783617358655e-05f, 9.059243893716484e-05f, 6.308131560217589e-05f, 7.775045378366485e-05f, 0.00016196031356230378f, 0.0001002525823423639f, 0.00015585642540827394f, 9.829351620282978e-05f, 9.884171595331281e-05f, 0.00011005871783709154f, 0.00010177978401770815f, 0.00012264407996553928f, 9.275896445615217e-05f, 0.00011313045979477465f, 6.0627968196058646e-05f, 5.755029633291997e-05f, 0.00015935122792143375f, 5.714512735721655e-05f, 8.441828686045483e-05f, 5.670634709531441e-05f, 6.004561510053463e-05f, 9.155384032055736e-05f, 5.6152697652578354e-05f, 0.00013899804616812617f, 8.972625073511153e-05f, 0.00021426452440209687f, 0.00010004745126934722f, 0.00011008109140675515f, 9.02828251128085e-05f, 0.00011486161383800209f, 9.539320308249444e-05f, 9.627301915315911e-05f, 0.0002620565064717084f, 8.359734783880413e-05f, 8.231273386627436e-05f, 0.00011926845763809979f, 0.0001251035719178617f, 0.0001406720548402518f, 8.254435670096427e-05f, 0.00010863955685636029f, 0.0001636678643990308f, 5.4190506489248946e-05f, 0.00010087210830533877f, 7.782195461913943e-05f, 0.0001039465787471272f, 0.00013008801033720374f, 0.00010230610496364534f, 0.00012228023842908442f, 0.00010483308869879693f, 5.36658480996266e-05f, 0.00010182317782891914f, 0.00010865657532121986f, 8.993908704724163e-05f, 8.613921818323433e-05f, 6.4034917159006e-05f, 7.136197382351384e-05f, 0.00010478479089215398f, 0.00013395282439887524f, 0.0001261641300516203f, 8.764722588239238e-05f, 0.00013486400712281466f, 0.00011851558519992977f, 0.0001315570843871683f, 0.0001873611327027902f, 0.00010176277282880619f, 0.00010829290113179013f, 0.0001139751257142052f, 9.797012899070978e-05f, 9.360031981486827e-05f, 8.539946429664269e-05f, 0.0003047874488402158f, 4.883985093329102e-05f, 0.00010446109808981419f, 0.0001282452285522595f, 0.00010460765770403668f, 9.680213406682014e-05f, 0.0001641351991565898f, 8.839249494485557e-05f, 0.0001517824421171099f, 8.73349272296764e-05f, 0.0001301097363466397f, 4.812251791008748e-05f, 9.724844130687416e-05f, 7.63557618483901e-05f, 0.00011647144128801301f, 7.519464998040348e-05f, 0.00011081701086368412f, 0.00011959511903114617f, 5.9545040130615234e-05f, 4.258724584360607e-05f, 0.00013012142153456807f, 0.00012676075857598335f, 9.955002315109596e-05f, 6.047960778232664e-05f, 7.410185935441405e-05f, 0.00010586557618808001f, 0.0001456948957638815f, 0.0001062240989995189f, 9.949687228072435e-05f, 5.640224480885081e-05f, 5.559943747357465e-05f, 0.00015059670840855688f, 0.000146034435601905f, 0.00013997353380545974f, 9.848172339843586e-05f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #165 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_65_weights_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 112,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0051702396012842655f, 0.003933512140065432f, 0.006776363123208284f, 0.00791235826909542f, 0.007383089512586594f, 0.0062961033545434475f, 0.004107504151761532f, 0.004586101043969393f, 0.004398425109684467f, 0.006394623778760433f, 0.003803581465035677f, 0.00664782989770174f, 0.005358477123081684f, 0.00557493744418025f, 0.004056703764945269f, 0.0032515048515051603f, 0.0045471033081412315f, 0.006316397804766893f, 0.006214596796780825f, 0.005046133417636156f, 0.004489897284656763f, 0.00384509121067822f, 0.005561631638556719f, 0.004232609178870916f, 0.006142400670796633f, 0.004175421316176653f, 0.005545170046389103f, 0.004456901457160711f, 0.0038304426707327366f, 0.007476408965885639f, 0.0069056726060807705f, 0.004357399884611368f, 0.004407310858368874f, 0.004731259774416685f, 0.006068896967917681f, 0.006464445497840643f, 0.005846076179295778f, 0.006531501654535532f, 0.003145240480080247f, 0.00597647437825799f, 0.005938253365457058f, 0.004549773409962654f, 0.0057222372852265835f, 0.0038655553944408894f, 0.005639679729938507f, 0.005893393885344267f, 0.005410644691437483f, 0.004650223534554243f, 0.005786540452390909f, 0.0056258030235767365f, 0.004007744137197733f, 0.006442468147724867f, 0.003833305323496461f, 0.006970121990889311f, 0.006646773312240839f, 0.00771242706105113f, 0.005093471147119999f, 0.005755057092756033f, 0.005167159717530012f, 0.005395140964537859f, 0.0066772340796887875f, 0.00526269618421793f, 0.003828224493190646f, 0.004740943666547537f, 0.006213617045432329f, 0.007586998865008354f, 0.005445805378258228f, 0.006510192062705755f, 0.005512433126568794f, 0.005922163370996714f, 0.005875071045011282f, 0.005139862187206745f, 0.006534202955663204f, 0.005981749389320612f, 0.0038464840035885572f, 0.005004631355404854f, 0.004425148479640484f, 0.005022104829549789f, 0.006523207761347294f, 0.00555387744680047f, 0.006832383573055267f, 0.006475015077739954f, 0.004725515376776457f, 0.0049006883054971695f, 0.006334464997053146f, 0.004047265741974115f, 0.0035896101035177708f, 0.00591857498511672f, 0.004558531567454338f, 0.005309073254466057f, 0.006017567124217749f, 0.006089219357818365f, 0.0038427147082984447f, 0.00513308122754097f, 0.0058120680041611195f, 0.004907998722046614f, 0.0032660828437656164f, 0.006738620810210705f, 0.004471802618354559f, 0.004527008160948753f, 0.005991404876112938f, 0.005259570199996233f, 0.005875489674508572f, 0.0032369818072766066f, 0.004783761687576771f, 0.005976741202175617f, 0.005063795018941164f, 0.005210614297538996f, 0.0038403228390961885f, 0.005555823910981417f, 0.006063421722501516f, 0.004106469918042421f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #166 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_65_bias_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 112,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.00012165270163677633f, 9.255322947865352e-05f, 0.00015944383630994707f, 0.0001861731434473768f, 0.00017371975991409272f, 0.0001481436047470197f, 9.664715616963804e-05f, 0.00010790826490847394f, 0.00010349235526518896f, 0.00015046173939481378f, 8.949603943619877e-05f, 0.00015641952631995082f, 0.00012608180986717343f, 0.00013117499474901706f, 9.545185457682237e-05f, 7.650599582120776e-05f, 0.00010699066478991881f, 0.00014862112584523857f, 0.00014622580783907324f, 0.00011873255425598472f, 0.00010564464173512533f, 9.04727348824963e-05f, 0.00013086192484479398f, 9.959080489352345e-05f, 0.0001445270754629746f, 9.824521112022921e-05f, 0.00013047459651716053f, 0.00010486827522981912f, 9.012806549435481e-05f, 0.00017591551295481622f, 0.00016248642350547016f, 0.00010252706124447286f, 0.00010370143718319014f, 0.00011132375948363915f, 0.0001427975803380832f, 0.0001521046069683507f, 0.00013755474356003106f, 0.00015368239837698638f, 7.400565664283931e-05f, 0.00014062292757444084f, 0.00013972360466141254f, 0.00010705349268391728f, 0.0001346408826066181f, 9.095424320548773e-05f, 0.00013269834744278342f, 0.00013866809604223818f, 0.00012730929302051663f, 0.00010941702930722386f, 0.0001361538888886571f, 0.00013237183156888932f, 9.429986675968394e-05f, 0.00015158749010879546f, 9.019541903398931e-05f, 0.00016400287859141827f, 0.00015639467164874077f, 0.0001814688730519265f, 0.00011984637967543676f, 0.00013541310909204185f, 0.00012158023309893906f, 0.0001269444910576567f, 0.00015711139712948352f, 0.00012382815475575626f, 9.007587505038828e-05f, 0.00011155162064824253f, 0.0001462027576053515f, 0.00017851762822829187f, 0.00012813659850507975f, 0.00015318099758587778f, 0.00012970430543646216f, 0.00013934502203483135f, 0.00013823696644976735f, 0.00012093793338863179f, 0.0001537459611427039f, 0.00014074704085942358f, 9.050550579559058e-05f, 0.00011775603343266994f, 0.0001041211435222067f, 0.0001181671759695746f, 0.00015348724264185876f, 0.0001306794729316607f, 0.00016076196334324777f, 0.0001523532991996035f, 0.00011118860129499808f, 0.00011531031486811116f, 0.00014904623094480485f, 9.522978507447988e-05f, 8.446141873719171e-05f, 0.00013926059182267636f, 0.0001072595696314238f, 0.00012491937377490103f, 0.00014158981502987444f, 0.00014327575627248734f, 9.04168191482313e-05f, 0.00012077838619006798f, 0.0001367545482935384f, 0.00011548232578206807f, 7.684900629101321e-05f, 0.00015855579113122076f, 0.00010521888907533139f, 0.00010651784396031871f, 0.00014097423991188407f, 0.00012375459482427686f, 0.00013824681809637696f, 7.616428047185764e-05f, 0.00011255910067120567f, 0.0001406292140018195f, 0.00011914812057511881f, 0.0001226026943186298f, 9.036053961608559e-05f, 0.00013072526780888438f, 0.00014266875223256648f, 9.662282536737621e-05f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #167 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_66_weights_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1280,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0029621743597090244f, 0.0033644703216850758f, 0.0049153524450957775f, 0.0032927750144153833f, 0.003900615032762289f, 0.004424807149916887f, 0.0034887518268078566f, 0.0034346419852226973f, 0.0041217198595404625f, 0.0035716199781745672f, 0.004293471109122038f, 0.003848699387162924f, 0.0034123845398426056f, 0.0036328909918665886f, 0.004890523850917816f, 0.005025461781769991f, 0.00393777946010232f, 0.003102334449067712f, 0.0032731476239860058f, 0.003895457601174712f, 0.0036590408999472857f, 0.0038306897040456533f, 0.0036488703917711973f, 0.004305759444832802f, 0.0039032879285514355f, 0.003702098038047552f, 0.003837374271824956f, 0.0033054640516638756f, 0.004221534356474876f, 0.0032322590705007315f, 0.0032622944563627243f, 0.003234345465898514f, 0.0043456945568323135f, 0.003198967082425952f, 0.0036099764984101057f, 0.0040717413648962975f, 0.0031526193488389254f, 0.0033254511654376984f, 0.004248072858899832f, 0.00271798949688673f, 0.003532933536916971f, 0.0033612586557865143f, 0.003316854126751423f, 0.004583351779729128f, 0.00375380739569664f, 0.003646325320005417f, 0.0033430755138397217f, 0.003338437993079424f, 0.00485564349219203f, 0.0035840366035699844f, 0.004379378631711006f, 0.00479535385966301f, 0.003416685853153467f, 0.003651074366644025f, 0.0041238171979784966f, 0.0044944193214178085f, 0.005938307382166386f, 0.004499021917581558f, 0.004957282915711403f, 0.003938966430723667f, 0.005099035333842039f, 0.003849896602332592f, 0.0031181268859654665f, 0.0032906183041632175f, 0.0036717732436954975f, 0.005371137987822294f, 0.004111108835786581f, 0.003390368539839983f, 0.0034574829041957855f, 0.0032442992087453604f, 0.0052483235485851765f, 0.003320713760331273f, 0.0047577545046806335f, 0.0037853147368878126f, 0.003660373855382204f, 0.004052985459566116f, 0.0034788409247994423f, 0.0037654766347259283f, 0.0035777667071670294f, 0.00322128226980567f, 0.004163912031799555f, 0.004439814481884241f, 0.0028503912035375834f, 0.0036186901852488518f, 0.004053816664963961f, 0.0041634258814156055f, 0.004628990311175585f, 0.0036114307586103678f, 0.004538137931376696f, 0.0034262577537447214f, 0.003470691153779626f, 0.004572177305817604f, 0.003930628765374422f, 0.0034403798636049032f, 0.004216828383505344f, 0.004287114832550287f, 0.003045364050194621f, 0.002938083605840802f, 0.00401325523853302f, 0.0033415695652365685f, 0.004316762089729309f, 0.0037072384729981422f, 0.0034710951149463654f, 0.003110656049102545f, 0.004544608294963837f, 0.0031723687425255775f, 0.004046203568577766f, 0.005045578349381685f, 0.004894716665148735f, 0.003499529790133238f, 0.003774539800360799f, 0.003427438670769334f, 0.003892133943736553f, 0.0035728097427636385f, 0.004251927603036165f, 0.00433994410559535f, 0.003647909965366125f, 0.003345117438584566f, 0.0036913298536092043f, 0.003138078609481454f, 0.0027960767038166523f, 0.0038398378528654575f, 0.005039792507886887f, 0.004316587932407856f, 0.004293434787541628f, 0.003208696376532316f, 0.004374955780804157f, 0.004422201309353113f, 0.003224818268790841f, 0.003907157573848963f, 0.003477038349956274f, 0.002922841813415289f, 0.0035453643649816513f, 0.003880483331158757f, 0.003936633002012968f, 0.003302880795672536f, 0.004205590113997459f, 0.0035609877668321133f, 0.00409786868840456f, 0.00515262596309185f, 0.0027498393319547176f, 0.004421652294695377f, 0.003410582197830081f, 0.0035203061997890472f, 0.0032483094837516546f, 0.0033308679703623056f, 0.0029898423235863447f, 0.004326171241700649f, 0.0034060287289321423f, 0.004507994279265404f, 0.0052445512264966965f, 0.004290164913982153f, 0.003649138379842043f, 0.0035159692633897066f, 0.0038118178490549326f, 0.004307774361222982f, 0.00383915682323277f, 0.003390311496332288f, 0.0030954566318541765f, 0.006119788624346256f, 0.003342142328619957f, 0.004260276444256306f, 0.0036841370165348053f, 0.0033493991941213608f, 0.0031952124554663897f, 0.0037867750506848097f, 0.00400565518066287f, 0.0027008422184735537f, 0.003619050607085228f, 0.003319782204926014f, 0.004175545182079077f, 0.003344203345477581f, 0.003935686312615871f, 0.003371675731614232f, 0.004278067499399185f, 0.0033198276069015265f, 0.00410841079428792f, 0.0036911156494170427f, 0.004427166655659676f, 0.004071194678544998f, 0.0041862186044454575f, 0.003799168858677149f, 0.004343350883573294f, 0.0032892145682126284f, 0.004136508796364069f, 0.003958592191338539f, 0.004303037654608488f, 0.0031933810096234083f, 0.003676677355542779f, 0.003103886963799596f, 0.004584965296089649f, 0.004086196422576904f, 0.0030248654074966908f, 0.0035784943029284477f, 0.004008707590401173f, 0.004072778392583132f, 0.003423432819545269f, 0.0040171267464756966f, 0.0034773284569382668f, 0.004585679620504379f, 0.0035897057969123125f, 0.003431397955864668f, 0.003146434435620904f, 0.0029587838798761368f, 0.00477429386228323f, 0.004196573980152607f, 0.003918379079550505f, 0.0035362106282263994f, 0.003449812764301896f, 0.0038263655733317137f, 0.003309657797217369f, 0.003911591600626707f, 0.003494484815746546f, 0.004628441762179136f, 0.003941776230931282f, 0.0038159871473908424f, 0.003246939042583108f, 0.0040299599058926105f, 0.0033057990949600935f, 0.004657807294279337f, 0.003644191659986973f, 0.0031818062998354435f, 0.0030362787656486034f, 0.0035908606369048357f, 0.0042848060838878155f, 0.00393308699131012f, 0.004263146314769983f, 0.005063691642135382f, 0.0036539132706820965f, 0.00630768109112978f, 0.0036029089242219925f, 0.003445018781349063f, 0.003987973555922508f, 0.003754357108846307f, 0.003475191304460168f, 0.004207054618746042f, 0.00454884534701705f, 0.004790264647454023f, 0.005521835293620825f, 0.0038377537857741117f, 0.00419484032317996f, 0.004195132292807102f, 0.004448089748620987f, 0.00633424473926425f, 0.0032034090254455805f, 0.003082899609580636f, 0.0038549788296222687f, 0.003230325412005186f, 0.0037528942339122295f, 0.004231833852827549f, 0.004594755824655294f, 0.004471823573112488f, 0.0039125001057982445f, 0.0038791170809417963f, 0.004584516864269972f, 0.003646549768745899f, 0.004184157121926546f, 0.0036161956377327442f, 0.0032765676733106375f, 0.004271447192877531f, 0.004238890949636698f, 0.003505409462377429f, 0.0035445503890514374f, 0.003352345898747444f, 0.004001225344836712f, 0.0038233718369156122f, 0.004652536939829588f, 0.003743969602510333f, 0.004537845496088266f, 0.0041128601878881454f, 0.0035382285714149475f, 0.004026023205369711f, 0.003350239945575595f, 0.004091943614184856f, 0.0038305821362882853f, 0.003431562567129731f, 0.006354889366775751f, 0.0038771696854382753f, 0.0031766952015459538f, 0.006071371957659721f, 0.004741188138723373f, 0.003523157676681876f, 0.0031935949809849262f, 0.0038386699743568897f, 0.003979406785219908f, 0.004884691443294287f, 0.003888314589858055f, 0.003666393691673875f, 0.0034294205252081156f, 0.003630507504567504f, 0.005184345878660679f, 0.00438412232324481f, 0.0031753932125866413f, 0.0032344693318009377f, 0.003810434602200985f, 0.0038565322756767273f, 0.0044325548224151134f, 0.005660794209688902f, 0.004007241223007441f, 0.0034891427494585514f, 0.00391959585249424f, 0.0037625269033014774f, 0.0032248455099761486f, 0.0034492583945393562f, 0.0030559138394892216f, 0.004196772351861f, 0.0031696599908173084f, 0.0030325460247695446f, 0.0032967571169137955f, 0.004571749363094568f, 0.004812916275113821f, 0.0037127721589058638f, 0.003925019409507513f, 0.004623056389391422f, 0.003556302050128579f, 0.004301831591874361f, 0.0039612106047570705f, 0.004419439006596804f, 0.00391819141805172f, 0.0037713053170591593f, 0.004642801824957132f, 0.00438147597014904f, 0.004088780842721462f, 0.0034643267281353474f, 0.003346133977174759f, 0.0036364933475852013f, 0.0034638133365660906f, 0.00327310967259109f, 0.003134253667667508f, 0.00333037949167192f, 0.0030644931830465794f, 0.003174717305228114f, 0.005083031021058559f, 0.0034763580188155174f, 0.0040988498367369175f, 0.0035751487594097853f, 0.004742742981761694f, 0.004511799197643995f, 0.0035490624140948057f, 0.0038101691752672195f, 0.00406529288738966f, 0.003094490384683013f, 0.003443113761022687f, 0.003168839029967785f, 0.0036394898779690266f, 0.0037023858167231083f, 0.003490738570690155f, 0.0036068614572286606f, 0.003930498380213976f, 0.0032765199430286884f, 0.0047698840498924255f, 0.0046587735414505005f, 0.005383722484111786f, 0.004109837580472231f, 0.005526264198124409f, 0.003496570745483041f, 0.0032788091339170933f, 0.003133246907964349f, 0.004803256597369909f, 0.00329365162178874f, 0.0035719391889870167f, 0.004280454479157925f, 0.00372205744497478f, 0.0032016735058277845f, 0.0037282356061041355f, 0.0042003183625638485f, 0.003306593047454953f, 0.0032957373186945915f, 0.004800454247742891f, 0.003335255663841963f, 0.004352608695626259f, 0.0032475918997079134f, 0.0034948475658893585f, 0.004117960575968027f, 0.0038880847860127687f, 0.005015515256673098f, 0.003927293233573437f, 0.004906860180199146f, 0.002877302933484316f, 0.003215562552213669f, 0.004144994542002678f, 0.003147804643958807f, 0.003283244324848056f, 0.004246704280376434f, 0.00335312751121819f, 0.004042781889438629f, 0.0038578903768211603f, 0.0044078705832362175f, 0.004800190217792988f, 0.0034336342941969633f, 0.003342418698593974f, 0.0041420478373765945f, 0.0031723130960017443f, 0.004348712041974068f, 0.004520172718912363f, 0.003839158918708563f, 0.0038421638309955597f, 0.003500158665701747f, 0.004192360211163759f, 0.0037458851002156734f, 0.0033213256392627954f, 0.003410576144233346f, 0.00416570482775569f, 0.0034403603058308363f, 0.0036236036103218794f, 0.0038853243459016085f, 0.004353208001703024f, 0.00396908400580287f, 0.006485541816800833f, 0.004381355829536915f, 0.004019616171717644f, 0.004383882973343134f, 0.0033321583177894354f, 0.0038412604480981827f, 0.003513435833156109f, 0.00473377900198102f, 0.004256685264408588f, 0.004033641889691353f, 0.004690112080425024f, 0.0034506202209740877f, 0.0041711097583174706f, 0.004795975983142853f, 0.004205739125609398f, 0.0034325227607041597f, 0.0032271621748805046f, 0.003925822675228119f, 0.00332421762868762f, 0.003914021421223879f, 0.003951767459511757f, 0.003582450794056058f, 0.0035022131633013487f, 0.004267056938260794f, 0.0037143072113394737f, 0.004206966143101454f, 0.003702020039781928f, 0.0035629388876259327f, 0.0036350504960864782f, 0.0041279555298388f, 0.0037537405733019114f, 0.0036773751489818096f, 0.003952719271183014f, 0.0033756510820239782f, 0.0048948414623737335f, 0.0032220634166151285f, 0.004089789930731058f, 0.003362115705385804f, 0.003610435873270035f, 0.003887295024469495f, 0.00531136617064476f, 0.004615883342921734f, 0.0031316163949668407f, 0.004317651502788067f, 0.005071340128779411f, 0.0035983577836304903f, 0.00377773423679173f, 0.0039926921017467976f, 0.003786012064665556f, 0.003109527286142111f, 0.003410974284633994f, 0.00290185259655118f, 0.0066179269924759865f, 0.0049520572647452354f, 0.0029818916227668524f, 0.0032399462070316076f, 0.004219433758407831f, 0.0035106795839965343f, 0.0034611383453011513f, 0.0041664717718958855f, 0.004967675544321537f, 0.003332019317895174f, 0.0036424859426915646f, 0.004190773703157902f, 0.0031857311259955168f, 0.0033744312822818756f, 0.0034841797314584255f, 0.004697736352682114f, 0.0032495942432433367f, 0.004388927482068539f, 0.004178712144494057f, 0.004058487247675657f, 0.004560193512588739f, 0.003754423698410392f, 0.002611876465380192f, 0.004303581081330776f, 0.005203274544328451f, 0.0033818844240158796f, 0.004607797134667635f, 0.004298161715269089f, 0.00304318661801517f, 0.0034339630510658026f, 0.0033718817867338657f, 0.004272162914276123f, 0.0034826400224119425f, 0.00353202479891479f, 0.004304851870983839f, 0.0035449028946459293f, 0.0043202973902225494f, 0.004805420525372028f, 0.003576156683266163f, 0.003997931722551584f, 0.003388427197933197f, 0.005083013325929642f, 0.0034545923117548227f, 0.003727123374119401f, 0.0035533630289137363f, 0.004298783373087645f, 0.004713017959147692f, 0.00373062607832253f, 0.003512405790388584f, 0.00281945476308465f, 0.0032879288773983717f, 0.003462927881628275f, 0.0032281847670674324f, 0.0045919413678348064f, 0.0033374351914972067f, 0.004353893455117941f, 0.004066035617142916f, 0.004484729375690222f, 0.004393632523715496f, 0.003506285836920142f, 0.0033648458775132895f, 0.004113911651074886f, 0.005349946673959494f, 0.0041417526081204414f, 0.003848234424367547f, 0.003397733438760042f, 0.0046790288761258125f, 0.004853780847042799f, 0.0046649519354105f, 0.0032742787152528763f, 0.0063657257705926895f, 0.003535504685714841f, 0.003633310319855809f, 0.0030023346189409494f, 0.004154188092797995f, 0.00448373518884182f, 0.0036109385546296835f, 0.0033877005334943533f, 0.0038082946557551622f, 0.0032024437095969915f, 0.0037793503142893314f, 0.00530313840135932f, 0.004779394716024399f, 0.0031299875117838383f, 0.003210383001714945f, 0.003936838358640671f, 0.004272839054465294f, 0.0037714773789048195f, 0.00294130714610219f, 0.004011011682450771f, 0.005140672437846661f, 0.00633307034149766f, 0.00379301980137825f, 0.003450100077316165f, 0.0038420299533754587f, 0.0032766994554549456f, 0.003919941373169422f, 0.003880188101902604f, 0.004928578622639179f, 0.003675773274153471f, 0.004200443159788847f, 0.00394864659756422f, 0.004022696055471897f, 0.0035731950774788857f, 0.004084239713847637f, 0.0036705033853650093f, 0.003865630365908146f, 0.004764966666698456f, 0.003472303505986929f, 0.0031003281474113464f, 0.004549398086965084f, 0.004818455316126347f, 0.004989089909940958f, 0.0034518444444984198f, 0.004079070873558521f, 0.0035510207526385784f, 0.003354366635903716f, 0.0033248907420784235f, 0.003467963309958577f, 0.0029625638853758574f, 0.003761970903724432f, 0.004135383293032646f, 0.003659704001620412f, 0.004776648711413145f, 0.005870512221008539f, 0.004650127608329058f, 0.00322336726821959f, 0.004082805477082729f, 0.0051069194450974464f, 0.0037863198667764664f, 0.0037340756971389055f, 0.004183941055089235f, 0.004042982589453459f, 0.004448819439858198f, 0.0044803014025092125f, 0.003756837220862508f, 0.0035036804620176554f, 0.0031629009172320366f, 0.002847203053534031f, 0.003151366952806711f, 0.0037002863828092813f, 0.003421926172450185f, 0.005089926067739725f, 0.003592798486351967f, 0.00421297037974f, 0.00397491455078125f, 0.003584706224501133f, 0.004571598023176193f, 0.003927632700651884f, 0.0032710356172174215f, 0.005061660427600145f, 0.004301175940781832f, 0.0032074914779514074f, 0.00376138836145401f, 0.003455533180385828f, 0.004005294293165207f, 0.004653532523661852f, 0.004386376589536667f, 0.004143550992012024f, 0.003762919921427965f, 0.004184543155133724f, 0.004391332156956196f, 0.004077984020113945f, 0.0032656381372362375f, 0.005854274611920118f, 0.004045072477310896f, 0.003897598944604397f, 0.0029065634589642286f, 0.004519837908446789f, 0.003582653822377324f, 0.004148488398641348f, 0.003747234819456935f, 0.0038128106389194727f, 0.003723974572494626f, 0.004262762609869242f, 0.003855583257973194f, 0.004367745481431484f, 0.003120989305898547f, 0.003983011469244957f, 0.0034893120173364878f, 0.005846032407134771f, 0.0039939284324646f, 0.0039042325224727392f, 0.003287811763584614f, 0.004331226926296949f, 0.004535997286438942f, 0.0038230870850384235f, 0.0032234271056950092f, 0.002940013073384762f, 0.004420932848006487f, 0.0033648849930614233f, 0.003510913113132119f, 0.005485952366143465f, 0.002958085387945175f, 0.003923716489225626f, 0.0056234318763017654f, 0.003082903567701578f, 0.0037146038375794888f, 0.0033215901348739862f, 0.003593590809032321f, 0.0036987634375691414f, 0.0032525788992643356f, 0.004292162135243416f, 0.0040128654800355434f, 0.003820545971393585f, 0.003391462843865156f, 0.004036093596369028f, 0.003352417843416333f, 0.0031651968602091074f, 0.004436196759343147f, 0.004314885474741459f, 0.003969805780798197f, 0.003564580576494336f, 0.0037234758492559195f, 0.0037635022308677435f, 0.0037297774106264114f, 0.0034196653869003057f, 0.004178146831691265f, 0.0035949326120316982f, 0.0038610813207924366f, 0.0037413188256323338f, 0.005509563256055117f, 0.0030475177336484194f, 0.0045599727891385555f, 0.004571881610900164f, 0.0035430616699159145f, 0.0029997294768691063f, 0.0032783683855086565f, 0.00462679285556078f, 0.0033908847253769636f, 0.0038366413209587336f, 0.002781146438792348f, 0.004241006448864937f, 0.0034110562410205603f, 0.0033770836889743805f, 0.004305133130401373f, 0.004008967895060778f, 0.003983802627772093f, 0.004068258684128523f, 0.004230304155498743f, 0.0035255977418273687f, 0.003278439398854971f, 0.0033478301484137774f, 0.0031949542462825775f, 0.003808283945545554f, 0.004298692103475332f, 0.004734646994620562f, 0.0038734683766961098f, 0.005410806275904179f, 0.0036318472120910883f, 0.0032526934519410133f, 0.0035975053906440735f, 0.003990450873970985f, 0.0036530718207359314f, 0.0033299101050943136f, 0.004036975558847189f, 0.003097260370850563f, 0.004319015424698591f, 0.004831819329410791f, 0.0033691891003400087f, 0.0035797771997749805f, 0.004385650623589754f, 0.004873013589531183f, 0.005865420680493116f, 0.004063860047608614f, 0.0035398281179368496f, 0.003063357435166836f, 0.003520447527989745f, 0.003479900537058711f, 0.004149496555328369f, 0.0037014512345194817f, 0.004281267523765564f, 0.004563324153423309f, 0.004182690754532814f, 0.004538063425570726f, 0.003617816139012575f, 0.003659724025055766f, 0.004247055388987064f, 0.004130721092224121f, 0.0035810882691293955f, 0.0031423233449459076f, 0.0033550416119396687f, 0.0036861810367554426f, 0.006072734948247671f, 0.003580274526029825f, 0.0036758105270564556f, 0.0038705957122147083f, 0.003920970018953085f, 0.003733755322173238f, 0.0031526009552180767f, 0.0041847326792776585f, 0.004725039470940828f, 0.004196533001959324f, 0.003375475527718663f, 0.0037838721182197332f, 0.0037047755904495716f, 0.00448200386017561f, 0.003945316653698683f, 0.003851888468489051f, 0.003912697080522776f, 0.0035066341515630484f, 0.004275746643543243f, 0.0033818574156612158f, 0.004516232293099165f, 0.003608993487432599f, 0.0035271355882287025f, 0.0029475355986505747f, 0.004480111878365278f, 0.0038984178099781275f, 0.004397981334477663f, 0.0036905973684042692f, 0.0039566317573189735f, 0.004126035608351231f, 0.003393761580809951f, 0.004017827101051807f, 0.004384600557386875f, 0.003472927724942565f, 0.003927913028746843f, 0.003928858786821365f, 0.005807938519865274f, 0.0043465509079396725f, 0.0041412306018173695f, 0.0034971393179148436f, 0.004865826107561588f, 0.0035962238907814026f, 0.0037453460972756147f, 0.004292232915759087f, 0.003040376352146268f, 0.003620086470618844f, 0.00403149239718914f, 0.004563336260616779f, 0.004896350670605898f, 0.0033160748425871134f, 0.003017794108018279f, 0.0037410128861665726f, 0.0038430807180702686f, 0.0037303066346794367f, 0.0038062536623328924f, 0.0037109525874257088f, 0.0029094316996634007f, 0.003603394376114011f, 0.004206246696412563f, 0.003390462836250663f, 0.003353436477482319f, 0.00332513265311718f, 0.0034080983605235815f, 0.0030388899613171816f, 0.0035089512821286917f, 0.0037134727463126183f, 0.0029600325506180525f, 0.004264439921826124f, 0.0031387850176542997f, 0.004202780779451132f, 0.004709987435489893f, 0.0038652517832815647f, 0.004131568595767021f, 0.0039000832475721836f, 0.0031189967412501574f, 0.003231070237234235f, 0.003516832599416375f, 0.0034131330903619528f, 0.0035837336909025908f, 0.0037023969925940037f, 0.003444469766691327f, 0.004690661560744047f, 0.003776862984523177f, 0.0036350961308926344f, 0.0029302246402949095f, 0.004101108759641647f, 0.004383181221783161f, 0.0032548157032579184f, 0.004400069825351238f, 0.0035027344711124897f, 0.002985740313306451f, 0.004245380405336618f, 0.003629618790000677f, 0.004228337202221155f, 0.0031357109546661377f, 0.0033481549471616745f, 0.004325544461607933f, 0.00364362308755517f, 0.00405625207349658f, 0.004190986044704914f, 0.0037382133305072784f, 0.0035301605239510536f, 0.003848389955237508f, 0.004513812251389027f, 0.0035816326271742582f, 0.0044907573610544205f, 0.0030734518077224493f, 0.004113675095140934f, 0.0032499057706445456f, 0.0029603575821965933f, 0.003121484536677599f, 0.003096085973083973f, 0.0034700059331953526f, 0.003664362942799926f, 0.00415640277788043f, 0.003283877857029438f, 0.004119792953133583f, 0.003627513302490115f, 0.0035495443735271692f, 0.00330821773968637f, 0.002972076181322336f, 0.004225956276059151f, 0.0034761277493089437f, 0.003616757458075881f, 0.0030844772700220346f, 0.003596588736400008f, 0.004312840756028891f, 0.003382220398634672f, 0.003983812872320414f, 0.00473918579518795f, 0.003948417492210865f, 0.004426038824021816f, 0.0041347104124724865f, 0.0026497822254896164f, 0.0029900120571255684f, 0.003603713819757104f, 0.004140692763030529f, 0.003226194530725479f, 0.003353161970153451f, 0.004237430635839701f, 0.0034699696116149426f, 0.003261550795286894f, 0.004420971963554621f, 0.004506830126047134f, 0.003706392366439104f, 0.00487936707213521f, 0.004529417492449284f, 0.004179668612778187f, 0.003669495228677988f, 0.0034063938073813915f, 0.003189353970810771f, 0.0036273670848459005f, 0.004923535045236349f, 0.003010094864293933f, 0.004265320021659136f, 0.004500055685639381f, 0.004156975075602531f, 0.002885600319132209f, 0.0029739129822701216f, 0.00408858060836792f, 0.0036299508064985275f, 0.004287448711693287f, 0.0032969219610095024f, 0.003886751364916563f, 0.003322541480883956f, 0.004545123782008886f, 0.0031153575982898474f, 0.0032655452378094196f, 0.0042764050886034966f, 0.0032842406071722507f, 0.004038607701659203f, 0.0036575670819729567f, 0.0032638446427881718f, 0.0038801939226686954f, 0.004386259242892265f, 0.006266017910093069f, 0.0033433043863624334f, 0.0035418341867625713f, 0.0037159353960305452f, 0.003750019008293748f, 0.004375551361590624f, 0.003761537605896592f, 0.0035675386898219585f, 0.0043622758239507675f, 0.0040155029855668545f, 0.003268867963925004f, 0.004967513028532267f, 0.0036836382932960987f, 0.003703545080497861f, 0.005030590109527111f, 0.004102685023099184f, 0.003496711142361164f, 0.004623484332114458f, 0.0044000460766255856f, 0.0035491923335939646f, 0.004719546530395746f, 0.003473901655524969f, 0.0028756060637533665f, 0.003623445052653551f, 0.003577266586944461f, 0.0032603470608592033f, 0.003417127998545766f, 0.003827174659818411f, 0.003970835357904434f, 0.004037435166537762f, 0.0038029642309993505f, 0.004964381922036409f, 0.003615353722125292f, 0.004663451574742794f, 0.00370883964933455f, 0.0032223700545728207f, 0.003398207714781165f, 0.00341453542932868f, 0.0053894114680588245f, 0.004285176284611225f, 0.0029914667829871178f, 0.004213717766106129f, 0.003656169632449746f, 0.005473132710903883f, 0.004141768906265497f, 0.0052666086703538895f, 0.004633591044694185f, 0.003192879958078265f, 0.0033314276952296495f, 0.003959445282816887f, 0.0034829718060791492f, 0.0037485812790691853f, 0.003829778404906392f, 0.003791988827288151f, 0.0044307224452495575f, 0.0047205425798892975f, 0.005846777465194464f, 0.004771678242832422f, 0.004090785048902035f, 0.004043771885335445f, 0.004073330666869879f, 0.004721174947917461f, 0.003996714949607849f, 0.003887275466695428f, 0.0037436571437865496f, 0.0032804214861243963f, 0.0038602601271122694f, 0.0036037880927324295f, 0.004096061456948519f, 0.004099768120795488f, 0.003571128472685814f, 0.0033752296585589647f, 0.003964386414736509f, 0.0036886492744088173f, 0.004123199265450239f, 0.004765571095049381f, 0.004150883294641972f, 0.003768018912523985f, 0.004433669615536928f, 0.0045180791057646275f, 0.0034048312809318304f, 0.00390043156221509f, 0.0038431943394243717f, 0.0029916309285908937f, 0.0030236640013754368f, 0.003688886994495988f, 0.006153726018965244f, 0.0034774576779454947f, 0.0048773265443742275f, 0.0036245444789528847f, 0.0035867250990122557f, 0.003957362379878759f, 0.005563497543334961f, 0.0037009778898209333f, 0.0036931829527020454f, 0.0033976363483816385f, 0.00351080484688282f, 0.00312315602786839f, 0.003882891498506069f, 0.0036013557109981775f, 0.004141919780522585f, 0.0037264388520270586f, 0.004249583464115858f, 0.003505573607981205f, 0.0033702615182846785f, 0.0034968634136021137f, 0.0040143923833966255f, 0.004930148366838694f, 0.00408761203289032f, 0.003532127710059285f, 0.0035236028488725424f, 0.002986844163388014f, 0.0031893234699964523f, 0.0034949963446706533f, 0.003837575437501073f, 0.003057049820199609f, 0.004893495235592127f, 0.003361109644174576f, 0.00346668460406363f, 0.003403447102755308f, 0.0037285350263118744f, 0.0032160645350813866f, 0.004089984577149153f, 0.003120443318039179f, 0.00305331964045763f, 0.0044115083292126656f, 0.0032609186600893736f, 0.004274354316294193f, 0.004194176290184259f, 0.004207543097436428f, 0.003657449036836624f, 0.00410618307068944f, 0.003955939318984747f, 0.005211900919675827f, 0.0037916889414191246f, 0.003477461403235793f, 0.0030775475315749645f, 0.004935852717608213f, 0.0038171960040926933f, 0.003478416707366705f, 0.003811120055615902f, 0.002807736163958907f, 0.004117438569664955f, 0.004986507818102837f, 0.0045080832205712795f, 0.003377595916390419f, 0.00481773866340518f, 0.003528469940647483f, 0.004120280966162682f, 0.003474973840638995f, 0.0035590704064816236f, 0.004208311904221773f, 0.0032097615767270327f, 0.0038121389225125313f, 0.0038719859439879656f, 0.0047120158560574055f, 0.003297202754765749f, 0.002832177560776472f, 0.004443935118615627f, 0.005546832922846079f, 0.004733807872980833f, 0.005225821863859892f, 0.004065012093633413f, 0.004077001474797726f, 0.0032616560347378254f, 0.004428495187312365f, 0.0034507380332797766f, 0.0041101593524217606f, 0.0034873299300670624f, 0.0033979464787989855f, 0.0033217077143490314f, 0.004126436542719603f, 0.00435124384239316f, 0.004121549427509308f, 0.0038676862604916096f, 0.004171481356024742f, 0.0036255212035030127f, 0.003853175789117813f, 0.0031272454652935266f, 0.0033538248389959335f, 0.0037400489673018456f, 0.004161571618169546f, 0.0038523413240909576f, 0.004082819912582636f, 0.00397453224286437f, 0.0041042594239115715f, 0.003406716277822852f, 0.004060358740389347f, 0.0033030244521796703f, 0.003911598585546017f, 0.003598912386223674f, 0.0033983171451836824f, 0.0033244984224438667f, 0.003917078487575054f, 0.003810863709077239f, 0.0035392967984080315f, 0.004076141864061356f, 0.0032399501651525497f, 0.0035825250670313835f, 0.0037887967191636562f, 0.0034658743534237146f, 0.004923576954752207f, 0.0037815668620169163f, 0.004306468181312084f, 0.0036415415816009045f, 0.005419928580522537f, 0.0034398981370031834f, 0.004198750015348196f, 0.0041436259634792805f, 0.0037347155157476664f, 0.005426941905170679f, 0.005220815073698759f, 0.003001410746946931f, 0.0033461847342550755f, 0.004142788704484701f, 0.004206974059343338f, 0.004153857938945293f, 0.005149049684405327f, 0.0033035746309906244f, 0.004102028906345367f, 0.004466928541660309f, 0.003459393046796322f, 0.004695061594247818f, 0.003192311618477106f, 0.004960471764206886f, 0.004678432364016771f, 0.003454388352110982f, 0.0036572555545717478f, 0.004506152588874102f, 0.004157997667789459f, 0.003855086164548993f, 0.004047448746860027f, 0.0032528992742300034f, 0.0031916447915136814f, 0.003914966247975826f, 0.003505163360387087f, 0.006585283670574427f, 0.004344310611486435f, 0.004599435720592737f, 0.0035100169479846954f, 0.0038444832898676395f, 0.0033834646455943584f, 0.004003350622951984f, 0.00420225178822875f, 0.0038245401810854673f, 0.004241290036588907f, 0.003688027150928974f, 0.0036127702333033085f, 0.005398440174758434f, 0.003105719108134508f, 0.004005788825452328f, 0.005779620725661516f, 0.005785456858575344f, 0.0033214506693184376f, 0.00358084705658257f, 0.003359256312251091f, 0.005698921158909798f, 0.003717217594385147f, 0.004625357687473297f, 0.005211648065596819f, 0.004571720026433468f, 0.004278083331882954f, 0.0039446596056222916f, 0.0038785599172115326f, 0.003817210905253887f, 0.00523017905652523f, 0.003970299381762743f, 0.006923343054950237f, 0.003713170764967799f, 0.0033579959999769926f, 0.0034032564144581556f, 0.004482343792915344f, 0.0032880061771720648f, 0.0036915855016559362f, 0.004144938196986914f, 0.004888671450316906f, 0.003922427073121071f, 0.004262295551598072f, 0.0038386518135666847f, 0.003214051714166999f, 0.0032410144340246916f, 0.004596067126840353f, 0.0037974808365106583f, 0.004636260215193033f, 0.004012779798358679f, 0.0035720285959541798f, 0.004115900956094265f, 0.0031793650705367327f, 0.004722312092781067f, 0.004841194953769445f, 0.003152833553031087f, 0.00377991353161633f, 0.0036642816849052906f, 0.004059858154505491f, 0.0031551532447338104f, 0.004072639625519514f, 0.003970149904489517f, 0.0037611115258187056f, 0.003861056873574853f, 0.004342364612966776f, 0.003719653934240341f, 0.0035633568186312914f, 0.003688241820782423f, 0.0035809515975415707f, 0.003973361570388079f, 0.004169093910604715f, 0.0031605239491909742f, 0.0037840595468878746f, 0.004318686667829752f, 0.004346385598182678f, 0.0035405000671744347f, 0.0032194769009947777f, 0.003782112617045641f, 0.004200844094157219f, 0.00346943037584424f, 0.004298144951462746f, 0.003203001106157899f, 0.00426093116402626f, 0.004389071837067604f, 0.003562566824257374f, 0.0037465740460902452f, 0.003922441974282265f, 0.0036037294194102287f, 0.0054223062470555305f, 0.003808380337432027f, 0.004504825454205275f, 0.004984700586646795f, 0.0034064396750181913f, 0.004675333853811026f, 0.003728574840351939f, 0.003573769936338067f, 0.004096942022442818f, 0.005298291798681021f, 0.004652389325201511f, 0.0032641575671732426f, 0.0034198560751974583f, 0.003755254205316305f, 0.004505309741944075f, 0.0036802904214709997f, 0.003964756149798632f, 0.003509960602968931f, 0.004345394670963287f, 0.003441914450377226f, 0.0041640279814600945f, 0.0034352662041783333f, 0.00451092841103673f, 0.004927424248307943f, 0.0037634146865457296f, 0.0032375187147408724f, 0.0040099965408444405f, 0.003226038534194231f, 0.003193993354216218f, 0.003271788125857711f, 0.0028674043715000153f, 0.0034625413827598095f, 0.00473668472841382f, 0.004426618106663227f, 0.00339365191757679f, 0.0038227688055485487f, 0.0037828937638550997f, 0.0038020992651581764f, 0.004168372135609388f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #168 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_66_bias_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1280,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.00022151465236674994f, 0.0002515987725928426f, 0.0003675754414871335f, 0.000246237323153764f, 0.00029169226763769984f, 0.0003308919258415699f, 0.00026089270249940455f, 0.0002568463096395135f, 0.0003082267357967794f, 0.00026708966470323503f, 0.00032107048900797963f, 0.00028780996217392385f, 0.0002551818615756929f, 0.00027167156804353f, 0.0003657187335193157f, 0.0003758095554076135f, 0.0002944714797195047f, 0.00023199597490020096f, 0.00024476955877617f, 0.0002913065836764872f, 0.0002736270835157484f, 0.0002864631824195385f, 0.000272866542218253f, 0.00032198941335082054f, 0.0002918921527452767f, 0.00027684695669449866f, 0.00028696306981146336f, 0.00024718622444197536f, 0.00031569096609018743f, 0.00024171188124455512f, 0.0002439579548081383f, 0.00024186790687963367f, 0.0003249758156016469f, 0.00023922226682770997f, 0.0002699579927138984f, 0.00030448928009718657f, 0.00023575633531436324f, 0.00024868088075891137f, 0.0003176755562890321f, 0.0002032542397500947f, 0.00026419665664434433f, 0.0002513586077839136f, 0.0002480380062479526f, 0.00034274806967005134f, 0.0002807138371281326f, 0.000272676203167066f, 0.00024999884772114456f, 0.0002496520464774221f, 0.0003631103609222919f, 0.00026801819331012666f, 0.0003274947521276772f, 0.00035860182833857834f, 0.0002555035171099007f, 0.0002730313572101295f, 0.00030838357633911073f, 0.00033609761158004403f, 0.0004440731427166611f, 0.00033644179347902536f, 0.00037071105907671154f, 0.00029456024640239775f, 0.0003813114599324763f, 0.00028789948555640876f, 0.0002331769501324743f, 0.00024607605882920325f, 0.0002745792444329709f, 0.00040165960672311485f, 0.00030743321985937655f, 0.0002535354869905859f, 0.0002585543552413583f, 0.00024261225189547986f, 0.00039247539825737476f, 0.000248326628934592f, 0.0003557901072781533f, 0.00028306999593041837f, 0.0002737267641350627f, 0.00030308670829981565f, 0.00026015154435299337f, 0.0002815864863805473f, 0.0002675493306014687f, 0.00024089102225843817f, 0.00031138191116042435f, 0.000332014198647812f, 0.00021315537742339075f, 0.0002706096274778247f, 0.0003031488449778408f, 0.0003113455604761839f, 0.00034616098855622113f, 0.00027006675372831523f, 0.0003393669321667403f, 0.0002562193258199841f, 0.0002595420810393989f, 0.0003419124404899776f, 0.0002939367259386927f, 0.0002572753874119371f, 0.0003153390425723046f, 0.00032059516524896026f, 0.0002277356688864529f, 0.0002197131107095629f, 0.00030011564376764f, 0.00024988624500110745f, 0.00032281220774166286f, 0.0002772313600871712f, 0.000259572290815413f, 0.00023261827300302684f, 0.0003398507833480835f, 0.0002372332091908902f, 0.0003025795449502766f, 0.00037731387419626117f, 0.00036603229818865657f, 0.0002616986748762429f, 0.00028226422728039324f, 0.0002563076268415898f, 0.0002910580369643867f, 0.00026717863511294127f, 0.0003179638006258756f, 0.0003245457774028182f, 0.0002727947139646858f, 0.00025015155551955104f, 0.00027604171191342175f, 0.00023466895800083876f, 0.00020909369050059468f, 0.0002871472970582545f, 0.00037688121665269136f, 0.00032279916922561824f, 0.0003210677532479167f, 0.00023994983348529786f, 0.0003271639870945364f, 0.00033069707569666207f, 0.00024115544511005282f, 0.000292181532131508f, 0.0002600167354103178f, 0.00021857331739738584f, 0.0002651262329891324f, 0.0002901868137996644f, 0.0002943857398349792f, 0.000246993062319234f, 0.00031449864036403596f, 0.0002662945771589875f, 0.00030644310754723847f, 0.00038531902828253806f, 0.00020563600992318243f, 0.0003306560101918876f, 0.00025504708173684776f, 0.00026325235376134515f, 0.00024291215231642127f, 0.0002490859478712082f, 0.00022358368732966483f, 0.00032351582194678485f, 0.000254706566920504f, 0.0003371127531863749f, 0.00039219329482875764f, 0.0003208232519682497f, 0.00027288656565360725f, 0.00026292804977856576f, 0.000285051908576861f, 0.00032214008388109505f, 0.0002870963653549552f, 0.0002535312087275088f, 0.00023148163745645434f, 0.00045764452079311013f, 0.0002499290567357093f, 0.00031858813599683344f, 0.0002755038149189204f, 0.000250471755862236f, 0.00023894148762337863f, 0.00028317919350229204f, 0.0002995473041664809f, 0.00020197193953208625f, 0.0002706365776248276f, 0.0002482569543644786f, 0.0003122518537566066f, 0.00025008319062180817f, 0.00029431493021547794f, 0.00025213760090991855f, 0.00031991858850233257f, 0.000248260359512642f, 0.00030723147210665047f, 0.0002760256757028401f, 0.0003310683823656291f, 0.0003044484183192253f, 0.0003130500263068825f, 0.0002841060049831867f, 0.00032480055233463645f, 0.0002459710813127458f, 0.0003093326813541353f, 0.00029602786526083946f, 0.0003217858902644366f, 0.00023880453954916447f, 0.0002749459818005562f, 0.00023211207007989287f, 0.00034286873415112495f, 0.00030557025456801057f, 0.00022620275558438152f, 0.0002676037256605923f, 0.00029977556550875306f, 0.00030456684180535376f, 0.00025600806111469865f, 0.0003004051395691931f, 0.0002600384468678385f, 0.0003429221687838435f, 0.0002684421488083899f, 0.00025660370010882616f, 0.00023529381724074483f, 0.00022126109979581088f, 0.0003570269327610731f, 0.00031382442102767527f, 0.000293020682875067f, 0.00026444171089679003f, 0.00025798077695071697f, 0.00028613980975933373f, 0.0002474998473189771f, 0.00029251311207190156f, 0.00026132140192203224f, 0.00034611995215527713f, 0.0002947703469544649f, 0.000285363697912544f, 0.00024280966317746788f, 0.0003013648383785039f, 0.0002472112828399986f, 0.0003483159525785595f, 0.00027251665596850216f, 0.00023793896252755076f, 0.0002270562545163557f, 0.00026852849987335503f, 0.00032042249222286046f, 0.0002941205748356879f, 0.0003188027476426214f, 0.00037866842467337847f, 0.0002732436405494809f, 0.00047169532626867294f, 0.0002694294962566346f, 0.0002576222759671509f, 0.0002982250298373401f, 0.0002807549317367375f, 0.0002598786086309701f, 0.00031460815807804465f, 0.00034016763675026596f, 0.00035822123754769564f, 0.0004129289009142667f, 0.00028699144604615867f, 0.0003136947634629905f, 0.00031371659133583307f, 0.00033263303339481354f, 0.00047368177911266685f, 0.0002395544433966279f, 0.00023054261691868305f, 0.00028827955247834325f, 0.00024156727886293083f, 0.0002806455595418811f, 0.00031646116985939443f, 0.00034360087011009455f, 0.00033440787228755653f, 0.0002925810404121876f, 0.0002900846302509308f, 0.0003428352065384388f, 0.0002726929960772395f, 0.0003128958633169532f, 0.000270423071924597f, 0.0002450253232382238f, 0.00031942350324243307f, 0.0003169889096170664f, 0.0002621383755467832f, 0.0002650653768796474f, 0.00025069210096262395f, 0.0002992160152643919f, 0.00028591594309546053f, 0.00034792182850651443f, 0.00027997815050184727f, 0.0003393450751900673f, 0.00030756418709643185f, 0.0002645926142577082f, 0.0003010704240296036f, 0.00025053462013602257f, 0.00030600003083236516f, 0.00028645514976233244f, 0.00025661601102910936f, 0.0004752255917992443f, 0.0002899389946833253f, 0.0002375567564740777f, 0.0004540238587651402f, 0.0003545512445271015f, 0.00026346559752710164f, 0.00023882053210400045f, 0.0002870599564630538f, 0.0002975843963213265f, 0.0003652825835160911f, 0.0002907724410761148f, 0.00027417694218456745f, 0.0002564558235462755f, 0.00027149333618581295f, 0.0003876910777762532f, 0.00032784946961328387f, 0.0002374593896092847f, 0.0002418771618977189f, 0.0002849484735634178f, 0.00028839570586569607f, 0.00033147132489830256f, 0.000423320394475013f, 0.0002996659022755921f, 0.0002609219227451831f, 0.0002931116905529052f, 0.00028136587934568524f, 0.0002411574823781848f, 0.0002579393330961466f, 0.0002285245864186436f, 0.00031383923487737775f, 0.00023703064653091133f, 0.00022677711967844516f, 0.0002465351135469973f, 0.0003418804262764752f, 0.0003599151677917689f, 0.0002776451874524355f, 0.0002935172524303198f, 0.0003457172424532473f, 0.00026594416704028845f, 0.0003216956974938512f, 0.00029622367583215237f, 0.00033049049670808017f, 0.00029300665482878685f, 0.00028202234534546733f, 0.0003471938252914697f, 0.00032765159267000854f, 0.00030576353310607374f, 0.00025906614609993994f, 0.00025022757472470403f, 0.0002719409530982375f, 0.0002590277581475675f, 0.0002447667357046157f, 0.00023438292555510998f, 0.000249049422563985f, 0.00022916616580914706f, 0.00023740885080769658f, 0.0003801146522164345f, 0.0002599658619146794f, 0.0003065164783038199f, 0.00026735354913398623f, 0.00035466751432977617f, 0.0003373973013367504f, 0.0002654027775861323f, 0.0002849286247510463f, 0.00030400705873034894f, 0.0002314093871973455f, 0.0002574798127170652f, 0.00023696926655247808f, 0.00027216505259275436f, 0.0002768684644252062f, 0.0002610412484500557f, 0.0002697250456549227f, 0.0002939269761554897f, 0.0002450217434670776f, 0.00035669715725816786f, 0.00034838818828575313f, 0.00040260067908093333f, 0.00030733816674910486f, 0.00041326010250486434f, 0.00026147739845328033f, 0.0002451929321978241f, 0.00023430764849763364f, 0.0003591928107198328f, 0.00024630289408378303f, 0.00026711352984420955f, 0.0003200970822945237f, 0.00027833954663947225f, 0.0002394246548647061f, 0.00027880154084414244f, 0.0003141044289804995f, 0.00024727065465413034f, 0.00024645886151120067f, 0.00035898323403671384f, 0.0002494140644557774f, 0.0003254928451497108f, 0.00024285848485305905f, 0.0002613485266920179f, 0.0003079456218983978f, 0.00029075524071231484f, 0.00037506574881263077f, 0.0002936873061116785f, 0.0003669403959065676f, 0.00021516787819564342f, 0.00024046329781413078f, 0.00030996723216958344f, 0.000235396291827783f, 0.00024552459944970906f, 0.00031757319811731577f, 0.0002507505414541811f, 0.000302323664072901f, 0.0002884972782339901f, 0.00032962538534775376f, 0.0003589635016396642f, 0.00025677093071863055f, 0.00024994974955916405f, 0.0003097468870691955f, 0.0002372290618950501f, 0.00032520145759917796f, 0.000338023470249027f, 0.0002870965108741075f, 0.0002873212215490639f, 0.00026174570666626096f, 0.00031350928475148976f, 0.0002801213995553553f, 0.00024837238015607f, 0.00025504661607556045f, 0.0003115159925073385f, 0.0002572739322204143f, 0.00027097706333734095f, 0.00029054880724288523f, 0.00032553766504861414f, 0.0002968124463222921f, 0.00048499592230655253f, 0.0003276425995863974f, 0.00030059131677262485f, 0.000327831570757553f, 0.0002491824561730027f, 0.00028725367155857384f, 0.00026273858384229243f, 0.0003539971949066967f, 0.00031831959495320916f, 0.0003016401606146246f, 0.0003507317160256207f, 0.0002580411673989147f, 0.0003119201574008912f, 0.0003586483362596482f, 0.0003145097871311009f, 0.0002566878101788461f, 0.0002413307229289785f, 0.0002935773227363825f, 0.000248588650720194f, 0.00029269480728544295f, 0.0002955175004899502f, 0.00026789959520101547f, 0.00026189934578724205f, 0.0003190952120348811f, 0.00027775997295975685f, 0.000314601551508531f, 0.0002768411359284073f, 0.00026644047466106713f, 0.0002718330651987344f, 0.0003086930373683572f, 0.000280708831269294f, 0.00027499813586473465f, 0.00029558868845924735f, 0.0002524348965380341f, 0.0003660416114144027f, 0.00024094943364616483f, 0.0003058389702346176f, 0.00025142269441857934f, 0.0002699923643376678f, 0.00029069618904031813f, 0.00039718978223390877f, 0.00034518082975409925f, 0.00023418571799993515f, 0.0003228787099942565f, 0.0003792403731495142f, 0.00026908915606327355f, 0.0002825031115207821f, 0.00029857788467779756f, 0.00028312214999459684f, 0.0002325338573427871f, 0.0002550763892941177f, 0.00021700371871702373f, 0.0004948958521708846f, 0.00037032028194516897f, 0.00022298912517726421f, 0.00024228674010373652f, 0.00031553389271721244f, 0.00026253247051499784f, 0.0002588277275208384f, 0.0003115733270533383f, 0.0003714882186613977f, 0.00024917206610552967f, 0.0002723890938796103f, 0.0003133906575385481f, 0.00023823247465770692f, 0.0002523436851333827f, 0.00026055079069919884f, 0.00035130188916809857f, 0.00024300822406075895f, 0.00032820881460793316f, 0.000312488671625033f, 0.00030349812004715204f, 0.00034101627534255385f, 0.00028075993759557605f, 0.0001953189930645749f, 0.0003218265192117542f, 0.0003891065716743469f, 0.00025290102348662913f, 0.0003445761394686997f, 0.0003214212483726442f, 0.0002275728329550475f, 0.0002567955234553665f, 0.0002521530259400606f, 0.000319477025186643f, 0.000260435655945912f, 0.00026412869920022786f, 0.00032192154321819544f, 0.0002650917158462107f, 0.00032307658693753183f, 0.0003593546280171722f, 0.0002674289280548692f, 0.00029896970954723656f, 0.00025339031708426774f, 0.00038011331344023347f, 0.0002583382010925561f, 0.0002787183620966971f, 0.0002657243749126792f, 0.0003214677271898836f, 0.0003524446510709822f, 0.00027898032567463815f, 0.00026266154600307345f, 0.0002108419284923002f, 0.00024587492225691676f, 0.00025896154693327844f, 0.00024140719324350357f, 0.0003433904203120619f, 0.00024957707501016557f, 0.00032558891689404845f, 0.00030406261794269085f, 0.0003353729844093323f, 0.0003285606508143246f, 0.0002622039173729718f, 0.0002516268577892333f, 0.00030764282564632595f, 0.00040007487405091524f, 0.00030972479726187885f, 0.00028777518309652805f, 0.00025408624787814915f, 0.0003499029262457043f, 0.00036297106998972595f, 0.0003488502115942538f, 0.00024485416361130774f, 0.0004760359588544816f, 0.0002643889165483415f, 0.00027170294197276235f, 0.0002245178766315803f, 0.00031065475195646286f, 0.0003352986241225153f, 0.00027002993738278747f, 0.00025333595112897456f, 0.00028478846070356667f, 0.00023948225134517998f, 0.00028262395062483847f, 0.00039657449815422297f, 0.00035740836756303906f, 0.0002340639039175585f, 0.00024007596948649734f, 0.00029440110665746033f, 0.0003195276076439768f, 0.0002820352092385292f, 0.00021995417773723602f, 0.0002999478601850569f, 0.00038442513323388994f, 0.0004735939437523484f, 0.0002836461935658008f, 0.0002580022846814245f, 0.0002873112098313868f, 0.0002450351894367486f, 0.0002931375056505203f, 0.0002901647239923477f, 0.00036856450606137514f, 0.0002748783736024052f, 0.00031411374220624566f, 0.00029528411687351763f, 0.000300821615383029f, 0.00026720744790509343f, 0.0003054239205084741f, 0.00027448427863419056f, 0.0002890760952141136f, 0.00035632943036034703f, 0.00025966265820898116f, 0.0002318459446541965f, 0.000340208993293345f, 0.00036032937350682914f, 0.000373089627828449f, 0.0002581327280495316f, 0.00030503739253617823f, 0.00026554922806099057f, 0.0002508432080503553f, 0.0002486389712430537f, 0.00025933809229172766f, 0.00022154378530103713f, 0.00028132431907579303f, 0.0003092485130764544f, 0.00027367667644284666f, 0.0003572030400391668f, 0.00043900334276258945f, 0.0003477416466921568f, 0.00024104694603011012f, 0.00030531667289324105f, 0.0003819010453298688f, 0.00028314514202065766f, 0.0002792382729239762f, 0.0003128797106910497f, 0.0003023386816494167f, 0.0003326876030769199f, 0.000335041870130226f, 0.00028094041044823825f, 0.00026200906722806394f, 0.00023652520030736923f, 0.0002129169733962044f, 0.00023566267918795347f, 0.00027671147836372256f, 0.00025589540018700063f, 0.000380630255676806f, 0.0002686734078451991f, 0.000315050536300987f, 0.0002972484799101949f, 0.00026806825189851224f, 0.0003418691048864275f, 0.00029371268465183675f, 0.0002446116413921118f, 0.0003785165317822248f, 0.0003216466575395316f, 0.0002398597280262038f, 0.0002812807506415993f, 0.0002584085741546005f, 0.00029952029581181705f, 0.00034799627610482275f, 0.00032801806810311973f, 0.0003098592860624194f, 0.00028139527421444654f, 0.00031292473431676626f, 0.0003283886471763253f, 0.00030495613464154303f, 0.00024420800036750734f, 0.0004377890727482736f, 0.00030249496921896935f, 0.00029146671295166016f, 0.00021735600603278726f, 0.0003379984409548342f, 0.0002679147874005139f, 0.000310228526359424f, 0.00028022233163937926f, 0.00028512615244835615f, 0.0002784829121083021f, 0.0003187740803696215f, 0.00028832475072704256f, 0.000326624809531495f, 0.00023339100880548358f, 0.00029785395599901676f, 0.0002609345829114318f, 0.0004371727118268609f, 0.0002986703475471586f, 0.0002919627877417952f, 0.0002458661620039493f, 0.0003238939098082483f, 0.00033920686109922826f, 0.0002858946390915662f, 0.00024105141346808523f, 0.00021985740750096738f, 0.0003306021972093731f, 0.00025162979727610946f, 0.0002625499328132719f, 0.00041024552774615586f, 0.00022120887297205627f, 0.00029341981280595064f, 0.0004205263976473361f, 0.00023054290795698762f, 0.0002777821500785649f, 0.0002483921416569501f, 0.000268732663244009f, 0.00027659759507514536f, 0.00024323142133653164f, 0.0003209725837223232f, 0.00030008648172952235f, 0.0002857046201825142f, 0.00025361732696183026f, 0.00030182351474650204f, 0.00025069748517125845f, 0.00023669689835514873f, 0.0003317436494398862f, 0.0003226718690712005f, 0.00029686643392778933f, 0.00026656323461793363f, 0.0002784456009976566f, 0.0002814388135448098f, 0.000278916850220412f, 0.00025572633603587747f, 0.00031244641286320984f, 0.00026883301325142384f, 0.00028873590053990483f, 0.00027977992431260645f, 0.000412011198932305f, 0.00022789671493228525f, 0.0003409997734706849f, 0.0003418903215788305f, 0.0002649540256243199f, 0.00022432305559050292f, 0.0002451599866617471f, 0.00034599663922563195f, 0.00025357407866977155f, 0.00028690823819488287f, 0.000207977180252783f, 0.0003171471180394292f, 0.00025508253020234406f, 0.0002525420277379453f, 0.00032194258528761566f, 0.00029979500686749816f, 0.0002979131240863353f, 0.0003042288590222597f, 0.00031634679180569947f, 0.00026364807854406536f, 0.0002451652835588902f, 0.00025035440921783447f, 0.00023892219178378582f, 0.0002847876457963139f, 0.0003214609168935567f, 0.0003540620964486152f, 0.00028966221725568175f, 0.0004046260437462479f, 0.00027159351157024503f, 0.00024323999241460115f, 0.00026902538957074285f, 0.0002984103048220277f, 0.00027318071806803346f, 0.00024901432334445417f, 0.000301889464026317f, 0.0002316165337106213f, 0.00032298071892000735f, 0.00036132874083705246f, 0.0002519516565371305f, 0.00026769968098960817f, 0.00032796376035548747f, 0.00036440929397940636f, 0.00043862260645255446f, 0.0003038999275304377f, 0.00026471223100088537f, 0.00022908122627995908f, 0.00026326291845180094f, 0.00026023079408332705f, 0.00031030390528030694f, 0.00027679858612827957f, 0.00032015788019634783f, 0.0003412503865547478f, 0.0003127862000837922f, 0.00033936137333512306f, 0.00027054426027461886f, 0.0002736781898420304f, 0.00031759944977238774f, 0.00030889984918758273f, 0.00026779770269058645f, 0.00023498639347963035f, 0.00025089370319619775f, 0.00027565666823647916f, 0.00045412578037939966f, 0.0002677368465811014f, 0.0002748811384662986f, 0.0002894474018830806f, 0.00029321442707441747f, 0.0002792143204715103f, 0.00023575495288241655f, 0.0003129389078821987f, 0.00035334363928996027f, 0.00031382133602164686f, 0.0002524217707104981f, 0.00028296210803091526f, 0.000277047191048041f, 0.00033516917028464377f, 0.0002950351045001298f, 0.0002880484389606863f, 0.00029259579605422914f, 0.0002622299361974001f, 0.0003197450132574886f, 0.0002528990153223276f, 0.0003377287939656526f, 0.00026988450554199517f, 0.0002637630677781999f, 0.00022041994088795036f, 0.0003350276965647936f, 0.0002915279765147716f, 0.00032888585701584816f, 0.0002759869094006717f, 0.0002958812692668289f, 0.0003085494681727141f, 0.00025378921418450773f, 0.00030045752646401525f, 0.0003278852382209152f, 0.00025970934075303376f, 0.0002937336394097656f, 0.00029380436171777546f, 0.0004343240289017558f, 0.0003250398440286517f, 0.00030968576902523637f, 0.0002615199191495776f, 0.0003638718044385314f, 0.0002689295797608793f, 0.00028008109075017273f, 0.0003209778806194663f, 0.00022736267419531941f, 0.00027071405202150345f, 0.0003014794201590121f, 0.000341251288773492f, 0.00036615447606891394f, 0.00024797971127554774f, 0.0002256739535368979f, 0.00027975704870186746f, 0.00028738979017362f, 0.0002789564314298332f, 0.00028463584021665156f, 0.0002775090979412198f, 0.0002175705012632534f, 0.00026946578873321414f, 0.0003145477385260165f, 0.00025354253011755645f, 0.0002507736498955637f, 0.00024865707382559776f, 0.0002548613410908729f, 0.00022725152666680515f, 0.0002624032204039395f, 0.0002776975743472576f, 0.0002213544794358313f, 0.0003188994887750596f, 0.00023472178145311773f, 0.00031428856891579926f, 0.00035221801954321563f, 0.0002890477771870792f, 0.0003089632373303175f, 0.00029165251180529594f, 0.0002332419971935451f, 0.00024162298359442502f, 0.0002629926020745188f, 0.0002552378282416612f, 0.0002679955505300313f, 0.00027686930843628943f, 0.00025758123956620693f, 0.0003507728106342256f, 0.0002824379480443895f, 0.00027183647034689784f, 0.00021912541706115007f, 0.00030668542603962123f, 0.0003277790965512395f, 0.00024339869560208172f, 0.00032904205727390945f, 0.0002619383158162236f, 0.00022327693295665085f, 0.0003174742159899324f, 0.00027142686303704977f, 0.00031619970104657114f, 0.00023449190484825522f, 0.00025037871091626585f, 0.0003234689647797495f, 0.0002724741352722049f, 0.000303330976748839f, 0.0003134065482299775f, 0.0002795477048493922f, 0.0002639892918523401f, 0.00028778682462871075f, 0.0003375478263478726f, 0.0002678384189493954f, 0.0003358237736392766f, 0.00022983609233051538f, 0.00030762513051740825f, 0.00024303152167703956f, 0.0002213787956861779f, 0.00023342804342973977f, 0.0002315287129022181f, 0.00025949085829779506f, 0.0002740250783972442f, 0.0003108203527517617f, 0.0002455719804856926f, 0.0003080826427321881f, 0.00027126941131427884f, 0.0002654388372320682f, 0.0002473921631462872f, 0.00022225511202123016f, 0.00031602164381183684f, 0.0002599486615508795f, 0.00027046509785577655f, 0.00023066058929543942f, 0.00026895685005001724f, 0.0003225189575459808f, 0.0002529261400923133f, 0.00029791390988975763f, 0.0003544015053194016f, 0.0002952670038212091f, 0.00033098403946496546f, 0.0003091981925535947f, 0.0001981536188395694f, 0.00022359637659974396f, 0.0002694896829780191f, 0.00030964554753154516f, 0.00024125837080646306f, 0.0002507531316950917f, 0.0003168797120451927f, 0.0002594881225377321f, 0.00024390235194005072f, 0.00033060513669624925f, 0.0003370257036294788f, 0.00027716808835975826f, 0.00036488441401161253f, 0.00033871480263769627f, 0.00031256020884029567f, 0.00027440887060947716f, 0.0002547338663134724f, 0.00023850338766351342f, 0.00027125849737785757f, 0.00036818734952248633f, 0.00022509819245897233f, 0.0003189653216395527f, 0.00033651909325271845f, 0.00031086316448636353f, 0.00021578835730906576f, 0.00022239248210098594f, 0.0003057485446333885f, 0.0002714517177082598f, 0.0003206201072316617f, 0.00024654745357111096f, 0.0002906555309891701f, 0.00024846330052241683f, 0.00033988934592343867f, 0.00023296986182685941f, 0.0002442010445520282f, 0.0003197942569386214f, 0.0002455991052556783f, 0.00030201152549125254f, 0.00027351686730980873f, 0.0002440738899167627f, 0.00029016516054980457f, 0.0003280092787463218f, 0.0004685797030106187f, 0.0002500159607734531f, 0.00026486226124688983f, 0.00027788171428255737f, 0.00028043054044246674f, 0.0003272085450589657f, 0.0002812918974086642f, 0.00026678445283323526f, 0.00032621578429825604f, 0.00030028371838852763f, 0.00024444953305646777f, 0.00037147608236409724f, 0.00027546650380827487f, 0.0002769551647361368f, 0.0003761930565815419f, 0.000306803296552971f, 0.0002614879049360752f, 0.00034574922756291926f, 0.0003290402819402516f, 0.00026541249826550484f, 0.0003529328678268939f, 0.00025978218764066696f, 0.00021504097094293684f, 0.0002709651889745146f, 0.0002675119321793318f, 0.00024381233379244804f, 0.00025553657906129956f, 0.0002862003166228533f, 0.0002969434135593474f, 0.0003019238356500864f, 0.0002843898255378008f, 0.0003712419420480728f, 0.0002703601203393191f, 0.00034873801632784307f, 0.0002773510932456702f, 0.00024097236746456474f, 0.00025412169634364545f, 0.00025534271844662726f, 0.0004030260897707194f, 0.00032045019906945527f, 0.00022370516671799123f, 0.0003151064447592944f, 0.00027341238455846906f, 0.0004092868766747415f, 0.00030972601962275803f, 0.0003938427835237235f, 0.0003465050249360502f, 0.00023876706836745143f, 0.00024912782828323543f, 0.0002960916608572006f, 0.00026046045240946114f, 0.00028032303089275956f, 0.00028639502124860883f, 0.0002835690975189209f, 0.0003313342749606818f, 0.0003530073445290327f, 0.00043722844566218555f, 0.0003568313259165734f, 0.00030591338872909546f, 0.00030239770421758294f, 0.00030460814014077187f, 0.0003530546382535249f, 0.0002988787309732288f, 0.0002906947338487953f, 0.0002799547801259905f, 0.00024531350936740637f, 0.0002886744914576411f, 0.00026949524180963635f, 0.00030630797846242785f, 0.0003065851633436978f, 0.0002670529065653682f, 0.00025240337708964944f, 0.0002964611630886793f, 0.00027584124472923577f, 0.00030833735945634544f, 0.00035637462860904634f, 0.0003104076022282243f, 0.00028177659260109067f, 0.00033155467826873064f, 0.00033786692074500024f, 0.0002546170144341886f, 0.0002916785597335547f, 0.00028739828849211335f, 0.00022371744853444397f, 0.00022611291205976158f, 0.00027585902716964483f, 0.0004601823748089373f, 0.00026004810933955014f, 0.0003647318226285279f, 0.0002710474072955549f, 0.0002682192425709218f, 0.0002959358971565962f, 0.00041604446596466005f, 0.0002767631958704442f, 0.00027618027525022626f, 0.00025407897192053497f, 0.0002625418419484049f, 0.00023355302982963622f, 0.0002903668791987002f, 0.00026931334286928177f, 0.00030973731190897524f, 0.00027866719756275415f, 0.0003177885082550347f, 0.0002621506282594055f, 0.00025203186669386923f, 0.0002614992845337838f, 0.0003002006560564041f, 0.0003686819109134376f, 0.0003056761051993817f, 0.00026413638261146843f, 0.00026349889230914414f, 0.00022335948597174138f, 0.00023850110301282257f, 0.00026135967345908284f, 0.0002869781164918095f, 0.0002286095404997468f, 0.0003659409412648529f, 0.0002513474610168487f, 0.0002592424862086773f, 0.00025451352121308446f, 0.0002788239507935941f, 0.00024050084175541997f, 0.00030585352214984596f, 0.00023335017613135278f, 0.00022833059483673424f, 0.0003298974479548633f, 0.00024385507276747376f, 0.00031964090885594487f, 0.00031364511232823133f, 0.00031464468338526785f, 0.00027350804884918034f, 0.00030706488178111613f, 0.00029582949355244637f, 0.0003897516580764204f, 0.00028354665846563876f, 0.00026004837127402425f, 0.00023014238104224205f, 0.00036910848575644195f, 0.0002854540944099426f, 0.00026011982117779553f, 0.00028499975451268256f, 0.00020996559760533273f, 0.00030790656455792487f, 0.0003728965239133686f, 0.0003371194179635495f, 0.0002525803283788264f, 0.0003602757933549583f, 0.00026386286481283605f, 0.00030811913893558085f, 0.00025986236869357526f, 0.0002661511825863272f, 0.00031470219255425036f, 0.00024002949066925794f, 0.00028507591923698783f, 0.00028955136076547205f, 0.00035236970870755613f, 0.00024656843743287027f, 0.00021179334726184607f, 0.0003323223500046879f, 0.0004147982399445027f, 0.0003539993485901505f, 0.0003907927020918578f, 0.00030398607486858964f, 0.0003048826474696398f, 0.00024391022452618927f, 0.00033116774284280837f, 0.0002580499858595431f, 0.0003073622356168926f, 0.00026078635710291564f, 0.000254102167673409f, 0.0002484009601175785f, 0.00030857944511808455f, 0.000325390778016299f, 0.00030821398831903934f, 0.00028922982164658606f, 0.00031194795155897737f, 0.0002711204579100013f, 0.0002881447144318372f, 0.00023385885288007557f, 0.00025080269551835954f, 0.00027968495851382613f, 0.00031120688072405756f, 0.00028808231581933796f, 0.00030531774973496795f, 0.0002972198708448559f, 0.0003069210215471685f, 0.000254757993388921f, 0.0003036380803678185f, 0.00024700380163267255f, 0.0002925136359408498f, 0.0002691306290216744f, 0.0002541298745200038f, 0.0002486096345819533f, 0.0002929234178736806f, 0.00028498057508841157f, 0.0002646725042723119f, 0.00030481835710816085f, 0.0002422870311420411f, 0.0002679051540326327f, 0.00028333038790151477f, 0.00025918189203366637f, 0.00036819049273617566f, 0.00028278972604312f, 0.00032204241142608225f, 0.00027231848798692226f, 0.00040530820842832327f, 0.0002572393568698317f, 0.00031398714054375887f, 0.00030986490310169756f, 0.00027928611962124705f, 0.0004058326594531536f, 0.0003904182813130319f, 0.000224448784138076f, 0.0002502313582226634f, 0.0003098022716585547f, 0.0003146021335851401f, 0.0003106300428044051f, 0.00038505159318447113f, 0.0002470449253451079f, 0.00030675422749482095f, 0.00033404180430807173f, 0.00025869719684123993f, 0.00035110185854136944f, 0.00023872456222306937f, 0.000370949535863474f, 0.0003498583100736141f, 0.0002583229506853968f, 0.00027349358424544334f, 0.00033697503386065364f, 0.00031093962024897337f, 0.0002882875851355493f, 0.0003026726481039077f, 0.00024325537378899753f, 0.00023867470736149698f, 0.0002927654713857919f, 0.0002621199528221041f, 0.0004924547392874956f, 0.00032487232238054276f, 0.00034395084367133677f, 0.00026248290669173f, 0.00028749468037858605f, 0.00025301918503828347f, 0.0002993749512825161f, 0.0003142489877063781f, 0.00028600331279449165f, 0.00031716833473183215f, 0.00027579470770433545f, 0.0002701669291127473f, 0.0004037012695334852f, 0.00023224907636176795f, 0.00029955728678032756f, 0.00043220637599006295f, 0.00043264281703159213f, 0.0002483817224856466f, 0.00026777965831570327f, 0.0002512088685762137f, 0.0004261715803295374f, 0.0002779776114039123f, 0.000345889333402738f, 0.000389732769690454f, 0.00034187824348919094f, 0.00031991975265555084f, 0.00029498597723431885f, 0.00029004295356571674f, 0.00028545522945933044f, 0.0003911185194738209f, 0.00029690333758480847f, 0.0005177351995371282f, 0.0002776749897748232f, 0.0002511146303731948f, 0.00025449926033616066f, 0.0003351945779286325f, 0.00024588071391917765f, 0.00027606080402620137f, 0.00030996304121799767f, 0.0003655802283901721f, 0.0002933233918156475f, 0.000318739126669243f, 0.00028705858858302236f, 0.00024035031674429774f, 0.00024236661556642503f, 0.00034369895001873374f, 0.00028397978167049587f, 0.00034670461900532246f, 0.00030008007888682187f, 0.0002671202237252146f, 0.00030779160442762077f, 0.0002377564087510109f, 0.0003531396796461195f, 0.00036202988121658564f, 0.00023577235697302967f, 0.0002826660929713398f, 0.00027401899569667876f, 0.0003036006528418511f, 0.0002359458158025518f, 0.0003045564517378807f, 0.0002968921617139131f, 0.00028126005781814456f, 0.00028873406699858606f, 0.0003247268032282591f, 0.00027815980138257146f, 0.00026647173217497766f, 0.00027581077301874757f, 0.00026778748724609613f, 0.00029713232652284205f, 0.00031176942866295576f, 0.00023634744866285473f, 0.0002829761360771954f, 0.0003229561261832714f, 0.0003250274749007076f, 0.00026476249331608415f, 0.00024075600958894938f, 0.00028283052961342037f, 0.0003141437191516161f, 0.00025944781373254955f, 0.00032141999690793455f, 0.00023952394258230925f, 0.0003186371177434921f, 0.0003282196121290326f, 0.0002664126513991505f, 0.00028017291333526373f, 0.0002933245268650353f, 0.0002694908471312374f, 0.00040548600372858346f, 0.00028479486354626715f, 0.0003368757897987962f, 0.00037276139482855797f, 0.0002547373005654663f, 0.0003496265853755176f, 0.0002788269193843007f, 0.00026725043426267803f, 0.000306373811326921f, 0.00039621206815354526f, 0.00034791076905094087f, 0.00024409728939644992f, 0.00025574059691280127f, 0.0002808220451697707f, 0.00033691199496388435f, 0.00027521615265868604f, 0.0002964888117276132f, 0.00026247871574014425f, 0.00032495337654836476f, 0.000257390143815428f, 0.00031139058410190046f, 0.00025689296307973564f, 0.0003373321669641882f, 0.00036847818410024047f, 0.0002814322942867875f, 0.00024210520496126264f, 0.0002998719282913953f, 0.0002412467001704499f, 0.00023885033442638814f, 0.00024466789909638464f, 0.00021442765137180686f, 0.0002589326468296349f, 0.00035421448410488665f, 0.0003310273459646851f, 0.00025378100690431893f, 0.0002858708321582526f, 0.00028288894100114703f, 0.0002843251568265259f, 0.0003117154410574585f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #169 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(dense_68_weights_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.031913984566926956f),
    AI_PACK_INTQ_ZP(0)))

/* Int quant #170 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(dense_68_bias_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0007226272136904299f),
    AI_PACK_INTQ_ZP(0)))

/* Int quant #171 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_1_scratch1_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #172 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_2_scratch1_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #173 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_4_scratch1_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #174 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_6_scratch1_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #175 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_8_scratch1_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #176 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_9_scratch1_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #177 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_12_scratch1_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #178 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_16_scratch1_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #179 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_17_scratch1_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #180 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_20_scratch1_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #181 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_21_scratch1_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #182 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_24_scratch1_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #183 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_26_scratch1_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #184 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_28_scratch1_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #185 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_29_scratch1_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #186 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_32_scratch1_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.02348734252154827f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #187 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_33_scratch1_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #188 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_36_scratch1_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #189 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_37_scratch1_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #190 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_40_scratch1_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #191 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_41_scratch1_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #192 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_44_scratch1_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #193 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_47_scratch1_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #194 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_48_scratch1_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #195 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_51_scratch1_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #196 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_53_scratch1_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #197 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_55_scratch1_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #198 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_63_scratch1_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #199 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_64_scratch1_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #200 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_66_scratch1_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #201 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_66_scratch2_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/**  Tensor declarations section  *********************************************/
/* Tensor #0 */
AI_TENSOR_OBJ_DECLARE(
  mobilenetv2_0_35_224_input_output, AI_STATIC,
  0, 0x1,
  AI_SHAPE_INIT(4, 1, 3, 224, 224), AI_STRIDE_INIT(4, 1, 1, 3, 672),
  1, &mobilenetv2_0_35_224_input_output_array, &mobilenetv2_0_35_224_input_output_intq)

/* Tensor #1 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_1_output, AI_STATIC,
  1, 0x1,
  AI_SHAPE_INIT(4, 1, 16, 112, 112), AI_STRIDE_INIT(4, 1, 1, 16, 1792),
  1, &conv2d_1_output_array, &conv2d_1_output_intq)

/* Tensor #2 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_2_output, AI_STATIC,
  2, 0x1,
  AI_SHAPE_INIT(4, 1, 16, 112, 112), AI_STRIDE_INIT(4, 1, 1, 16, 1792),
  1, &conv2d_2_output_array, &conv2d_2_output_intq)

/* Tensor #3 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_3_output, AI_STATIC,
  3, 0x1,
  AI_SHAPE_INIT(4, 1, 8, 112, 112), AI_STRIDE_INIT(4, 1, 1, 8, 896),
  1, &conv2d_3_output_array, &conv2d_3_output_intq)

/* Tensor #4 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_4_output, AI_STATIC,
  4, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 112, 112), AI_STRIDE_INIT(4, 1, 1, 48, 5376),
  1, &conv2d_4_output_array, &conv2d_4_output_intq)

/* Tensor #5 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_6_output, AI_STATIC,
  5, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 56, 56), AI_STRIDE_INIT(4, 1, 1, 48, 2688),
  1, &conv2d_6_output_array, &conv2d_6_output_intq)

/* Tensor #6 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_7_output, AI_STATIC,
  6, 0x1,
  AI_SHAPE_INIT(4, 1, 8, 56, 56), AI_STRIDE_INIT(4, 1, 1, 8, 448),
  1, &conv2d_7_output_array, &conv2d_7_output_intq)

/* Tensor #7 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_8_output, AI_STATIC,
  7, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 56, 56), AI_STRIDE_INIT(4, 1, 1, 48, 2688),
  1, &conv2d_8_output_array, &conv2d_8_output_intq)

/* Tensor #8 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_9_output, AI_STATIC,
  8, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 56, 56), AI_STRIDE_INIT(4, 1, 1, 48, 2688),
  1, &conv2d_9_output_array, &conv2d_9_output_intq)

/* Tensor #9 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_10_output, AI_STATIC,
  9, 0x1,
  AI_SHAPE_INIT(4, 1, 8, 56, 56), AI_STRIDE_INIT(4, 1, 1, 8, 448),
  1, &conv2d_10_output_array, &conv2d_10_output_intq)

/* Tensor #10 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_11_output, AI_STATIC,
  10, 0x1,
  AI_SHAPE_INIT(4, 1, 8, 56, 56), AI_STRIDE_INIT(4, 1, 1, 8, 448),
  1, &eltwise_11_output_array, &eltwise_11_output_intq)

/* Tensor #11 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_12_output, AI_STATIC,
  11, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 56, 56), AI_STRIDE_INIT(4, 1, 1, 48, 2688),
  1, &conv2d_12_output_array, &conv2d_12_output_intq)

/* Tensor #12 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_14_output, AI_STATIC,
  12, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 28, 28), AI_STRIDE_INIT(4, 1, 1, 48, 1344),
  1, &conv2d_14_output_array, &conv2d_14_output_intq)

/* Tensor #13 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_15_output, AI_STATIC,
  13, 0x1,
  AI_SHAPE_INIT(4, 1, 16, 28, 28), AI_STRIDE_INIT(4, 1, 1, 16, 448),
  1, &conv2d_15_output_array, &conv2d_15_output_intq)

/* Tensor #14 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_16_output, AI_STATIC,
  14, 0x1,
  AI_SHAPE_INIT(4, 1, 96, 28, 28), AI_STRIDE_INIT(4, 1, 1, 96, 2688),
  1, &conv2d_16_output_array, &conv2d_16_output_intq)

/* Tensor #15 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_17_output, AI_STATIC,
  15, 0x1,
  AI_SHAPE_INIT(4, 1, 96, 28, 28), AI_STRIDE_INIT(4, 1, 1, 96, 2688),
  1, &conv2d_17_output_array, &conv2d_17_output_intq)

/* Tensor #16 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_18_output, AI_STATIC,
  16, 0x1,
  AI_SHAPE_INIT(4, 1, 16, 28, 28), AI_STRIDE_INIT(4, 1, 1, 16, 448),
  1, &conv2d_18_output_array, &conv2d_18_output_intq)

/* Tensor #17 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_19_output, AI_STATIC,
  17, 0x1,
  AI_SHAPE_INIT(4, 1, 16, 28, 28), AI_STRIDE_INIT(4, 1, 1, 16, 448),
  1, &eltwise_19_output_array, &eltwise_19_output_intq)

/* Tensor #18 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_20_output, AI_STATIC,
  18, 0x1,
  AI_SHAPE_INIT(4, 1, 96, 28, 28), AI_STRIDE_INIT(4, 1, 1, 96, 2688),
  1, &conv2d_20_output_array, &conv2d_20_output_intq)

/* Tensor #19 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_21_output, AI_STATIC,
  19, 0x1,
  AI_SHAPE_INIT(4, 1, 96, 28, 28), AI_STRIDE_INIT(4, 1, 1, 96, 2688),
  1, &conv2d_21_output_array, &conv2d_21_output_intq)

/* Tensor #20 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_22_output, AI_STATIC,
  20, 0x1,
  AI_SHAPE_INIT(4, 1, 16, 28, 28), AI_STRIDE_INIT(4, 1, 1, 16, 448),
  1, &conv2d_22_output_array, &conv2d_22_output_intq)

/* Tensor #21 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_23_output, AI_STATIC,
  21, 0x1,
  AI_SHAPE_INIT(4, 1, 16, 28, 28), AI_STRIDE_INIT(4, 1, 1, 16, 448),
  1, &eltwise_23_output_array, &eltwise_23_output_intq)

/* Tensor #22 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_24_output, AI_STATIC,
  22, 0x1,
  AI_SHAPE_INIT(4, 1, 96, 28, 28), AI_STRIDE_INIT(4, 1, 1, 96, 2688),
  1, &conv2d_24_output_array, &conv2d_24_output_intq)

/* Tensor #23 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_26_output, AI_STATIC,
  23, 0x1,
  AI_SHAPE_INIT(4, 1, 96, 14, 14), AI_STRIDE_INIT(4, 1, 1, 96, 1344),
  1, &conv2d_26_output_array, &conv2d_26_output_intq)

/* Tensor #24 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_27_output, AI_STATIC,
  24, 0x1,
  AI_SHAPE_INIT(4, 1, 24, 14, 14), AI_STRIDE_INIT(4, 1, 1, 24, 336),
  1, &conv2d_27_output_array, &conv2d_27_output_intq)

/* Tensor #25 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_28_output, AI_STATIC,
  25, 0x1,
  AI_SHAPE_INIT(4, 1, 144, 14, 14), AI_STRIDE_INIT(4, 1, 1, 144, 2016),
  1, &conv2d_28_output_array, &conv2d_28_output_intq)

/* Tensor #26 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_29_output, AI_STATIC,
  26, 0x1,
  AI_SHAPE_INIT(4, 1, 144, 14, 14), AI_STRIDE_INIT(4, 1, 1, 144, 2016),
  1, &conv2d_29_output_array, &conv2d_29_output_intq)

/* Tensor #27 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_30_output, AI_STATIC,
  27, 0x1,
  AI_SHAPE_INIT(4, 1, 24, 14, 14), AI_STRIDE_INIT(4, 1, 1, 24, 336),
  1, &conv2d_30_output_array, &conv2d_30_output_intq)

/* Tensor #28 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_31_output, AI_STATIC,
  28, 0x1,
  AI_SHAPE_INIT(4, 1, 24, 14, 14), AI_STRIDE_INIT(4, 1, 1, 24, 336),
  1, &eltwise_31_output_array, &eltwise_31_output_intq)

/* Tensor #29 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_32_output, AI_STATIC,
  29, 0x1,
  AI_SHAPE_INIT(4, 1, 144, 14, 14), AI_STRIDE_INIT(4, 1, 1, 144, 2016),
  1, &conv2d_32_output_array, &conv2d_32_output_intq)

/* Tensor #30 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_33_output, AI_STATIC,
  30, 0x1,
  AI_SHAPE_INIT(4, 1, 144, 14, 14), AI_STRIDE_INIT(4, 1, 1, 144, 2016),
  1, &conv2d_33_output_array, &conv2d_33_output_intq)

/* Tensor #31 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_34_output, AI_STATIC,
  31, 0x1,
  AI_SHAPE_INIT(4, 1, 24, 14, 14), AI_STRIDE_INIT(4, 1, 1, 24, 336),
  1, &conv2d_34_output_array, &conv2d_34_output_intq)

/* Tensor #32 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_35_output, AI_STATIC,
  32, 0x1,
  AI_SHAPE_INIT(4, 1, 24, 14, 14), AI_STRIDE_INIT(4, 1, 1, 24, 336),
  1, &eltwise_35_output_array, &eltwise_35_output_intq)

/* Tensor #33 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_36_output, AI_STATIC,
  33, 0x1,
  AI_SHAPE_INIT(4, 1, 144, 14, 14), AI_STRIDE_INIT(4, 1, 1, 144, 2016),
  1, &conv2d_36_output_array, &conv2d_36_output_intq)

/* Tensor #34 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_37_output, AI_STATIC,
  34, 0x1,
  AI_SHAPE_INIT(4, 1, 144, 14, 14), AI_STRIDE_INIT(4, 1, 1, 144, 2016),
  1, &conv2d_37_output_array, &conv2d_37_output_intq)

/* Tensor #35 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_38_output, AI_STATIC,
  35, 0x1,
  AI_SHAPE_INIT(4, 1, 24, 14, 14), AI_STRIDE_INIT(4, 1, 1, 24, 336),
  1, &conv2d_38_output_array, &conv2d_38_output_intq)

/* Tensor #36 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_39_output, AI_STATIC,
  36, 0x1,
  AI_SHAPE_INIT(4, 1, 24, 14, 14), AI_STRIDE_INIT(4, 1, 1, 24, 336),
  1, &eltwise_39_output_array, &eltwise_39_output_intq)

/* Tensor #37 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_40_output, AI_STATIC,
  37, 0x1,
  AI_SHAPE_INIT(4, 1, 144, 14, 14), AI_STRIDE_INIT(4, 1, 1, 144, 2016),
  1, &conv2d_40_output_array, &conv2d_40_output_intq)

/* Tensor #38 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_41_output, AI_STATIC,
  38, 0x1,
  AI_SHAPE_INIT(4, 1, 144, 14, 14), AI_STRIDE_INIT(4, 1, 1, 144, 2016),
  1, &conv2d_41_output_array, &conv2d_41_output_intq)

/* Tensor #39 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_42_output, AI_STATIC,
  39, 0x1,
  AI_SHAPE_INIT(4, 1, 32, 14, 14), AI_STRIDE_INIT(4, 1, 1, 32, 448),
  1, &conv2d_42_output_array, &conv2d_42_output_intq)

/* Tensor #40 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_43_output, AI_STATIC,
  40, 0x1,
  AI_SHAPE_INIT(4, 1, 192, 14, 14), AI_STRIDE_INIT(4, 1, 1, 192, 2688),
  1, &conv2d_43_output_array, &conv2d_43_output_intq)

/* Tensor #41 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_44_output, AI_STATIC,
  41, 0x1,
  AI_SHAPE_INIT(4, 1, 192, 14, 14), AI_STRIDE_INIT(4, 1, 1, 192, 2688),
  1, &conv2d_44_output_array, &conv2d_44_output_intq)

/* Tensor #42 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_45_output, AI_STATIC,
  42, 0x1,
  AI_SHAPE_INIT(4, 1, 32, 14, 14), AI_STRIDE_INIT(4, 1, 1, 32, 448),
  1, &conv2d_45_output_array, &conv2d_45_output_intq)

/* Tensor #43 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_46_output, AI_STATIC,
  43, 0x1,
  AI_SHAPE_INIT(4, 1, 32, 14, 14), AI_STRIDE_INIT(4, 1, 1, 32, 448),
  1, &eltwise_46_output_array, &eltwise_46_output_intq)

/* Tensor #44 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_47_output, AI_STATIC,
  44, 0x1,
  AI_SHAPE_INIT(4, 1, 192, 14, 14), AI_STRIDE_INIT(4, 1, 1, 192, 2688),
  1, &conv2d_47_output_array, &conv2d_47_output_intq)

/* Tensor #45 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_48_output, AI_STATIC,
  45, 0x1,
  AI_SHAPE_INIT(4, 1, 192, 14, 14), AI_STRIDE_INIT(4, 1, 1, 192, 2688),
  1, &conv2d_48_output_array, &conv2d_48_output_intq)

/* Tensor #46 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_49_output, AI_STATIC,
  46, 0x1,
  AI_SHAPE_INIT(4, 1, 32, 14, 14), AI_STRIDE_INIT(4, 1, 1, 32, 448),
  1, &conv2d_49_output_array, &conv2d_49_output_intq)

/* Tensor #47 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_50_output, AI_STATIC,
  47, 0x1,
  AI_SHAPE_INIT(4, 1, 32, 14, 14), AI_STRIDE_INIT(4, 1, 1, 32, 448),
  1, &eltwise_50_output_array, &eltwise_50_output_intq)

/* Tensor #48 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_51_output, AI_STATIC,
  48, 0x1,
  AI_SHAPE_INIT(4, 1, 192, 14, 14), AI_STRIDE_INIT(4, 1, 1, 192, 2688),
  1, &conv2d_51_output_array, &conv2d_51_output_intq)

/* Tensor #49 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_53_output, AI_STATIC,
  49, 0x1,
  AI_SHAPE_INIT(4, 1, 192, 7, 7), AI_STRIDE_INIT(4, 1, 1, 192, 1344),
  1, &conv2d_53_output_array, &conv2d_53_output_intq)

/* Tensor #50 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_54_output, AI_STATIC,
  50, 0x1,
  AI_SHAPE_INIT(4, 1, 56, 7, 7), AI_STRIDE_INIT(4, 1, 1, 56, 392),
  1, &conv2d_54_output_array, &conv2d_54_output_intq)

/* Tensor #51 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_55_output, AI_STATIC,
  51, 0x1,
  AI_SHAPE_INIT(4, 1, 336, 7, 7), AI_STRIDE_INIT(4, 1, 1, 336, 2352),
  1, &conv2d_55_output_array, &conv2d_55_output_intq)

/* Tensor #52 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_56_output, AI_STATIC,
  52, 0x1,
  AI_SHAPE_INIT(4, 1, 336, 7, 7), AI_STRIDE_INIT(4, 1, 1, 336, 2352),
  1, &conv2d_56_output_array, &conv2d_56_output_intq)

/* Tensor #53 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_57_output, AI_STATIC,
  53, 0x1,
  AI_SHAPE_INIT(4, 1, 56, 7, 7), AI_STRIDE_INIT(4, 1, 1, 56, 392),
  1, &conv2d_57_output_array, &conv2d_57_output_intq)

/* Tensor #54 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_58_output, AI_STATIC,
  54, 0x1,
  AI_SHAPE_INIT(4, 1, 56, 7, 7), AI_STRIDE_INIT(4, 1, 1, 56, 392),
  1, &eltwise_58_output_array, &eltwise_58_output_intq)

/* Tensor #55 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_59_output, AI_STATIC,
  55, 0x1,
  AI_SHAPE_INIT(4, 1, 336, 7, 7), AI_STRIDE_INIT(4, 1, 1, 336, 2352),
  1, &conv2d_59_output_array, &conv2d_59_output_intq)

/* Tensor #56 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_60_output, AI_STATIC,
  56, 0x1,
  AI_SHAPE_INIT(4, 1, 336, 7, 7), AI_STRIDE_INIT(4, 1, 1, 336, 2352),
  1, &conv2d_60_output_array, &conv2d_60_output_intq)

/* Tensor #57 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_61_output, AI_STATIC,
  57, 0x1,
  AI_SHAPE_INIT(4, 1, 56, 7, 7), AI_STRIDE_INIT(4, 1, 1, 56, 392),
  1, &conv2d_61_output_array, &conv2d_61_output_intq)

/* Tensor #58 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_62_output, AI_STATIC,
  58, 0x1,
  AI_SHAPE_INIT(4, 1, 56, 7, 7), AI_STRIDE_INIT(4, 1, 1, 56, 392),
  1, &eltwise_62_output_array, &eltwise_62_output_intq)

/* Tensor #59 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_63_output, AI_STATIC,
  59, 0x1,
  AI_SHAPE_INIT(4, 1, 336, 7, 7), AI_STRIDE_INIT(4, 1, 1, 336, 2352),
  1, &conv2d_63_output_array, &conv2d_63_output_intq)

/* Tensor #60 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_64_output, AI_STATIC,
  60, 0x1,
  AI_SHAPE_INIT(4, 1, 336, 7, 7), AI_STRIDE_INIT(4, 1, 1, 336, 2352),
  1, &conv2d_64_output_array, &conv2d_64_output_intq)

/* Tensor #61 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_65_output, AI_STATIC,
  61, 0x1,
  AI_SHAPE_INIT(4, 1, 112, 7, 7), AI_STRIDE_INIT(4, 1, 1, 112, 784),
  1, &conv2d_65_output_array, &conv2d_65_output_intq)

/* Tensor #62 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_66_output, AI_STATIC,
  62, 0x1,
  AI_SHAPE_INIT(4, 1, 1280, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1280, 1280),
  1, &conv2d_66_output_array, &conv2d_66_output_intq)

/* Tensor #63 */
AI_TENSOR_OBJ_DECLARE(
  dense_68_output, AI_STATIC,
  63, 0x1,
  AI_SHAPE_INIT(4, 1, 13, 1, 1), AI_STRIDE_INIT(4, 1, 1, 13, 13),
  1, &dense_68_output_array, &dense_68_output_intq)

/* Tensor #64 */
AI_TENSOR_OBJ_DECLARE(
  dense_68_fmt_conv_output, AI_STATIC,
  64, 0x0,
  AI_SHAPE_INIT(4, 1, 13, 1, 1), AI_STRIDE_INIT(4, 4, 4, 52, 52),
  1, &dense_68_fmt_conv_output_array, NULL)

/* Tensor #65 */
AI_TENSOR_OBJ_DECLARE(
  nl_69_output, AI_STATIC,
  65, 0x0,
  AI_SHAPE_INIT(4, 1, 13, 1, 1), AI_STRIDE_INIT(4, 4, 4, 52, 52),
  1, &nl_69_output_array, NULL)

/* Tensor #66 */
AI_TENSOR_OBJ_DECLARE(
  nl_69_fmt_conv_output, AI_STATIC,
  66, 0x1,
  AI_SHAPE_INIT(4, 1, 13, 1, 1), AI_STRIDE_INIT(4, 1, 1, 13, 13),
  1, &nl_69_fmt_conv_output_array, &nl_69_fmt_conv_output_intq)

/* Tensor #67 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_1_weights, AI_STATIC,
  67, 0x1,
  AI_SHAPE_INIT(4, 3, 3, 3, 16), AI_STRIDE_INIT(4, 1, 3, 9, 27),
  1, &conv2d_1_weights_array, &conv2d_1_weights_intq)

/* Tensor #68 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_1_bias, AI_STATIC,
  68, 0x1,
  AI_SHAPE_INIT(4, 1, 16, 1, 1), AI_STRIDE_INIT(4, 4, 4, 64, 64),
  1, &conv2d_1_bias_array, &conv2d_1_bias_intq)

/* Tensor #69 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_2_weights, AI_STATIC,
  69, 0x1,
  AI_SHAPE_INIT(4, 16, 3, 3, 1), AI_STRIDE_INIT(4, 1, 16, 48, 144),
  1, &conv2d_2_weights_array, &conv2d_2_weights_intq)

/* Tensor #70 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_2_bias, AI_STATIC,
  70, 0x1,
  AI_SHAPE_INIT(4, 1, 16, 1, 1), AI_STRIDE_INIT(4, 4, 4, 64, 64),
  1, &conv2d_2_bias_array, &conv2d_2_bias_intq)

/* Tensor #71 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_3_weights, AI_STATIC,
  71, 0x1,
  AI_SHAPE_INIT(4, 16, 1, 1, 8), AI_STRIDE_INIT(4, 1, 16, 16, 16),
  1, &conv2d_3_weights_array, &conv2d_3_weights_intq)

/* Tensor #72 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_3_bias, AI_STATIC,
  72, 0x1,
  AI_SHAPE_INIT(4, 1, 8, 1, 1), AI_STRIDE_INIT(4, 4, 4, 32, 32),
  1, &conv2d_3_bias_array, &conv2d_3_bias_intq)

/* Tensor #73 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_4_weights, AI_STATIC,
  73, 0x1,
  AI_SHAPE_INIT(4, 8, 1, 1, 48), AI_STRIDE_INIT(4, 1, 8, 8, 8),
  1, &conv2d_4_weights_array, &conv2d_4_weights_intq)

/* Tensor #74 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_4_bias, AI_STATIC,
  74, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 1, 1), AI_STRIDE_INIT(4, 4, 4, 192, 192),
  1, &conv2d_4_bias_array, &conv2d_4_bias_intq)

/* Tensor #75 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_6_weights, AI_STATIC,
  75, 0x1,
  AI_SHAPE_INIT(4, 48, 3, 3, 1), AI_STRIDE_INIT(4, 1, 48, 144, 432),
  1, &conv2d_6_weights_array, &conv2d_6_weights_intq)

/* Tensor #76 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_6_bias, AI_STATIC,
  76, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 1, 1), AI_STRIDE_INIT(4, 4, 4, 192, 192),
  1, &conv2d_6_bias_array, &conv2d_6_bias_intq)

/* Tensor #77 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_7_weights, AI_STATIC,
  77, 0x1,
  AI_SHAPE_INIT(4, 48, 1, 1, 8), AI_STRIDE_INIT(4, 1, 48, 48, 48),
  1, &conv2d_7_weights_array, &conv2d_7_weights_intq)

/* Tensor #78 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_7_bias, AI_STATIC,
  78, 0x1,
  AI_SHAPE_INIT(4, 1, 8, 1, 1), AI_STRIDE_INIT(4, 4, 4, 32, 32),
  1, &conv2d_7_bias_array, &conv2d_7_bias_intq)

/* Tensor #79 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_8_weights, AI_STATIC,
  79, 0x1,
  AI_SHAPE_INIT(4, 8, 1, 1, 48), AI_STRIDE_INIT(4, 1, 8, 8, 8),
  1, &conv2d_8_weights_array, &conv2d_8_weights_intq)

/* Tensor #80 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_8_bias, AI_STATIC,
  80, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 1, 1), AI_STRIDE_INIT(4, 4, 4, 192, 192),
  1, &conv2d_8_bias_array, &conv2d_8_bias_intq)

/* Tensor #81 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_9_weights, AI_STATIC,
  81, 0x1,
  AI_SHAPE_INIT(4, 48, 3, 3, 1), AI_STRIDE_INIT(4, 1, 48, 144, 432),
  1, &conv2d_9_weights_array, &conv2d_9_weights_intq)

/* Tensor #82 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_9_bias, AI_STATIC,
  82, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 1, 1), AI_STRIDE_INIT(4, 4, 4, 192, 192),
  1, &conv2d_9_bias_array, &conv2d_9_bias_intq)

/* Tensor #83 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_10_weights, AI_STATIC,
  83, 0x1,
  AI_SHAPE_INIT(4, 48, 1, 1, 8), AI_STRIDE_INIT(4, 1, 48, 48, 48),
  1, &conv2d_10_weights_array, &conv2d_10_weights_intq)

/* Tensor #84 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_10_bias, AI_STATIC,
  84, 0x1,
  AI_SHAPE_INIT(4, 1, 8, 1, 1), AI_STRIDE_INIT(4, 4, 4, 32, 32),
  1, &conv2d_10_bias_array, &conv2d_10_bias_intq)

/* Tensor #85 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_12_weights, AI_STATIC,
  85, 0x1,
  AI_SHAPE_INIT(4, 8, 1, 1, 48), AI_STRIDE_INIT(4, 1, 8, 8, 8),
  1, &conv2d_12_weights_array, &conv2d_12_weights_intq)

/* Tensor #86 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_12_bias, AI_STATIC,
  86, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 1, 1), AI_STRIDE_INIT(4, 4, 4, 192, 192),
  1, &conv2d_12_bias_array, &conv2d_12_bias_intq)

/* Tensor #87 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_14_weights, AI_STATIC,
  87, 0x1,
  AI_SHAPE_INIT(4, 48, 3, 3, 1), AI_STRIDE_INIT(4, 1, 48, 144, 432),
  1, &conv2d_14_weights_array, &conv2d_14_weights_intq)

/* Tensor #88 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_14_bias, AI_STATIC,
  88, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 1, 1), AI_STRIDE_INIT(4, 4, 4, 192, 192),
  1, &conv2d_14_bias_array, &conv2d_14_bias_intq)

/* Tensor #89 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_15_weights, AI_STATIC,
  89, 0x1,
  AI_SHAPE_INIT(4, 48, 1, 1, 16), AI_STRIDE_INIT(4, 1, 48, 48, 48),
  1, &conv2d_15_weights_array, &conv2d_15_weights_intq)

/* Tensor #90 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_15_bias, AI_STATIC,
  90, 0x1,
  AI_SHAPE_INIT(4, 1, 16, 1, 1), AI_STRIDE_INIT(4, 4, 4, 64, 64),
  1, &conv2d_15_bias_array, &conv2d_15_bias_intq)

/* Tensor #91 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_16_weights, AI_STATIC,
  91, 0x1,
  AI_SHAPE_INIT(4, 16, 1, 1, 96), AI_STRIDE_INIT(4, 1, 16, 16, 16),
  1, &conv2d_16_weights_array, &conv2d_16_weights_intq)

/* Tensor #92 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_16_bias, AI_STATIC,
  92, 0x1,
  AI_SHAPE_INIT(4, 1, 96, 1, 1), AI_STRIDE_INIT(4, 4, 4, 384, 384),
  1, &conv2d_16_bias_array, &conv2d_16_bias_intq)

/* Tensor #93 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_17_weights, AI_STATIC,
  93, 0x1,
  AI_SHAPE_INIT(4, 96, 3, 3, 1), AI_STRIDE_INIT(4, 1, 96, 288, 864),
  1, &conv2d_17_weights_array, &conv2d_17_weights_intq)

/* Tensor #94 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_17_bias, AI_STATIC,
  94, 0x1,
  AI_SHAPE_INIT(4, 1, 96, 1, 1), AI_STRIDE_INIT(4, 4, 4, 384, 384),
  1, &conv2d_17_bias_array, &conv2d_17_bias_intq)

/* Tensor #95 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_18_weights, AI_STATIC,
  95, 0x1,
  AI_SHAPE_INIT(4, 96, 1, 1, 16), AI_STRIDE_INIT(4, 1, 96, 96, 96),
  1, &conv2d_18_weights_array, &conv2d_18_weights_intq)

/* Tensor #96 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_18_bias, AI_STATIC,
  96, 0x1,
  AI_SHAPE_INIT(4, 1, 16, 1, 1), AI_STRIDE_INIT(4, 4, 4, 64, 64),
  1, &conv2d_18_bias_array, &conv2d_18_bias_intq)

/* Tensor #97 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_20_weights, AI_STATIC,
  97, 0x1,
  AI_SHAPE_INIT(4, 16, 1, 1, 96), AI_STRIDE_INIT(4, 1, 16, 16, 16),
  1, &conv2d_20_weights_array, &conv2d_20_weights_intq)

/* Tensor #98 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_20_bias, AI_STATIC,
  98, 0x1,
  AI_SHAPE_INIT(4, 1, 96, 1, 1), AI_STRIDE_INIT(4, 4, 4, 384, 384),
  1, &conv2d_20_bias_array, &conv2d_20_bias_intq)

/* Tensor #99 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_21_weights, AI_STATIC,
  99, 0x1,
  AI_SHAPE_INIT(4, 96, 3, 3, 1), AI_STRIDE_INIT(4, 1, 96, 288, 864),
  1, &conv2d_21_weights_array, &conv2d_21_weights_intq)

/* Tensor #100 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_21_bias, AI_STATIC,
  100, 0x1,
  AI_SHAPE_INIT(4, 1, 96, 1, 1), AI_STRIDE_INIT(4, 4, 4, 384, 384),
  1, &conv2d_21_bias_array, &conv2d_21_bias_intq)

/* Tensor #101 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_22_weights, AI_STATIC,
  101, 0x1,
  AI_SHAPE_INIT(4, 96, 1, 1, 16), AI_STRIDE_INIT(4, 1, 96, 96, 96),
  1, &conv2d_22_weights_array, &conv2d_22_weights_intq)

/* Tensor #102 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_22_bias, AI_STATIC,
  102, 0x1,
  AI_SHAPE_INIT(4, 1, 16, 1, 1), AI_STRIDE_INIT(4, 4, 4, 64, 64),
  1, &conv2d_22_bias_array, &conv2d_22_bias_intq)

/* Tensor #103 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_24_weights, AI_STATIC,
  103, 0x1,
  AI_SHAPE_INIT(4, 16, 1, 1, 96), AI_STRIDE_INIT(4, 1, 16, 16, 16),
  1, &conv2d_24_weights_array, &conv2d_24_weights_intq)

/* Tensor #104 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_24_bias, AI_STATIC,
  104, 0x1,
  AI_SHAPE_INIT(4, 1, 96, 1, 1), AI_STRIDE_INIT(4, 4, 4, 384, 384),
  1, &conv2d_24_bias_array, &conv2d_24_bias_intq)

/* Tensor #105 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_26_weights, AI_STATIC,
  105, 0x1,
  AI_SHAPE_INIT(4, 96, 3, 3, 1), AI_STRIDE_INIT(4, 1, 96, 288, 864),
  1, &conv2d_26_weights_array, &conv2d_26_weights_intq)

/* Tensor #106 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_26_bias, AI_STATIC,
  106, 0x1,
  AI_SHAPE_INIT(4, 1, 96, 1, 1), AI_STRIDE_INIT(4, 4, 4, 384, 384),
  1, &conv2d_26_bias_array, &conv2d_26_bias_intq)

/* Tensor #107 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_27_weights, AI_STATIC,
  107, 0x1,
  AI_SHAPE_INIT(4, 96, 1, 1, 24), AI_STRIDE_INIT(4, 1, 96, 96, 96),
  1, &conv2d_27_weights_array, &conv2d_27_weights_intq)

/* Tensor #108 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_27_bias, AI_STATIC,
  108, 0x1,
  AI_SHAPE_INIT(4, 1, 24, 1, 1), AI_STRIDE_INIT(4, 4, 4, 96, 96),
  1, &conv2d_27_bias_array, &conv2d_27_bias_intq)

/* Tensor #109 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_28_weights, AI_STATIC,
  109, 0x1,
  AI_SHAPE_INIT(4, 24, 1, 1, 144), AI_STRIDE_INIT(4, 1, 24, 24, 24),
  1, &conv2d_28_weights_array, &conv2d_28_weights_intq)

/* Tensor #110 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_28_bias, AI_STATIC,
  110, 0x1,
  AI_SHAPE_INIT(4, 1, 144, 1, 1), AI_STRIDE_INIT(4, 4, 4, 576, 576),
  1, &conv2d_28_bias_array, &conv2d_28_bias_intq)

/* Tensor #111 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_29_weights, AI_STATIC,
  111, 0x1,
  AI_SHAPE_INIT(4, 144, 3, 3, 1), AI_STRIDE_INIT(4, 1, 144, 432, 1296),
  1, &conv2d_29_weights_array, &conv2d_29_weights_intq)

/* Tensor #112 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_29_bias, AI_STATIC,
  112, 0x1,
  AI_SHAPE_INIT(4, 1, 144, 1, 1), AI_STRIDE_INIT(4, 4, 4, 576, 576),
  1, &conv2d_29_bias_array, &conv2d_29_bias_intq)

/* Tensor #113 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_30_weights, AI_STATIC,
  113, 0x1,
  AI_SHAPE_INIT(4, 144, 1, 1, 24), AI_STRIDE_INIT(4, 1, 144, 144, 144),
  1, &conv2d_30_weights_array, &conv2d_30_weights_intq)

/* Tensor #114 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_30_bias, AI_STATIC,
  114, 0x1,
  AI_SHAPE_INIT(4, 1, 24, 1, 1), AI_STRIDE_INIT(4, 4, 4, 96, 96),
  1, &conv2d_30_bias_array, &conv2d_30_bias_intq)

/* Tensor #115 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_32_weights, AI_STATIC,
  115, 0x1,
  AI_SHAPE_INIT(4, 24, 1, 1, 144), AI_STRIDE_INIT(4, 1, 24, 24, 24),
  1, &conv2d_32_weights_array, &conv2d_32_weights_intq)

/* Tensor #116 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_32_bias, AI_STATIC,
  116, 0x1,
  AI_SHAPE_INIT(4, 1, 144, 1, 1), AI_STRIDE_INIT(4, 4, 4, 576, 576),
  1, &conv2d_32_bias_array, &conv2d_32_bias_intq)

/* Tensor #117 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_33_weights, AI_STATIC,
  117, 0x1,
  AI_SHAPE_INIT(4, 144, 3, 3, 1), AI_STRIDE_INIT(4, 1, 144, 432, 1296),
  1, &conv2d_33_weights_array, &conv2d_33_weights_intq)

/* Tensor #118 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_33_bias, AI_STATIC,
  118, 0x1,
  AI_SHAPE_INIT(4, 1, 144, 1, 1), AI_STRIDE_INIT(4, 4, 4, 576, 576),
  1, &conv2d_33_bias_array, &conv2d_33_bias_intq)

/* Tensor #119 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_34_weights, AI_STATIC,
  119, 0x1,
  AI_SHAPE_INIT(4, 144, 1, 1, 24), AI_STRIDE_INIT(4, 1, 144, 144, 144),
  1, &conv2d_34_weights_array, &conv2d_34_weights_intq)

/* Tensor #120 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_34_bias, AI_STATIC,
  120, 0x1,
  AI_SHAPE_INIT(4, 1, 24, 1, 1), AI_STRIDE_INIT(4, 4, 4, 96, 96),
  1, &conv2d_34_bias_array, &conv2d_34_bias_intq)

/* Tensor #121 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_36_weights, AI_STATIC,
  121, 0x1,
  AI_SHAPE_INIT(4, 24, 1, 1, 144), AI_STRIDE_INIT(4, 1, 24, 24, 24),
  1, &conv2d_36_weights_array, &conv2d_36_weights_intq)

/* Tensor #122 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_36_bias, AI_STATIC,
  122, 0x1,
  AI_SHAPE_INIT(4, 1, 144, 1, 1), AI_STRIDE_INIT(4, 4, 4, 576, 576),
  1, &conv2d_36_bias_array, &conv2d_36_bias_intq)

/* Tensor #123 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_37_weights, AI_STATIC,
  123, 0x1,
  AI_SHAPE_INIT(4, 144, 3, 3, 1), AI_STRIDE_INIT(4, 1, 144, 432, 1296),
  1, &conv2d_37_weights_array, &conv2d_37_weights_intq)

/* Tensor #124 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_37_bias, AI_STATIC,
  124, 0x1,
  AI_SHAPE_INIT(4, 1, 144, 1, 1), AI_STRIDE_INIT(4, 4, 4, 576, 576),
  1, &conv2d_37_bias_array, &conv2d_37_bias_intq)

/* Tensor #125 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_38_weights, AI_STATIC,
  125, 0x1,
  AI_SHAPE_INIT(4, 144, 1, 1, 24), AI_STRIDE_INIT(4, 1, 144, 144, 144),
  1, &conv2d_38_weights_array, &conv2d_38_weights_intq)

/* Tensor #126 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_38_bias, AI_STATIC,
  126, 0x1,
  AI_SHAPE_INIT(4, 1, 24, 1, 1), AI_STRIDE_INIT(4, 4, 4, 96, 96),
  1, &conv2d_38_bias_array, &conv2d_38_bias_intq)

/* Tensor #127 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_40_weights, AI_STATIC,
  127, 0x1,
  AI_SHAPE_INIT(4, 24, 1, 1, 144), AI_STRIDE_INIT(4, 1, 24, 24, 24),
  1, &conv2d_40_weights_array, &conv2d_40_weights_intq)

/* Tensor #128 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_40_bias, AI_STATIC,
  128, 0x1,
  AI_SHAPE_INIT(4, 1, 144, 1, 1), AI_STRIDE_INIT(4, 4, 4, 576, 576),
  1, &conv2d_40_bias_array, &conv2d_40_bias_intq)

/* Tensor #129 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_41_weights, AI_STATIC,
  129, 0x1,
  AI_SHAPE_INIT(4, 144, 3, 3, 1), AI_STRIDE_INIT(4, 1, 144, 432, 1296),
  1, &conv2d_41_weights_array, &conv2d_41_weights_intq)

/* Tensor #130 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_41_bias, AI_STATIC,
  130, 0x1,
  AI_SHAPE_INIT(4, 1, 144, 1, 1), AI_STRIDE_INIT(4, 4, 4, 576, 576),
  1, &conv2d_41_bias_array, &conv2d_41_bias_intq)

/* Tensor #131 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_42_weights, AI_STATIC,
  131, 0x1,
  AI_SHAPE_INIT(4, 144, 1, 1, 32), AI_STRIDE_INIT(4, 1, 144, 144, 144),
  1, &conv2d_42_weights_array, &conv2d_42_weights_intq)

/* Tensor #132 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_42_bias, AI_STATIC,
  132, 0x1,
  AI_SHAPE_INIT(4, 1, 32, 1, 1), AI_STRIDE_INIT(4, 4, 4, 128, 128),
  1, &conv2d_42_bias_array, &conv2d_42_bias_intq)

/* Tensor #133 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_43_weights, AI_STATIC,
  133, 0x1,
  AI_SHAPE_INIT(4, 32, 1, 1, 192), AI_STRIDE_INIT(4, 1, 32, 32, 32),
  1, &conv2d_43_weights_array, &conv2d_43_weights_intq)

/* Tensor #134 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_43_bias, AI_STATIC,
  134, 0x1,
  AI_SHAPE_INIT(4, 1, 192, 1, 1), AI_STRIDE_INIT(4, 4, 4, 768, 768),
  1, &conv2d_43_bias_array, &conv2d_43_bias_intq)

/* Tensor #135 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_44_weights, AI_STATIC,
  135, 0x1,
  AI_SHAPE_INIT(4, 192, 3, 3, 1), AI_STRIDE_INIT(4, 1, 192, 576, 1728),
  1, &conv2d_44_weights_array, &conv2d_44_weights_intq)

/* Tensor #136 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_44_bias, AI_STATIC,
  136, 0x1,
  AI_SHAPE_INIT(4, 1, 192, 1, 1), AI_STRIDE_INIT(4, 4, 4, 768, 768),
  1, &conv2d_44_bias_array, &conv2d_44_bias_intq)

/* Tensor #137 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_45_weights, AI_STATIC,
  137, 0x1,
  AI_SHAPE_INIT(4, 192, 1, 1, 32), AI_STRIDE_INIT(4, 1, 192, 192, 192),
  1, &conv2d_45_weights_array, &conv2d_45_weights_intq)

/* Tensor #138 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_45_bias, AI_STATIC,
  138, 0x1,
  AI_SHAPE_INIT(4, 1, 32, 1, 1), AI_STRIDE_INIT(4, 4, 4, 128, 128),
  1, &conv2d_45_bias_array, &conv2d_45_bias_intq)

/* Tensor #139 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_47_weights, AI_STATIC,
  139, 0x1,
  AI_SHAPE_INIT(4, 32, 1, 1, 192), AI_STRIDE_INIT(4, 1, 32, 32, 32),
  1, &conv2d_47_weights_array, &conv2d_47_weights_intq)

/* Tensor #140 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_47_bias, AI_STATIC,
  140, 0x1,
  AI_SHAPE_INIT(4, 1, 192, 1, 1), AI_STRIDE_INIT(4, 4, 4, 768, 768),
  1, &conv2d_47_bias_array, &conv2d_47_bias_intq)

/* Tensor #141 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_48_weights, AI_STATIC,
  141, 0x1,
  AI_SHAPE_INIT(4, 192, 3, 3, 1), AI_STRIDE_INIT(4, 1, 192, 576, 1728),
  1, &conv2d_48_weights_array, &conv2d_48_weights_intq)

/* Tensor #142 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_48_bias, AI_STATIC,
  142, 0x1,
  AI_SHAPE_INIT(4, 1, 192, 1, 1), AI_STRIDE_INIT(4, 4, 4, 768, 768),
  1, &conv2d_48_bias_array, &conv2d_48_bias_intq)

/* Tensor #143 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_49_weights, AI_STATIC,
  143, 0x1,
  AI_SHAPE_INIT(4, 192, 1, 1, 32), AI_STRIDE_INIT(4, 1, 192, 192, 192),
  1, &conv2d_49_weights_array, &conv2d_49_weights_intq)

/* Tensor #144 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_49_bias, AI_STATIC,
  144, 0x1,
  AI_SHAPE_INIT(4, 1, 32, 1, 1), AI_STRIDE_INIT(4, 4, 4, 128, 128),
  1, &conv2d_49_bias_array, &conv2d_49_bias_intq)

/* Tensor #145 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_51_weights, AI_STATIC,
  145, 0x1,
  AI_SHAPE_INIT(4, 32, 1, 1, 192), AI_STRIDE_INIT(4, 1, 32, 32, 32),
  1, &conv2d_51_weights_array, &conv2d_51_weights_intq)

/* Tensor #146 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_51_bias, AI_STATIC,
  146, 0x1,
  AI_SHAPE_INIT(4, 1, 192, 1, 1), AI_STRIDE_INIT(4, 4, 4, 768, 768),
  1, &conv2d_51_bias_array, &conv2d_51_bias_intq)

/* Tensor #147 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_53_weights, AI_STATIC,
  147, 0x1,
  AI_SHAPE_INIT(4, 192, 3, 3, 1), AI_STRIDE_INIT(4, 1, 192, 576, 1728),
  1, &conv2d_53_weights_array, &conv2d_53_weights_intq)

/* Tensor #148 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_53_bias, AI_STATIC,
  148, 0x1,
  AI_SHAPE_INIT(4, 1, 192, 1, 1), AI_STRIDE_INIT(4, 4, 4, 768, 768),
  1, &conv2d_53_bias_array, &conv2d_53_bias_intq)

/* Tensor #149 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_54_weights, AI_STATIC,
  149, 0x1,
  AI_SHAPE_INIT(4, 192, 1, 1, 56), AI_STRIDE_INIT(4, 1, 192, 192, 192),
  1, &conv2d_54_weights_array, &conv2d_54_weights_intq)

/* Tensor #150 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_54_bias, AI_STATIC,
  150, 0x1,
  AI_SHAPE_INIT(4, 1, 56, 1, 1), AI_STRIDE_INIT(4, 4, 4, 224, 224),
  1, &conv2d_54_bias_array, &conv2d_54_bias_intq)

/* Tensor #151 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_55_weights, AI_STATIC,
  151, 0x1,
  AI_SHAPE_INIT(4, 56, 1, 1, 336), AI_STRIDE_INIT(4, 1, 56, 56, 56),
  1, &conv2d_55_weights_array, &conv2d_55_weights_intq)

/* Tensor #152 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_55_bias, AI_STATIC,
  152, 0x1,
  AI_SHAPE_INIT(4, 1, 336, 1, 1), AI_STRIDE_INIT(4, 4, 4, 1344, 1344),
  1, &conv2d_55_bias_array, &conv2d_55_bias_intq)

/* Tensor #153 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_56_weights, AI_STATIC,
  153, 0x1,
  AI_SHAPE_INIT(4, 336, 3, 3, 1), AI_STRIDE_INIT(4, 1, 336, 1008, 3024),
  1, &conv2d_56_weights_array, &conv2d_56_weights_intq)

/* Tensor #154 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_56_bias, AI_STATIC,
  154, 0x1,
  AI_SHAPE_INIT(4, 1, 336, 1, 1), AI_STRIDE_INIT(4, 4, 4, 1344, 1344),
  1, &conv2d_56_bias_array, &conv2d_56_bias_intq)

/* Tensor #155 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_57_weights, AI_STATIC,
  155, 0x1,
  AI_SHAPE_INIT(4, 336, 1, 1, 56), AI_STRIDE_INIT(4, 1, 336, 336, 336),
  1, &conv2d_57_weights_array, &conv2d_57_weights_intq)

/* Tensor #156 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_57_bias, AI_STATIC,
  156, 0x1,
  AI_SHAPE_INIT(4, 1, 56, 1, 1), AI_STRIDE_INIT(4, 4, 4, 224, 224),
  1, &conv2d_57_bias_array, &conv2d_57_bias_intq)

/* Tensor #157 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_59_weights, AI_STATIC,
  157, 0x1,
  AI_SHAPE_INIT(4, 56, 1, 1, 336), AI_STRIDE_INIT(4, 1, 56, 56, 56),
  1, &conv2d_59_weights_array, &conv2d_59_weights_intq)

/* Tensor #158 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_59_bias, AI_STATIC,
  158, 0x1,
  AI_SHAPE_INIT(4, 1, 336, 1, 1), AI_STRIDE_INIT(4, 4, 4, 1344, 1344),
  1, &conv2d_59_bias_array, &conv2d_59_bias_intq)

/* Tensor #159 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_60_weights, AI_STATIC,
  159, 0x1,
  AI_SHAPE_INIT(4, 336, 3, 3, 1), AI_STRIDE_INIT(4, 1, 336, 1008, 3024),
  1, &conv2d_60_weights_array, &conv2d_60_weights_intq)

/* Tensor #160 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_60_bias, AI_STATIC,
  160, 0x1,
  AI_SHAPE_INIT(4, 1, 336, 1, 1), AI_STRIDE_INIT(4, 4, 4, 1344, 1344),
  1, &conv2d_60_bias_array, &conv2d_60_bias_intq)

/* Tensor #161 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_61_weights, AI_STATIC,
  161, 0x1,
  AI_SHAPE_INIT(4, 336, 1, 1, 56), AI_STRIDE_INIT(4, 1, 336, 336, 336),
  1, &conv2d_61_weights_array, &conv2d_61_weights_intq)

/* Tensor #162 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_61_bias, AI_STATIC,
  162, 0x1,
  AI_SHAPE_INIT(4, 1, 56, 1, 1), AI_STRIDE_INIT(4, 4, 4, 224, 224),
  1, &conv2d_61_bias_array, &conv2d_61_bias_intq)

/* Tensor #163 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_63_weights, AI_STATIC,
  163, 0x1,
  AI_SHAPE_INIT(4, 56, 1, 1, 336), AI_STRIDE_INIT(4, 1, 56, 56, 56),
  1, &conv2d_63_weights_array, &conv2d_63_weights_intq)

/* Tensor #164 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_63_bias, AI_STATIC,
  164, 0x1,
  AI_SHAPE_INIT(4, 1, 336, 1, 1), AI_STRIDE_INIT(4, 4, 4, 1344, 1344),
  1, &conv2d_63_bias_array, &conv2d_63_bias_intq)

/* Tensor #165 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_64_weights, AI_STATIC,
  165, 0x1,
  AI_SHAPE_INIT(4, 336, 3, 3, 1), AI_STRIDE_INIT(4, 1, 336, 1008, 3024),
  1, &conv2d_64_weights_array, &conv2d_64_weights_intq)

/* Tensor #166 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_64_bias, AI_STATIC,
  166, 0x1,
  AI_SHAPE_INIT(4, 1, 336, 1, 1), AI_STRIDE_INIT(4, 4, 4, 1344, 1344),
  1, &conv2d_64_bias_array, &conv2d_64_bias_intq)

/* Tensor #167 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_65_weights, AI_STATIC,
  167, 0x1,
  AI_SHAPE_INIT(4, 336, 1, 1, 112), AI_STRIDE_INIT(4, 1, 336, 336, 336),
  1, &conv2d_65_weights_array, &conv2d_65_weights_intq)

/* Tensor #168 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_65_bias, AI_STATIC,
  168, 0x1,
  AI_SHAPE_INIT(4, 1, 112, 1, 1), AI_STRIDE_INIT(4, 4, 4, 448, 448),
  1, &conv2d_65_bias_array, &conv2d_65_bias_intq)

/* Tensor #169 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_66_weights, AI_STATIC,
  169, 0x1,
  AI_SHAPE_INIT(4, 112, 1, 1, 1280), AI_STRIDE_INIT(4, 1, 112, 112, 112),
  1, &conv2d_66_weights_array, &conv2d_66_weights_intq)

/* Tensor #170 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_66_bias, AI_STATIC,
  170, 0x1,
  AI_SHAPE_INIT(4, 1, 1280, 1, 1), AI_STRIDE_INIT(4, 4, 4, 5120, 5120),
  1, &conv2d_66_bias_array, &conv2d_66_bias_intq)

/* Tensor #171 */
AI_TENSOR_OBJ_DECLARE(
  dense_68_weights, AI_STATIC,
  171, 0x1,
  AI_SHAPE_INIT(4, 1280, 13, 1, 1), AI_STRIDE_INIT(4, 1, 1280, 16640, 16640),
  1, &dense_68_weights_array, &dense_68_weights_intq)

/* Tensor #172 */
AI_TENSOR_OBJ_DECLARE(
  dense_68_bias, AI_STATIC,
  172, 0x1,
  AI_SHAPE_INIT(4, 1, 13, 1, 1), AI_STRIDE_INIT(4, 4, 4, 52, 52),
  1, &dense_68_bias_array, &dense_68_bias_intq)

/* Tensor #173 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_1_scratch0, AI_STATIC,
  173, 0x0,
  AI_SHAPE_INIT(4, 1, 1196, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1196, 1196),
  1, &conv2d_1_scratch0_array, NULL)

/* Tensor #174 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_1_scratch1, AI_STATIC,
  174, 0x1,
  AI_SHAPE_INIT(4, 1, 16, 112, 112), AI_STRIDE_INIT(4, 1, 1, 16, 1792),
  1, &conv2d_1_scratch1_array, &conv2d_1_scratch1_intq)

/* Tensor #175 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_2_scratch0, AI_STATIC,
  175, 0x0,
  AI_SHAPE_INIT(4, 1, 593, 1, 1), AI_STRIDE_INIT(4, 1, 1, 593, 593),
  1, &conv2d_2_scratch0_array, NULL)

/* Tensor #176 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_2_scratch1, AI_STATIC,
  176, 0x1,
  AI_SHAPE_INIT(4, 1, 16, 112, 112), AI_STRIDE_INIT(4, 1, 1, 16, 1792),
  1, &conv2d_2_scratch1_array, &conv2d_2_scratch1_intq)

/* Tensor #177 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_3_scratch0, AI_STATIC,
  177, 0x0,
  AI_SHAPE_INIT(4, 1, 144, 1, 1), AI_STRIDE_INIT(4, 1, 1, 144, 144),
  1, &conv2d_3_scratch0_array, NULL)

/* Tensor #178 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_4_scratch0, AI_STATIC,
  178, 0x0,
  AI_SHAPE_INIT(4, 1, 512, 1, 1), AI_STRIDE_INIT(4, 1, 1, 512, 512),
  1, &conv2d_4_scratch0_array, NULL)

/* Tensor #179 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_4_scratch1, AI_STATIC,
  179, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 112, 112), AI_STRIDE_INIT(4, 1, 1, 48, 5376),
  1, &conv2d_4_scratch1_array, &conv2d_4_scratch1_intq)

/* Tensor #180 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_6_scratch0, AI_STATIC,
  180, 0x0,
  AI_SHAPE_INIT(4, 1, 1777, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1777, 1777),
  1, &conv2d_6_scratch0_array, NULL)

/* Tensor #181 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_6_scratch1, AI_STATIC,
  181, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 56, 56), AI_STRIDE_INIT(4, 1, 1, 48, 2688),
  1, &conv2d_6_scratch1_array, &conv2d_6_scratch1_intq)

/* Tensor #182 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_7_scratch0, AI_STATIC,
  182, 0x0,
  AI_SHAPE_INIT(4, 1, 272, 1, 1), AI_STRIDE_INIT(4, 1, 1, 272, 272),
  1, &conv2d_7_scratch0_array, NULL)

/* Tensor #183 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_8_scratch0, AI_STATIC,
  183, 0x0,
  AI_SHAPE_INIT(4, 1, 512, 1, 1), AI_STRIDE_INIT(4, 1, 1, 512, 512),
  1, &conv2d_8_scratch0_array, NULL)

/* Tensor #184 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_8_scratch1, AI_STATIC,
  184, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 56, 56), AI_STRIDE_INIT(4, 1, 1, 48, 2688),
  1, &conv2d_8_scratch1_array, &conv2d_8_scratch1_intq)

/* Tensor #185 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_9_scratch0, AI_STATIC,
  185, 0x0,
  AI_SHAPE_INIT(4, 1, 1777, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1777, 1777),
  1, &conv2d_9_scratch0_array, NULL)

/* Tensor #186 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_9_scratch1, AI_STATIC,
  186, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 56, 56), AI_STRIDE_INIT(4, 1, 1, 48, 2688),
  1, &conv2d_9_scratch1_array, &conv2d_9_scratch1_intq)

/* Tensor #187 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_10_scratch0, AI_STATIC,
  187, 0x0,
  AI_SHAPE_INIT(4, 1, 272, 1, 1), AI_STRIDE_INIT(4, 1, 1, 272, 272),
  1, &conv2d_10_scratch0_array, NULL)

/* Tensor #188 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_12_scratch0, AI_STATIC,
  188, 0x0,
  AI_SHAPE_INIT(4, 1, 512, 1, 1), AI_STRIDE_INIT(4, 1, 1, 512, 512),
  1, &conv2d_12_scratch0_array, NULL)

/* Tensor #189 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_12_scratch1, AI_STATIC,
  189, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 56, 56), AI_STRIDE_INIT(4, 1, 1, 48, 2688),
  1, &conv2d_12_scratch1_array, &conv2d_12_scratch1_intq)

/* Tensor #190 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_14_scratch0, AI_STATIC,
  190, 0x0,
  AI_SHAPE_INIT(4, 1, 1777, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1777, 1777),
  1, &conv2d_14_scratch0_array, NULL)

/* Tensor #191 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_15_scratch0, AI_STATIC,
  191, 0x0,
  AI_SHAPE_INIT(4, 1, 352, 1, 1), AI_STRIDE_INIT(4, 1, 1, 352, 352),
  1, &conv2d_15_scratch0_array, NULL)

/* Tensor #192 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_16_scratch0, AI_STATIC,
  192, 0x0,
  AI_SHAPE_INIT(4, 1, 1024, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1024, 1024),
  1, &conv2d_16_scratch0_array, NULL)

/* Tensor #193 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_16_scratch1, AI_STATIC,
  193, 0x1,
  AI_SHAPE_INIT(4, 1, 96, 28, 28), AI_STRIDE_INIT(4, 1, 1, 96, 2688),
  1, &conv2d_16_scratch1_array, &conv2d_16_scratch1_intq)

/* Tensor #194 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_17_scratch0, AI_STATIC,
  194, 0x0,
  AI_SHAPE_INIT(4, 1, 3553, 1, 1), AI_STRIDE_INIT(4, 1, 1, 3553, 3553),
  1, &conv2d_17_scratch0_array, NULL)

/* Tensor #195 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_17_scratch1, AI_STATIC,
  195, 0x1,
  AI_SHAPE_INIT(4, 1, 96, 28, 28), AI_STRIDE_INIT(4, 1, 1, 96, 2688),
  1, &conv2d_17_scratch1_array, &conv2d_17_scratch1_intq)

/* Tensor #196 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_18_scratch0, AI_STATIC,
  196, 0x0,
  AI_SHAPE_INIT(4, 1, 544, 1, 1), AI_STRIDE_INIT(4, 1, 1, 544, 544),
  1, &conv2d_18_scratch0_array, NULL)

/* Tensor #197 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_20_scratch0, AI_STATIC,
  197, 0x0,
  AI_SHAPE_INIT(4, 1, 1024, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1024, 1024),
  1, &conv2d_20_scratch0_array, NULL)

/* Tensor #198 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_20_scratch1, AI_STATIC,
  198, 0x1,
  AI_SHAPE_INIT(4, 1, 96, 28, 28), AI_STRIDE_INIT(4, 1, 1, 96, 2688),
  1, &conv2d_20_scratch1_array, &conv2d_20_scratch1_intq)

/* Tensor #199 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_21_scratch0, AI_STATIC,
  199, 0x0,
  AI_SHAPE_INIT(4, 1, 3553, 1, 1), AI_STRIDE_INIT(4, 1, 1, 3553, 3553),
  1, &conv2d_21_scratch0_array, NULL)

/* Tensor #200 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_21_scratch1, AI_STATIC,
  200, 0x1,
  AI_SHAPE_INIT(4, 1, 96, 28, 28), AI_STRIDE_INIT(4, 1, 1, 96, 2688),
  1, &conv2d_21_scratch1_array, &conv2d_21_scratch1_intq)

/* Tensor #201 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_22_scratch0, AI_STATIC,
  201, 0x0,
  AI_SHAPE_INIT(4, 1, 544, 1, 1), AI_STRIDE_INIT(4, 1, 1, 544, 544),
  1, &conv2d_22_scratch0_array, NULL)

/* Tensor #202 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_24_scratch0, AI_STATIC,
  202, 0x0,
  AI_SHAPE_INIT(4, 1, 1024, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1024, 1024),
  1, &conv2d_24_scratch0_array, NULL)

/* Tensor #203 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_24_scratch1, AI_STATIC,
  203, 0x1,
  AI_SHAPE_INIT(4, 1, 96, 28, 28), AI_STRIDE_INIT(4, 1, 1, 96, 2688),
  1, &conv2d_24_scratch1_array, &conv2d_24_scratch1_intq)

/* Tensor #204 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_26_scratch0, AI_STATIC,
  204, 0x0,
  AI_SHAPE_INIT(4, 1, 3553, 1, 1), AI_STRIDE_INIT(4, 1, 1, 3553, 3553),
  1, &conv2d_26_scratch0_array, NULL)

/* Tensor #205 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_26_scratch1, AI_STATIC,
  205, 0x1,
  AI_SHAPE_INIT(4, 1, 96, 14, 14), AI_STRIDE_INIT(4, 1, 1, 96, 1344),
  1, &conv2d_26_scratch1_array, &conv2d_26_scratch1_intq)

/* Tensor #206 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_27_scratch0, AI_STATIC,
  206, 0x0,
  AI_SHAPE_INIT(4, 1, 624, 1, 1), AI_STRIDE_INIT(4, 1, 1, 624, 624),
  1, &conv2d_27_scratch0_array, NULL)

/* Tensor #207 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_28_scratch0, AI_STATIC,
  207, 0x0,
  AI_SHAPE_INIT(4, 1, 1536, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1536, 1536),
  1, &conv2d_28_scratch0_array, NULL)

/* Tensor #208 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_28_scratch1, AI_STATIC,
  208, 0x1,
  AI_SHAPE_INIT(4, 1, 144, 14, 14), AI_STRIDE_INIT(4, 1, 1, 144, 2016),
  1, &conv2d_28_scratch1_array, &conv2d_28_scratch1_intq)

/* Tensor #209 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_29_scratch0, AI_STATIC,
  209, 0x0,
  AI_SHAPE_INIT(4, 1, 5329, 1, 1), AI_STRIDE_INIT(4, 1, 1, 5329, 5329),
  1, &conv2d_29_scratch0_array, NULL)

/* Tensor #210 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_29_scratch1, AI_STATIC,
  210, 0x1,
  AI_SHAPE_INIT(4, 1, 144, 14, 14), AI_STRIDE_INIT(4, 1, 1, 144, 2016),
  1, &conv2d_29_scratch1_array, &conv2d_29_scratch1_intq)

/* Tensor #211 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_30_scratch0, AI_STATIC,
  211, 0x0,
  AI_SHAPE_INIT(4, 1, 816, 1, 1), AI_STRIDE_INIT(4, 1, 1, 816, 816),
  1, &conv2d_30_scratch0_array, NULL)

/* Tensor #212 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_32_scratch0, AI_STATIC,
  212, 0x0,
  AI_SHAPE_INIT(4, 1, 1536, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1536, 1536),
  1, &conv2d_32_scratch0_array, NULL)

/* Tensor #213 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_32_scratch1, AI_STATIC,
  213, 0x1,
  AI_SHAPE_INIT(4, 1, 144, 14, 14), AI_STRIDE_INIT(4, 1, 1, 144, 2016),
  1, &conv2d_32_scratch1_array, &conv2d_32_scratch1_intq)

/* Tensor #214 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_33_scratch0, AI_STATIC,
  214, 0x0,
  AI_SHAPE_INIT(4, 1, 5329, 1, 1), AI_STRIDE_INIT(4, 1, 1, 5329, 5329),
  1, &conv2d_33_scratch0_array, NULL)

/* Tensor #215 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_33_scratch1, AI_STATIC,
  215, 0x1,
  AI_SHAPE_INIT(4, 1, 144, 14, 14), AI_STRIDE_INIT(4, 1, 1, 144, 2016),
  1, &conv2d_33_scratch1_array, &conv2d_33_scratch1_intq)

/* Tensor #216 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_34_scratch0, AI_STATIC,
  216, 0x0,
  AI_SHAPE_INIT(4, 1, 816, 1, 1), AI_STRIDE_INIT(4, 1, 1, 816, 816),
  1, &conv2d_34_scratch0_array, NULL)

/* Tensor #217 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_36_scratch0, AI_STATIC,
  217, 0x0,
  AI_SHAPE_INIT(4, 1, 1536, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1536, 1536),
  1, &conv2d_36_scratch0_array, NULL)

/* Tensor #218 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_36_scratch1, AI_STATIC,
  218, 0x1,
  AI_SHAPE_INIT(4, 1, 144, 14, 14), AI_STRIDE_INIT(4, 1, 1, 144, 2016),
  1, &conv2d_36_scratch1_array, &conv2d_36_scratch1_intq)

/* Tensor #219 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_37_scratch0, AI_STATIC,
  219, 0x0,
  AI_SHAPE_INIT(4, 1, 5329, 1, 1), AI_STRIDE_INIT(4, 1, 1, 5329, 5329),
  1, &conv2d_37_scratch0_array, NULL)

/* Tensor #220 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_37_scratch1, AI_STATIC,
  220, 0x1,
  AI_SHAPE_INIT(4, 1, 144, 14, 14), AI_STRIDE_INIT(4, 1, 1, 144, 2016),
  1, &conv2d_37_scratch1_array, &conv2d_37_scratch1_intq)

/* Tensor #221 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_38_scratch0, AI_STATIC,
  221, 0x0,
  AI_SHAPE_INIT(4, 1, 816, 1, 1), AI_STRIDE_INIT(4, 1, 1, 816, 816),
  1, &conv2d_38_scratch0_array, NULL)

/* Tensor #222 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_40_scratch0, AI_STATIC,
  222, 0x0,
  AI_SHAPE_INIT(4, 1, 1536, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1536, 1536),
  1, &conv2d_40_scratch0_array, NULL)

/* Tensor #223 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_40_scratch1, AI_STATIC,
  223, 0x1,
  AI_SHAPE_INIT(4, 1, 144, 14, 14), AI_STRIDE_INIT(4, 1, 1, 144, 2016),
  1, &conv2d_40_scratch1_array, &conv2d_40_scratch1_intq)

/* Tensor #224 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_41_scratch0, AI_STATIC,
  224, 0x0,
  AI_SHAPE_INIT(4, 1, 5329, 1, 1), AI_STRIDE_INIT(4, 1, 1, 5329, 5329),
  1, &conv2d_41_scratch0_array, NULL)

/* Tensor #225 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_41_scratch1, AI_STATIC,
  225, 0x1,
  AI_SHAPE_INIT(4, 1, 144, 14, 14), AI_STRIDE_INIT(4, 1, 1, 144, 2016),
  1, &conv2d_41_scratch1_array, &conv2d_41_scratch1_intq)

/* Tensor #226 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_42_scratch0, AI_STATIC,
  226, 0x0,
  AI_SHAPE_INIT(4, 1, 896, 1, 1), AI_STRIDE_INIT(4, 1, 1, 896, 896),
  1, &conv2d_42_scratch0_array, NULL)

/* Tensor #227 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_43_scratch0, AI_STATIC,
  227, 0x0,
  AI_SHAPE_INIT(4, 1, 2048, 1, 1), AI_STRIDE_INIT(4, 1, 1, 2048, 2048),
  1, &conv2d_43_scratch0_array, NULL)

/* Tensor #228 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_44_scratch0, AI_STATIC,
  228, 0x0,
  AI_SHAPE_INIT(4, 1, 7105, 1, 1), AI_STRIDE_INIT(4, 1, 1, 7105, 7105),
  1, &conv2d_44_scratch0_array, NULL)

/* Tensor #229 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_44_scratch1, AI_STATIC,
  229, 0x1,
  AI_SHAPE_INIT(4, 1, 192, 14, 14), AI_STRIDE_INIT(4, 1, 1, 192, 2688),
  1, &conv2d_44_scratch1_array, &conv2d_44_scratch1_intq)

/* Tensor #230 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_45_scratch0, AI_STATIC,
  230, 0x0,
  AI_SHAPE_INIT(4, 1, 1088, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1088, 1088),
  1, &conv2d_45_scratch0_array, NULL)

/* Tensor #231 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_47_scratch0, AI_STATIC,
  231, 0x0,
  AI_SHAPE_INIT(4, 1, 2048, 1, 1), AI_STRIDE_INIT(4, 1, 1, 2048, 2048),
  1, &conv2d_47_scratch0_array, NULL)

/* Tensor #232 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_47_scratch1, AI_STATIC,
  232, 0x1,
  AI_SHAPE_INIT(4, 1, 192, 14, 14), AI_STRIDE_INIT(4, 1, 1, 192, 2688),
  1, &conv2d_47_scratch1_array, &conv2d_47_scratch1_intq)

/* Tensor #233 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_48_scratch0, AI_STATIC,
  233, 0x0,
  AI_SHAPE_INIT(4, 1, 7105, 1, 1), AI_STRIDE_INIT(4, 1, 1, 7105, 7105),
  1, &conv2d_48_scratch0_array, NULL)

/* Tensor #234 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_48_scratch1, AI_STATIC,
  234, 0x1,
  AI_SHAPE_INIT(4, 1, 192, 14, 14), AI_STRIDE_INIT(4, 1, 1, 192, 2688),
  1, &conv2d_48_scratch1_array, &conv2d_48_scratch1_intq)

/* Tensor #235 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_49_scratch0, AI_STATIC,
  235, 0x0,
  AI_SHAPE_INIT(4, 1, 1088, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1088, 1088),
  1, &conv2d_49_scratch0_array, NULL)

/* Tensor #236 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_51_scratch0, AI_STATIC,
  236, 0x0,
  AI_SHAPE_INIT(4, 1, 2048, 1, 1), AI_STRIDE_INIT(4, 1, 1, 2048, 2048),
  1, &conv2d_51_scratch0_array, NULL)

/* Tensor #237 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_51_scratch1, AI_STATIC,
  237, 0x1,
  AI_SHAPE_INIT(4, 1, 192, 14, 14), AI_STRIDE_INIT(4, 1, 1, 192, 2688),
  1, &conv2d_51_scratch1_array, &conv2d_51_scratch1_intq)

/* Tensor #238 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_53_scratch0, AI_STATIC,
  238, 0x0,
  AI_SHAPE_INIT(4, 1, 7105, 1, 1), AI_STRIDE_INIT(4, 1, 1, 7105, 7105),
  1, &conv2d_53_scratch0_array, NULL)

/* Tensor #239 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_53_scratch1, AI_STATIC,
  239, 0x1,
  AI_SHAPE_INIT(4, 1, 192, 7, 7), AI_STRIDE_INIT(4, 1, 1, 192, 1344),
  1, &conv2d_53_scratch1_array, &conv2d_53_scratch1_intq)

/* Tensor #240 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_54_scratch0, AI_STATIC,
  240, 0x0,
  AI_SHAPE_INIT(4, 1, 1328, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1328, 1328),
  1, &conv2d_54_scratch0_array, NULL)

/* Tensor #241 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_55_scratch0, AI_STATIC,
  241, 0x0,
  AI_SHAPE_INIT(4, 1, 3584, 1, 1), AI_STRIDE_INIT(4, 1, 1, 3584, 3584),
  1, &conv2d_55_scratch0_array, NULL)

/* Tensor #242 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_55_scratch1, AI_STATIC,
  242, 0x1,
  AI_SHAPE_INIT(4, 1, 336, 7, 7), AI_STRIDE_INIT(4, 1, 1, 336, 2352),
  1, &conv2d_55_scratch1_array, &conv2d_55_scratch1_intq)

/* Tensor #243 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_56_scratch0, AI_STATIC,
  243, 0x0,
  AI_SHAPE_INIT(4, 1, 12433, 1, 1), AI_STRIDE_INIT(4, 1, 1, 12433, 12433),
  1, &conv2d_56_scratch0_array, NULL)

/* Tensor #244 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_57_scratch0, AI_STATIC,
  244, 0x0,
  AI_SHAPE_INIT(4, 1, 1904, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1904, 1904),
  1, &conv2d_57_scratch0_array, NULL)

/* Tensor #245 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_59_scratch0, AI_STATIC,
  245, 0x0,
  AI_SHAPE_INIT(4, 1, 3584, 1, 1), AI_STRIDE_INIT(4, 1, 1, 3584, 3584),
  1, &conv2d_59_scratch0_array, NULL)

/* Tensor #246 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_60_scratch0, AI_STATIC,
  246, 0x0,
  AI_SHAPE_INIT(4, 1, 12433, 1, 1), AI_STRIDE_INIT(4, 1, 1, 12433, 12433),
  1, &conv2d_60_scratch0_array, NULL)

/* Tensor #247 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_61_scratch0, AI_STATIC,
  247, 0x0,
  AI_SHAPE_INIT(4, 1, 1904, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1904, 1904),
  1, &conv2d_61_scratch0_array, NULL)

/* Tensor #248 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_63_scratch0, AI_STATIC,
  248, 0x0,
  AI_SHAPE_INIT(4, 1, 3584, 1, 1), AI_STRIDE_INIT(4, 1, 1, 3584, 3584),
  1, &conv2d_63_scratch0_array, NULL)

/* Tensor #249 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_63_scratch1, AI_STATIC,
  249, 0x1,
  AI_SHAPE_INIT(4, 1, 336, 7, 7), AI_STRIDE_INIT(4, 1, 1, 336, 2352),
  1, &conv2d_63_scratch1_array, &conv2d_63_scratch1_intq)

/* Tensor #250 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_64_scratch0, AI_STATIC,
  250, 0x0,
  AI_SHAPE_INIT(4, 1, 12433, 1, 1), AI_STRIDE_INIT(4, 1, 1, 12433, 12433),
  1, &conv2d_64_scratch0_array, NULL)

/* Tensor #251 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_64_scratch1, AI_STATIC,
  251, 0x1,
  AI_SHAPE_INIT(4, 1, 336, 7, 7), AI_STRIDE_INIT(4, 1, 1, 336, 2352),
  1, &conv2d_64_scratch1_array, &conv2d_64_scratch1_intq)

/* Tensor #252 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_65_scratch0, AI_STATIC,
  252, 0x0,
  AI_SHAPE_INIT(4, 1, 2464, 1, 1), AI_STRIDE_INIT(4, 1, 1, 2464, 2464),
  1, &conv2d_65_scratch0_array, NULL)

/* Tensor #253 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_66_scratch0, AI_STATIC,
  253, 0x0,
  AI_SHAPE_INIT(4, 1, 13248, 1, 1), AI_STRIDE_INIT(4, 1, 1, 13248, 13248),
  1, &conv2d_66_scratch0_array, NULL)

/* Tensor #254 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_66_scratch1, AI_STATIC,
  254, 0x1,
  AI_SHAPE_INIT(4, 1, 1280, 7, 7), AI_STRIDE_INIT(4, 1, 1, 1280, 8960),
  1, &conv2d_66_scratch1_array, &conv2d_66_scratch1_intq)

/* Tensor #255 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_66_scratch2, AI_STATIC,
  255, 0x1,
  AI_SHAPE_INIT(4, 1, 1280, 7, 7), AI_STRIDE_INIT(4, 1, 1, 1280, 8960),
  1, &conv2d_66_scratch2_array, &conv2d_66_scratch2_intq)



/**  Layer declarations section  **********************************************/


AI_TENSOR_CHAIN_OBJ_DECLARE(
  nl_69_fmt_conv_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &nl_69_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &nl_69_fmt_conv_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  nl_69_fmt_conv_layer, 69,
  NL_TYPE, 0x0, NULL,
  nl, node_convert,
  &nl_69_fmt_conv_chain,
  NULL, &nl_69_fmt_conv_layer, AI_STATIC, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  nl_69_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &dense_68_fmt_conv_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &nl_69_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  nl_69_layer, 69,
  NL_TYPE, 0x0, NULL,
  nl, forward_sm,
  &nl_69_chain,
  NULL, &nl_69_fmt_conv_layer, AI_STATIC, 
  .nl_params = NULL, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  dense_68_fmt_conv_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &dense_68_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &dense_68_fmt_conv_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  dense_68_fmt_conv_layer, 68,
  NL_TYPE, 0x0, NULL,
  nl, node_convert,
  &dense_68_fmt_conv_chain,
  NULL, &nl_69_layer, AI_STATIC, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  dense_68_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_66_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &dense_68_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &dense_68_weights, &dense_68_bias),
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  dense_68_layer, 68,
  DENSE_TYPE, 0x0, NULL,
  dense, forward_dense_integer_SSSA,
  &dense_68_chain,
  NULL, &dense_68_fmt_conv_layer, AI_STATIC, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_66_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_65_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_66_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_66_weights, &conv2d_66_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_66_scratch0, &conv2d_66_scratch1, &conv2d_66_scratch2)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_66_layer, 67,
  OPTIMIZED_CONV2D_TYPE, 0x0, NULL,
  conv2d_nl_pool, forward_conv2d_nl_pool_integer_SSSA_ch,
  &conv2d_66_chain,
  NULL, &dense_68_layer, AI_STATIC, 
  .groups = 1, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .pool_size = AI_SHAPE_2D_INIT(7, 7), 
  .pool_stride = AI_SHAPE_2D_INIT(7, 7), 
  .pool_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .pool_func = pool_func_ap_array_integer_INT8, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_65_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_64_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_65_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_65_weights, &conv2d_65_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_65_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_65_layer, 65,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d_integer_SSSA_ch,
  &conv2d_65_chain,
  NULL, &conv2d_66_layer, AI_STATIC, 
  .groups = 1, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_64_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_63_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_64_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_64_weights, &conv2d_64_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_64_scratch0, &conv2d_64_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_64_layer, 64,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d_integer_SSSA_ch,
  &conv2d_64_chain,
  NULL, &conv2d_65_layer, AI_STATIC, 
  .groups = 336, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 1, 1, 1, 1), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_63_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_62_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_63_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_63_weights, &conv2d_63_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_63_scratch0, &conv2d_63_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_63_layer, 63,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d_integer_SSSA_ch,
  &conv2d_63_chain,
  NULL, &conv2d_64_layer, AI_STATIC, 
  .groups = 1, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  eltwise_62_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &eltwise_58_output, &conv2d_61_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_62_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  eltwise_62_layer, 62,
  ELTWISE_INTEGER_TYPE, 0x0, NULL,
  eltwise_integer, forward_eltwise_integer_INT8,
  &eltwise_62_chain,
  NULL, &conv2d_63_layer, AI_STATIC, 
  .operation = ai_sum_f32, 
  .buffer_operation = ai_sum_buffer_INT8, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_61_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_60_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_61_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_61_weights, &conv2d_61_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_61_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_61_layer, 61,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d_integer_SSSA_ch,
  &conv2d_61_chain,
  NULL, &eltwise_62_layer, AI_STATIC, 
  .groups = 1, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_60_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_59_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_60_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_60_weights, &conv2d_60_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_60_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_60_layer, 60,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d_integer_SSSA_ch,
  &conv2d_60_chain,
  NULL, &conv2d_61_layer, AI_STATIC, 
  .groups = 336, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 1, 1, 1, 1), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_59_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_58_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_59_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_59_weights, &conv2d_59_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_59_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_59_layer, 59,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d_integer_SSSA_ch,
  &conv2d_59_chain,
  NULL, &conv2d_60_layer, AI_STATIC, 
  .groups = 1, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  eltwise_58_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_54_output, &conv2d_57_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_58_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  eltwise_58_layer, 58,
  ELTWISE_INTEGER_TYPE, 0x0, NULL,
  eltwise_integer, forward_eltwise_integer_INT8,
  &eltwise_58_chain,
  NULL, &conv2d_59_layer, AI_STATIC, 
  .operation = ai_sum_f32, 
  .buffer_operation = ai_sum_buffer_INT8, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_57_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_56_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_57_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_57_weights, &conv2d_57_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_57_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_57_layer, 57,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d_integer_SSSA_ch,
  &conv2d_57_chain,
  NULL, &eltwise_58_layer, AI_STATIC, 
  .groups = 1, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_56_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_55_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_56_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_56_weights, &conv2d_56_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_56_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_56_layer, 56,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d_integer_SSSA_ch,
  &conv2d_56_chain,
  NULL, &conv2d_57_layer, AI_STATIC, 
  .groups = 336, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 1, 1, 1, 1), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_55_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_54_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_55_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_55_weights, &conv2d_55_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_55_scratch0, &conv2d_55_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_55_layer, 55,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d_integer_SSSA_ch,
  &conv2d_55_chain,
  NULL, &conv2d_56_layer, AI_STATIC, 
  .groups = 1, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_54_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_53_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_54_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_54_weights, &conv2d_54_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_54_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_54_layer, 54,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d_integer_SSSA_ch,
  &conv2d_54_chain,
  NULL, &conv2d_55_layer, AI_STATIC, 
  .groups = 1, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_53_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_51_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_53_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_53_weights, &conv2d_53_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_53_scratch0, &conv2d_53_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_53_layer, 53,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d_integer_SSSA_ch,
  &conv2d_53_chain,
  NULL, &conv2d_54_layer, AI_STATIC, 
  .groups = 192, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(2, 2), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 1, 1), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_51_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_50_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_51_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_51_weights, &conv2d_51_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_51_scratch0, &conv2d_51_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_51_layer, 51,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d_integer_SSSA_ch,
  &conv2d_51_chain,
  NULL, &conv2d_53_layer, AI_STATIC, 
  .groups = 1, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  eltwise_50_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &eltwise_46_output, &conv2d_49_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_50_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  eltwise_50_layer, 50,
  ELTWISE_INTEGER_TYPE, 0x0, NULL,
  eltwise_integer, forward_eltwise_integer_INT8,
  &eltwise_50_chain,
  NULL, &conv2d_51_layer, AI_STATIC, 
  .operation = ai_sum_f32, 
  .buffer_operation = ai_sum_buffer_INT8, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_49_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_48_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_49_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_49_weights, &conv2d_49_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_49_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_49_layer, 49,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d_integer_SSSA_ch,
  &conv2d_49_chain,
  NULL, &eltwise_50_layer, AI_STATIC, 
  .groups = 1, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_48_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_47_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_48_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_48_weights, &conv2d_48_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_48_scratch0, &conv2d_48_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_48_layer, 48,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d_integer_SSSA_ch,
  &conv2d_48_chain,
  NULL, &conv2d_49_layer, AI_STATIC, 
  .groups = 192, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 1, 1, 1, 1), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_47_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_46_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_47_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_47_weights, &conv2d_47_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_47_scratch0, &conv2d_47_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_47_layer, 47,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d_integer_SSSA_ch,
  &conv2d_47_chain,
  NULL, &conv2d_48_layer, AI_STATIC, 
  .groups = 1, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  eltwise_46_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_42_output, &conv2d_45_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_46_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  eltwise_46_layer, 46,
  ELTWISE_INTEGER_TYPE, 0x0, NULL,
  eltwise_integer, forward_eltwise_integer_INT8,
  &eltwise_46_chain,
  NULL, &conv2d_47_layer, AI_STATIC, 
  .operation = ai_sum_f32, 
  .buffer_operation = ai_sum_buffer_INT8, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_45_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_44_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_45_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_45_weights, &conv2d_45_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_45_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_45_layer, 45,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d_integer_SSSA_ch,
  &conv2d_45_chain,
  NULL, &eltwise_46_layer, AI_STATIC, 
  .groups = 1, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_44_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_43_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_44_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_44_weights, &conv2d_44_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_44_scratch0, &conv2d_44_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_44_layer, 44,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d_integer_SSSA_ch,
  &conv2d_44_chain,
  NULL, &conv2d_45_layer, AI_STATIC, 
  .groups = 192, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 1, 1, 1, 1), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_43_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_42_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_43_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_43_weights, &conv2d_43_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_43_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_43_layer, 43,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d_integer_SSSA_ch,
  &conv2d_43_chain,
  NULL, &conv2d_44_layer, AI_STATIC, 
  .groups = 1, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_42_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_41_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_42_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_42_weights, &conv2d_42_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_42_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_42_layer, 42,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d_integer_SSSA_ch,
  &conv2d_42_chain,
  NULL, &conv2d_43_layer, AI_STATIC, 
  .groups = 1, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_41_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_40_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_41_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_41_weights, &conv2d_41_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_41_scratch0, &conv2d_41_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_41_layer, 41,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d_integer_SSSA_ch,
  &conv2d_41_chain,
  NULL, &conv2d_42_layer, AI_STATIC, 
  .groups = 144, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 1, 1, 1, 1), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_40_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_39_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_40_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_40_weights, &conv2d_40_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_40_scratch0, &conv2d_40_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_40_layer, 40,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d_integer_SSSA_ch,
  &conv2d_40_chain,
  NULL, &conv2d_41_layer, AI_STATIC, 
  .groups = 1, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  eltwise_39_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &eltwise_35_output, &conv2d_38_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_39_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  eltwise_39_layer, 39,
  ELTWISE_INTEGER_TYPE, 0x0, NULL,
  eltwise_integer, forward_eltwise_integer_INT8,
  &eltwise_39_chain,
  NULL, &conv2d_40_layer, AI_STATIC, 
  .operation = ai_sum_f32, 
  .buffer_operation = ai_sum_buffer_INT8, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_38_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_37_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_38_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_38_weights, &conv2d_38_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_38_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_38_layer, 38,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d_integer_SSSA_ch,
  &conv2d_38_chain,
  NULL, &eltwise_39_layer, AI_STATIC, 
  .groups = 1, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_37_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_36_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_37_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_37_weights, &conv2d_37_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_37_scratch0, &conv2d_37_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_37_layer, 37,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d_integer_SSSA_ch,
  &conv2d_37_chain,
  NULL, &conv2d_38_layer, AI_STATIC, 
  .groups = 144, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 1, 1, 1, 1), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_36_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_35_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_36_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_36_weights, &conv2d_36_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_36_scratch0, &conv2d_36_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_36_layer, 36,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d_integer_SSSA_ch,
  &conv2d_36_chain,
  NULL, &conv2d_37_layer, AI_STATIC, 
  .groups = 1, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  eltwise_35_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &eltwise_31_output, &conv2d_34_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_35_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  eltwise_35_layer, 35,
  ELTWISE_INTEGER_TYPE, 0x0, NULL,
  eltwise_integer, forward_eltwise_integer_INT8,
  &eltwise_35_chain,
  NULL, &conv2d_36_layer, AI_STATIC, 
  .operation = ai_sum_f32, 
  .buffer_operation = ai_sum_buffer_INT8, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_34_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_33_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_34_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_34_weights, &conv2d_34_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_34_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_34_layer, 34,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d_integer_SSSA_ch,
  &conv2d_34_chain,
  NULL, &eltwise_35_layer, AI_STATIC, 
  .groups = 1, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_33_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_32_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_33_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_33_weights, &conv2d_33_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_33_scratch0, &conv2d_33_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_33_layer, 33,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d_integer_SSSA_ch,
  &conv2d_33_chain,
  NULL, &conv2d_34_layer, AI_STATIC, 
  .groups = 144, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 1, 1, 1, 1), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_32_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_31_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_32_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_32_weights, &conv2d_32_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_32_scratch0, &conv2d_32_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_32_layer, 32,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d_integer_SSSA_ch,
  &conv2d_32_chain,
  NULL, &conv2d_33_layer, AI_STATIC, 
  .groups = 1, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  eltwise_31_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_27_output, &conv2d_30_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_31_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  eltwise_31_layer, 31,
  ELTWISE_INTEGER_TYPE, 0x0, NULL,
  eltwise_integer, forward_eltwise_integer_INT8,
  &eltwise_31_chain,
  NULL, &conv2d_32_layer, AI_STATIC, 
  .operation = ai_sum_f32, 
  .buffer_operation = ai_sum_buffer_INT8, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_30_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_29_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_30_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_30_weights, &conv2d_30_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_30_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_30_layer, 30,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d_integer_SSSA_ch,
  &conv2d_30_chain,
  NULL, &eltwise_31_layer, AI_STATIC, 
  .groups = 1, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_29_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_28_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_29_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_29_weights, &conv2d_29_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_29_scratch0, &conv2d_29_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_29_layer, 29,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d_integer_SSSA_ch,
  &conv2d_29_chain,
  NULL, &conv2d_30_layer, AI_STATIC, 
  .groups = 144, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 1, 1, 1, 1), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_28_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_27_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_28_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_28_weights, &conv2d_28_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_28_scratch0, &conv2d_28_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_28_layer, 28,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d_integer_SSSA_ch,
  &conv2d_28_chain,
  NULL, &conv2d_29_layer, AI_STATIC, 
  .groups = 1, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_27_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_26_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_27_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_27_weights, &conv2d_27_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_27_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_27_layer, 27,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d_integer_SSSA_ch,
  &conv2d_27_chain,
  NULL, &conv2d_28_layer, AI_STATIC, 
  .groups = 1, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_26_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_24_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_26_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_26_weights, &conv2d_26_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_26_scratch0, &conv2d_26_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_26_layer, 26,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d_integer_SSSA_ch,
  &conv2d_26_chain,
  NULL, &conv2d_27_layer, AI_STATIC, 
  .groups = 96, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(2, 2), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 1, 1), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_24_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_23_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_24_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_24_weights, &conv2d_24_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_24_scratch0, &conv2d_24_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_24_layer, 24,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d_integer_SSSA_ch,
  &conv2d_24_chain,
  NULL, &conv2d_26_layer, AI_STATIC, 
  .groups = 1, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  eltwise_23_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &eltwise_19_output, &conv2d_22_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_23_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  eltwise_23_layer, 23,
  ELTWISE_INTEGER_TYPE, 0x0, NULL,
  eltwise_integer, forward_eltwise_integer_INT8,
  &eltwise_23_chain,
  NULL, &conv2d_24_layer, AI_STATIC, 
  .operation = ai_sum_f32, 
  .buffer_operation = ai_sum_buffer_INT8, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_22_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_21_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_22_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_22_weights, &conv2d_22_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_22_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_22_layer, 22,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d_integer_SSSA_ch,
  &conv2d_22_chain,
  NULL, &eltwise_23_layer, AI_STATIC, 
  .groups = 1, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_21_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_20_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_21_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_21_weights, &conv2d_21_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_21_scratch0, &conv2d_21_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_21_layer, 21,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d_integer_SSSA_ch,
  &conv2d_21_chain,
  NULL, &conv2d_22_layer, AI_STATIC, 
  .groups = 96, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 1, 1, 1, 1), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_20_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_19_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_20_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_20_weights, &conv2d_20_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_20_scratch0, &conv2d_20_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_20_layer, 20,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d_integer_SSSA_ch,
  &conv2d_20_chain,
  NULL, &conv2d_21_layer, AI_STATIC, 
  .groups = 1, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  eltwise_19_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_15_output, &conv2d_18_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_19_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  eltwise_19_layer, 19,
  ELTWISE_INTEGER_TYPE, 0x0, NULL,
  eltwise_integer, forward_eltwise_integer_INT8,
  &eltwise_19_chain,
  NULL, &conv2d_20_layer, AI_STATIC, 
  .operation = ai_sum_f32, 
  .buffer_operation = ai_sum_buffer_INT8, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_18_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_17_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_18_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_18_weights, &conv2d_18_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_18_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_18_layer, 18,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d_integer_SSSA_ch,
  &conv2d_18_chain,
  NULL, &eltwise_19_layer, AI_STATIC, 
  .groups = 1, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_17_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_16_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_17_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_17_weights, &conv2d_17_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_17_scratch0, &conv2d_17_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_17_layer, 17,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d_integer_SSSA_ch,
  &conv2d_17_chain,
  NULL, &conv2d_18_layer, AI_STATIC, 
  .groups = 96, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 1, 1, 1, 1), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_16_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_15_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_16_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_16_weights, &conv2d_16_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_16_scratch0, &conv2d_16_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_16_layer, 16,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d_integer_SSSA_ch,
  &conv2d_16_chain,
  NULL, &conv2d_17_layer, AI_STATIC, 
  .groups = 1, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_15_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_14_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_15_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_15_weights, &conv2d_15_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_15_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_15_layer, 15,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d_integer_SSSA_ch,
  &conv2d_15_chain,
  NULL, &conv2d_16_layer, AI_STATIC, 
  .groups = 1, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_14_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_12_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_14_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_14_weights, &conv2d_14_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_14_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_14_layer, 13,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d_integer_SSSA_ch,
  &conv2d_14_chain,
  NULL, &conv2d_15_layer, AI_STATIC, 
  .groups = 48, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(2, 2), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 1, 1), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_12_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_11_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_12_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_12_weights, &conv2d_12_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_12_scratch0, &conv2d_12_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_12_layer, 12,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d_integer_SSSA_ch,
  &conv2d_12_chain,
  NULL, &conv2d_14_layer, AI_STATIC, 
  .groups = 1, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  eltwise_11_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_7_output, &conv2d_10_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_11_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  eltwise_11_layer, 11,
  ELTWISE_INTEGER_TYPE, 0x0, NULL,
  eltwise_integer, forward_eltwise_integer_INT8,
  &eltwise_11_chain,
  NULL, &conv2d_12_layer, AI_STATIC, 
  .operation = ai_sum_f32, 
  .buffer_operation = ai_sum_buffer_INT8, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_10_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_9_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_10_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_10_weights, &conv2d_10_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_10_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_10_layer, 10,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d_integer_SSSA_ch,
  &conv2d_10_chain,
  NULL, &eltwise_11_layer, AI_STATIC, 
  .groups = 1, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_9_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_8_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_9_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_9_weights, &conv2d_9_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_9_scratch0, &conv2d_9_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_9_layer, 9,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d_integer_SSSA_ch,
  &conv2d_9_chain,
  NULL, &conv2d_10_layer, AI_STATIC, 
  .groups = 48, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 1, 1, 1, 1), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_8_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_7_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_8_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_8_weights, &conv2d_8_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_8_scratch0, &conv2d_8_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_8_layer, 8,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d_integer_SSSA_ch,
  &conv2d_8_chain,
  NULL, &conv2d_9_layer, AI_STATIC, 
  .groups = 1, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_7_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_6_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_7_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_7_weights, &conv2d_7_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_7_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_7_layer, 7,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d_integer_SSSA_ch,
  &conv2d_7_chain,
  NULL, &conv2d_8_layer, AI_STATIC, 
  .groups = 1, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_6_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_4_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_6_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_6_weights, &conv2d_6_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_6_scratch0, &conv2d_6_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_6_layer, 6,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d_integer_SSSA_ch,
  &conv2d_6_chain,
  NULL, &conv2d_7_layer, AI_STATIC, 
  .groups = 48, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(2, 2), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 1, 1), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_4_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_3_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_4_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_4_weights, &conv2d_4_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_4_scratch0, &conv2d_4_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_4_layer, 4,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d_integer_SSSA_ch,
  &conv2d_4_chain,
  NULL, &conv2d_6_layer, AI_STATIC, 
  .groups = 1, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_3_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_2_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_3_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_3_weights, &conv2d_3_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_3_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_3_layer, 3,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d_integer_SSSA_ch,
  &conv2d_3_chain,
  NULL, &conv2d_4_layer, AI_STATIC, 
  .groups = 1, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_2_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_1_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_2_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_2_weights, &conv2d_2_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_2_scratch0, &conv2d_2_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_2_layer, 2,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d_integer_SSSA_ch,
  &conv2d_2_chain,
  NULL, &conv2d_3_layer, AI_STATIC, 
  .groups = 16, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 1, 1, 1, 1), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_1_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &mobilenetv2_0_35_224_input_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_1_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_1_weights, &conv2d_1_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_1_scratch0, &conv2d_1_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_1_layer, 1,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d_integer_SSSA_ch,
  &conv2d_1_chain,
  NULL, &conv2d_2_layer, AI_STATIC, 
  .groups = 1, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(2, 2), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 1, 1), 
)


AI_NETWORK_OBJ_DECLARE(
  AI_NET_OBJ_INSTANCE, AI_STATIC,
  AI_BUFFER_OBJ_INIT(AI_BUFFER_FORMAT_U8,
                     1, 1, 426900, 1,
                     NULL),
  AI_BUFFER_OBJ_INIT(AI_BUFFER_FORMAT_U8,
                     1, 1, 610784, 1,
                     NULL),
  AI_TENSOR_LIST_IO_OBJ_INIT(AI_FLAG_NONE, AI_NETWORK_IN_NUM, &mobilenetv2_0_35_224_input_output),
  AI_TENSOR_LIST_IO_OBJ_INIT(AI_FLAG_NONE, AI_NETWORK_OUT_NUM, &nl_69_fmt_conv_output),
  &conv2d_1_layer, 0, NULL)



AI_DECLARE_STATIC
ai_bool network_configure_activations(
  ai_network* net_ctx, const ai_network_params* params)
{
  AI_ASSERT(net_ctx)
  AI_UNUSED(net_ctx)

  ai_ptr activations_map[1] = AI_C_ARRAY_INIT;

  if (ai_platform_get_activations_map(activations_map, 1, params)) {
    /* Updating activations (byte) offsets */
    mobilenetv2_0_35_224_input_output_array.data = AI_PTR(NULL);
    mobilenetv2_0_35_224_input_output_array.data_start = AI_PTR(NULL);
    conv2d_1_output_array.data = AI_PTR(activations_map[0] + 312688);
    conv2d_1_output_array.data_start = AI_PTR(activations_map[0] + 312688);
    conv2d_2_output_array.data = AI_PTR(activations_map[0] + 309072);
    conv2d_2_output_array.data_start = AI_PTR(activations_map[0] + 309072);
    conv2d_3_output_array.data = AI_PTR(activations_map[0] + 509920);
    conv2d_3_output_array.data_start = AI_PTR(activations_map[0] + 509920);
    conv2d_4_output_array.data = AI_PTR(activations_map[0] + 2736);
    conv2d_4_output_array.data_start = AI_PTR(activations_map[0] + 2736);
    conv2d_6_output_array.data = AI_PTR(activations_map[0] + 0);
    conv2d_6_output_array.data_start = AI_PTR(activations_map[0] + 0);
    conv2d_7_output_array.data = AI_PTR(activations_map[0] + 150800);
    conv2d_7_output_array.data_start = AI_PTR(activations_map[0] + 150800);
    conv2d_8_output_array.data = AI_PTR(activations_map[0] + 326416);
    conv2d_8_output_array.data_start = AI_PTR(activations_map[0] + 326416);
    conv2d_9_output_array.data = AI_PTR(activations_map[0] + 175888);
    conv2d_9_output_array.data_start = AI_PTR(activations_map[0] + 175888);
    conv2d_10_output_array.data = AI_PTR(activations_map[0] + 272);
    conv2d_10_output_array.data_start = AI_PTR(activations_map[0] + 272);
    eltwise_11_output_array.data = AI_PTR(activations_map[0] + 25360);
    eltwise_11_output_array.data_start = AI_PTR(activations_map[0] + 25360);
    conv2d_12_output_array.data = AI_PTR(activations_map[0] + 200976);
    conv2d_12_output_array.data_start = AI_PTR(activations_map[0] + 200976);
    conv2d_14_output_array.data = AI_PTR(activations_map[0] + 1780);
    conv2d_14_output_array.data_start = AI_PTR(activations_map[0] + 1780);
    conv2d_15_output_array.data = AI_PTR(activations_map[0] + 39412);
    conv2d_15_output_array.data_start = AI_PTR(activations_map[0] + 39412);
    conv2d_16_output_array.data = AI_PTR(activations_map[0] + 127220);
    conv2d_16_output_array.data_start = AI_PTR(activations_map[0] + 127220);
    conv2d_17_output_array.data = AI_PTR(activations_map[0] + 202484);
    conv2d_17_output_array.data_start = AI_PTR(activations_map[0] + 202484);
    conv2d_18_output_array.data = AI_PTR(activations_map[0] + 544);
    conv2d_18_output_array.data_start = AI_PTR(activations_map[0] + 544);
    eltwise_19_output_array.data = AI_PTR(activations_map[0] + 13088);
    eltwise_19_output_array.data_start = AI_PTR(activations_map[0] + 13088);
    conv2d_20_output_array.data = AI_PTR(activations_map[0] + 100896);
    conv2d_20_output_array.data_start = AI_PTR(activations_map[0] + 100896);
    conv2d_21_output_array.data = AI_PTR(activations_map[0] + 176160);
    conv2d_21_output_array.data_start = AI_PTR(activations_map[0] + 176160);
    conv2d_22_output_array.data = AI_PTR(activations_map[0] + 544);
    conv2d_22_output_array.data_start = AI_PTR(activations_map[0] + 544);
    eltwise_23_output_array.data = AI_PTR(activations_map[0] + 25632);
    eltwise_23_output_array.data_start = AI_PTR(activations_map[0] + 25632);
    conv2d_24_output_array.data = AI_PTR(activations_map[0] + 113440);
    conv2d_24_output_array.data_start = AI_PTR(activations_map[0] + 113440);
    conv2d_26_output_array.data = AI_PTR(activations_map[0] + 22372);
    conv2d_26_output_array.data_start = AI_PTR(activations_map[0] + 22372);
    conv2d_27_output_array.data = AI_PTR(activations_map[0] + 624);
    conv2d_27_output_array.data_start = AI_PTR(activations_map[0] + 624);
    conv2d_28_output_array.data = AI_PTR(activations_map[0] + 35088);
    conv2d_28_output_array.data_start = AI_PTR(activations_map[0] + 35088);
    conv2d_29_output_array.data = AI_PTR(activations_map[0] + 91536);
    conv2d_29_output_array.data_start = AI_PTR(activations_map[0] + 91536);
    conv2d_30_output_array.data = AI_PTR(activations_map[0] + 6144);
    conv2d_30_output_array.data_start = AI_PTR(activations_map[0] + 6144);
    eltwise_31_output_array.data = AI_PTR(activations_map[0] + 10848);
    eltwise_31_output_array.data_start = AI_PTR(activations_map[0] + 10848);
    conv2d_32_output_array.data = AI_PTR(activations_map[0] + 43776);
    conv2d_32_output_array.data_start = AI_PTR(activations_map[0] + 43776);
    conv2d_33_output_array.data = AI_PTR(activations_map[0] + 72000);
    conv2d_33_output_array.data_start = AI_PTR(activations_map[0] + 72000);
    conv2d_34_output_array.data = AI_PTR(activations_map[0] + 816);
    conv2d_34_output_array.data_start = AI_PTR(activations_map[0] + 816);
    eltwise_35_output_array.data = AI_PTR(activations_map[0] + 5520);
    eltwise_35_output_array.data_start = AI_PTR(activations_map[0] + 5520);
    conv2d_36_output_array.data = AI_PTR(activations_map[0] + 38448);
    conv2d_36_output_array.data_start = AI_PTR(activations_map[0] + 38448);
    conv2d_37_output_array.data = AI_PTR(activations_map[0] + 66672);
    conv2d_37_output_array.data_start = AI_PTR(activations_map[0] + 66672);
    conv2d_38_output_array.data = AI_PTR(activations_map[0] + 816);
    conv2d_38_output_array.data_start = AI_PTR(activations_map[0] + 816);
    eltwise_39_output_array.data = AI_PTR(activations_map[0] + 10224);
    eltwise_39_output_array.data_start = AI_PTR(activations_map[0] + 10224);
    conv2d_40_output_array.data = AI_PTR(activations_map[0] + 43152);
    conv2d_40_output_array.data_start = AI_PTR(activations_map[0] + 43152);
    conv2d_41_output_array.data = AI_PTR(activations_map[0] + 71376);
    conv2d_41_output_array.data_start = AI_PTR(activations_map[0] + 71376);
    conv2d_42_output_array.data = AI_PTR(activations_map[0] + 896);
    conv2d_42_output_array.data_start = AI_PTR(activations_map[0] + 896);
    conv2d_43_output_array.data = AI_PTR(activations_map[0] + 9216);
    conv2d_43_output_array.data_start = AI_PTR(activations_map[0] + 9216);
    conv2d_44_output_array.data = AI_PTR(activations_map[0] + 91588);
    conv2d_44_output_array.data_start = AI_PTR(activations_map[0] + 91588);
    conv2d_45_output_array.data = AI_PTR(activations_map[0] + 8256);
    conv2d_45_output_array.data_start = AI_PTR(activations_map[0] + 8256);
    eltwise_46_output_array.data = AI_PTR(activations_map[0] + 14528);
    eltwise_46_output_array.data_start = AI_PTR(activations_map[0] + 14528);
    conv2d_47_output_array.data = AI_PTR(activations_map[0] + 58432);
    conv2d_47_output_array.data_start = AI_PTR(activations_map[0] + 58432);
    conv2d_48_output_array.data = AI_PTR(activations_map[0] + 96064);
    conv2d_48_output_array.data_start = AI_PTR(activations_map[0] + 96064);
    conv2d_49_output_array.data = AI_PTR(activations_map[0] + 1088);
    conv2d_49_output_array.data_start = AI_PTR(activations_map[0] + 1088);
    eltwise_50_output_array.data = AI_PTR(activations_map[0] + 7360);
    eltwise_50_output_array.data_start = AI_PTR(activations_map[0] + 7360);
    conv2d_51_output_array.data = AI_PTR(activations_map[0] + 51264);
    conv2d_51_output_array.data_start = AI_PTR(activations_map[0] + 51264);
    conv2d_53_output_array.data = AI_PTR(activations_map[0] + 16516);
    conv2d_53_output_array.data_start = AI_PTR(activations_map[0] + 16516);
    conv2d_54_output_array.data = AI_PTR(activations_map[0] + 1328);
    conv2d_54_output_array.data_start = AI_PTR(activations_map[0] + 1328);
    conv2d_55_output_array.data = AI_PTR(activations_map[0] + 24120);
    conv2d_55_output_array.data_start = AI_PTR(activations_map[0] + 24120);
    conv2d_56_output_array.data = AI_PTR(activations_map[0] + 40584);
    conv2d_56_output_array.data_start = AI_PTR(activations_map[0] + 40584);
    conv2d_57_output_array.data = AI_PTR(activations_map[0] + 5976);
    conv2d_57_output_array.data_start = AI_PTR(activations_map[0] + 5976);
    eltwise_58_output_array.data = AI_PTR(activations_map[0] + 8720);
    eltwise_58_output_array.data_start = AI_PTR(activations_map[0] + 8720);
    conv2d_59_output_array.data = AI_PTR(activations_map[0] + 11464);
    conv2d_59_output_array.data_start = AI_PTR(activations_map[0] + 11464);
    conv2d_60_output_array.data = AI_PTR(activations_map[0] + 40364);
    conv2d_60_output_array.data_start = AI_PTR(activations_map[0] + 40364);
    conv2d_61_output_array.data = AI_PTR(activations_map[0] + 1904);
    conv2d_61_output_array.data_start = AI_PTR(activations_map[0] + 1904);
    eltwise_62_output_array.data = AI_PTR(activations_map[0] + 4648);
    eltwise_62_output_array.data_start = AI_PTR(activations_map[0] + 4648);
    conv2d_63_output_array.data = AI_PTR(activations_map[0] + 23856);
    conv2d_63_output_array.data_start = AI_PTR(activations_map[0] + 23856);
    conv2d_64_output_array.data = AI_PTR(activations_map[0] + 56784);
    conv2d_64_output_array.data_start = AI_PTR(activations_map[0] + 56784);
    conv2d_65_output_array.data = AI_PTR(activations_map[0] + 2464);
    conv2d_65_output_array.data_start = AI_PTR(activations_map[0] + 2464);
    conv2d_66_output_array.data = AI_PTR(activations_map[0] + 0);
    conv2d_66_output_array.data_start = AI_PTR(activations_map[0] + 0);
    dense_68_output_array.data = AI_PTR(activations_map[0] + 1280);
    dense_68_output_array.data_start = AI_PTR(activations_map[0] + 1280);
    dense_68_fmt_conv_output_array.data = AI_PTR(activations_map[0] + 0);
    dense_68_fmt_conv_output_array.data_start = AI_PTR(activations_map[0] + 0);
    nl_69_output_array.data = AI_PTR(activations_map[0] + 52);
    nl_69_output_array.data_start = AI_PTR(activations_map[0] + 52);
    nl_69_fmt_conv_output_array.data = AI_PTR(NULL);
    nl_69_fmt_conv_output_array.data_start = AI_PTR(NULL);
    conv2d_1_scratch0_array.data = AI_PTR(activations_map[0] + 513392);
    conv2d_1_scratch0_array.data_start = AI_PTR(activations_map[0] + 513392);
    conv2d_1_scratch1_array.data = AI_PTR(activations_map[0] + 312688);
    conv2d_1_scratch1_array.data_start = AI_PTR(activations_map[0] + 312688);
    conv2d_2_scratch0_array.data = AI_PTR(activations_map[0] + 513992);
    conv2d_2_scratch0_array.data_start = AI_PTR(activations_map[0] + 513992);
    conv2d_2_scratch1_array.data = AI_PTR(activations_map[0] + 309072);
    conv2d_2_scratch1_array.data_start = AI_PTR(activations_map[0] + 309072);
    conv2d_3_scratch0_array.data = AI_PTR(activations_map[0] + 509776);
    conv2d_3_scratch0_array.data_start = AI_PTR(activations_map[0] + 509776);
    conv2d_4_scratch0_array.data = AI_PTR(activations_map[0] + 610272);
    conv2d_4_scratch0_array.data_start = AI_PTR(activations_map[0] + 610272);
    conv2d_4_scratch1_array.data = AI_PTR(activations_map[0] + 2736);
    conv2d_4_scratch1_array.data_start = AI_PTR(activations_map[0] + 2736);
    conv2d_6_scratch0_array.data = AI_PTR(activations_map[0] + 609004);
    conv2d_6_scratch0_array.data_start = AI_PTR(activations_map[0] + 609004);
    conv2d_6_scratch1_array.data = AI_PTR(activations_map[0] + 0);
    conv2d_6_scratch1_array.data_start = AI_PTR(activations_map[0] + 0);
    conv2d_7_scratch0_array.data = AI_PTR(activations_map[0] + 150528);
    conv2d_7_scratch0_array.data_start = AI_PTR(activations_map[0] + 150528);
    conv2d_8_scratch0_array.data = AI_PTR(activations_map[0] + 0);
    conv2d_8_scratch0_array.data_start = AI_PTR(activations_map[0] + 0);
    conv2d_8_scratch1_array.data = AI_PTR(activations_map[0] + 175888);
    conv2d_8_scratch1_array.data_start = AI_PTR(activations_map[0] + 175888);
    conv2d_9_scratch0_array.data = AI_PTR(activations_map[0] + 0);
    conv2d_9_scratch0_array.data_start = AI_PTR(activations_map[0] + 0);
    conv2d_9_scratch1_array.data = AI_PTR(activations_map[0] + 175888);
    conv2d_9_scratch1_array.data_start = AI_PTR(activations_map[0] + 175888);
    conv2d_10_scratch0_array.data = AI_PTR(activations_map[0] + 0);
    conv2d_10_scratch0_array.data_start = AI_PTR(activations_map[0] + 0);
    conv2d_12_scratch0_array.data = AI_PTR(activations_map[0] + 0);
    conv2d_12_scratch0_array.data_start = AI_PTR(activations_map[0] + 0);
    conv2d_12_scratch1_array.data = AI_PTR(activations_map[0] + 50448);
    conv2d_12_scratch1_array.data_start = AI_PTR(activations_map[0] + 50448);
    conv2d_14_scratch0_array.data = AI_PTR(activations_map[0] + 0);
    conv2d_14_scratch0_array.data_start = AI_PTR(activations_map[0] + 0);
    conv2d_15_scratch0_array.data = AI_PTR(activations_map[0] + 0);
    conv2d_15_scratch0_array.data_start = AI_PTR(activations_map[0] + 0);
    conv2d_16_scratch0_array.data = AI_PTR(activations_map[0] + 0);
    conv2d_16_scratch0_array.data_start = AI_PTR(activations_map[0] + 0);
    conv2d_16_scratch1_array.data = AI_PTR(activations_map[0] + 51956);
    conv2d_16_scratch1_array.data_start = AI_PTR(activations_map[0] + 51956);
    conv2d_17_scratch0_array.data = AI_PTR(activations_map[0] + 0);
    conv2d_17_scratch0_array.data_start = AI_PTR(activations_map[0] + 0);
    conv2d_17_scratch1_array.data = AI_PTR(activations_map[0] + 51956);
    conv2d_17_scratch1_array.data_start = AI_PTR(activations_map[0] + 51956);
    conv2d_18_scratch0_array.data = AI_PTR(activations_map[0] + 0);
    conv2d_18_scratch0_array.data_start = AI_PTR(activations_map[0] + 0);
    conv2d_20_scratch0_array.data = AI_PTR(activations_map[0] + 0);
    conv2d_20_scratch0_array.data_start = AI_PTR(activations_map[0] + 0);
    conv2d_20_scratch1_array.data = AI_PTR(activations_map[0] + 25632);
    conv2d_20_scratch1_array.data_start = AI_PTR(activations_map[0] + 25632);
    conv2d_21_scratch0_array.data = AI_PTR(activations_map[0] + 0);
    conv2d_21_scratch0_array.data_start = AI_PTR(activations_map[0] + 0);
    conv2d_21_scratch1_array.data = AI_PTR(activations_map[0] + 25632);
    conv2d_21_scratch1_array.data_start = AI_PTR(activations_map[0] + 25632);
    conv2d_22_scratch0_array.data = AI_PTR(activations_map[0] + 0);
    conv2d_22_scratch0_array.data_start = AI_PTR(activations_map[0] + 0);
    conv2d_24_scratch0_array.data = AI_PTR(activations_map[0] + 0);
    conv2d_24_scratch0_array.data_start = AI_PTR(activations_map[0] + 0);
    conv2d_24_scratch1_array.data = AI_PTR(activations_map[0] + 38176);
    conv2d_24_scratch1_array.data_start = AI_PTR(activations_map[0] + 38176);
    conv2d_26_scratch0_array.data = AI_PTR(activations_map[0] + 0);
    conv2d_26_scratch0_array.data_start = AI_PTR(activations_map[0] + 0);
    conv2d_26_scratch1_array.data = AI_PTR(activations_map[0] + 3556);
    conv2d_26_scratch1_array.data_start = AI_PTR(activations_map[0] + 3556);
    conv2d_27_scratch0_array.data = AI_PTR(activations_map[0] + 0);
    conv2d_27_scratch0_array.data_start = AI_PTR(activations_map[0] + 0);
    conv2d_28_scratch0_array.data = AI_PTR(activations_map[0] + 5328);
    conv2d_28_scratch0_array.data_start = AI_PTR(activations_map[0] + 5328);
    conv2d_28_scratch1_array.data = AI_PTR(activations_map[0] + 6864);
    conv2d_28_scratch1_array.data_start = AI_PTR(activations_map[0] + 6864);
    conv2d_29_scratch0_array.data = AI_PTR(activations_map[0] + 5328);
    conv2d_29_scratch0_array.data_start = AI_PTR(activations_map[0] + 5328);
    conv2d_29_scratch1_array.data = AI_PTR(activations_map[0] + 63312);
    conv2d_29_scratch1_array.data_start = AI_PTR(activations_map[0] + 63312);
    conv2d_30_scratch0_array.data = AI_PTR(activations_map[0] + 5328);
    conv2d_30_scratch0_array.data_start = AI_PTR(activations_map[0] + 5328);
    conv2d_32_scratch0_array.data = AI_PTR(activations_map[0] + 0);
    conv2d_32_scratch0_array.data_start = AI_PTR(activations_map[0] + 0);
    conv2d_32_scratch1_array.data = AI_PTR(activations_map[0] + 15552);
    conv2d_32_scratch1_array.data_start = AI_PTR(activations_map[0] + 15552);
    conv2d_33_scratch0_array.data = AI_PTR(activations_map[0] + 0);
    conv2d_33_scratch0_array.data_start = AI_PTR(activations_map[0] + 0);
    conv2d_33_scratch1_array.data = AI_PTR(activations_map[0] + 15552);
    conv2d_33_scratch1_array.data_start = AI_PTR(activations_map[0] + 15552);
    conv2d_34_scratch0_array.data = AI_PTR(activations_map[0] + 0);
    conv2d_34_scratch0_array.data_start = AI_PTR(activations_map[0] + 0);
    conv2d_36_scratch0_array.data = AI_PTR(activations_map[0] + 0);
    conv2d_36_scratch0_array.data_start = AI_PTR(activations_map[0] + 0);
    conv2d_36_scratch1_array.data = AI_PTR(activations_map[0] + 10224);
    conv2d_36_scratch1_array.data_start = AI_PTR(activations_map[0] + 10224);
    conv2d_37_scratch0_array.data = AI_PTR(activations_map[0] + 0);
    conv2d_37_scratch0_array.data_start = AI_PTR(activations_map[0] + 0);
    conv2d_37_scratch1_array.data = AI_PTR(activations_map[0] + 10224);
    conv2d_37_scratch1_array.data_start = AI_PTR(activations_map[0] + 10224);
    conv2d_38_scratch0_array.data = AI_PTR(activations_map[0] + 0);
    conv2d_38_scratch0_array.data_start = AI_PTR(activations_map[0] + 0);
    conv2d_40_scratch0_array.data = AI_PTR(activations_map[0] + 0);
    conv2d_40_scratch0_array.data_start = AI_PTR(activations_map[0] + 0);
    conv2d_40_scratch1_array.data = AI_PTR(activations_map[0] + 14928);
    conv2d_40_scratch1_array.data_start = AI_PTR(activations_map[0] + 14928);
    conv2d_41_scratch0_array.data = AI_PTR(activations_map[0] + 0);
    conv2d_41_scratch0_array.data_start = AI_PTR(activations_map[0] + 0);
    conv2d_41_scratch1_array.data = AI_PTR(activations_map[0] + 5332);
    conv2d_41_scratch1_array.data_start = AI_PTR(activations_map[0] + 5332);
    conv2d_42_scratch0_array.data = AI_PTR(activations_map[0] + 0);
    conv2d_42_scratch0_array.data_start = AI_PTR(activations_map[0] + 0);
    conv2d_43_scratch0_array.data = AI_PTR(activations_map[0] + 7168);
    conv2d_43_scratch0_array.data_start = AI_PTR(activations_map[0] + 7168);
    conv2d_44_scratch0_array.data = AI_PTR(activations_map[0] + 46848);
    conv2d_44_scratch0_array.data_start = AI_PTR(activations_map[0] + 46848);
    conv2d_44_scratch1_array.data = AI_PTR(activations_map[0] + 53956);
    conv2d_44_scratch1_array.data_start = AI_PTR(activations_map[0] + 53956);
    conv2d_45_scratch0_array.data = AI_PTR(activations_map[0] + 7168);
    conv2d_45_scratch0_array.data_start = AI_PTR(activations_map[0] + 7168);
    conv2d_47_scratch0_array.data = AI_PTR(activations_map[0] + 0);
    conv2d_47_scratch0_array.data_start = AI_PTR(activations_map[0] + 0);
    conv2d_47_scratch1_array.data = AI_PTR(activations_map[0] + 20800);
    conv2d_47_scratch1_array.data_start = AI_PTR(activations_map[0] + 20800);
    conv2d_48_scratch0_array.data = AI_PTR(activations_map[0] + 0);
    conv2d_48_scratch0_array.data_start = AI_PTR(activations_map[0] + 0);
    conv2d_48_scratch1_array.data = AI_PTR(activations_map[0] + 20800);
    conv2d_48_scratch1_array.data_start = AI_PTR(activations_map[0] + 20800);
    conv2d_49_scratch0_array.data = AI_PTR(activations_map[0] + 0);
    conv2d_49_scratch0_array.data_start = AI_PTR(activations_map[0] + 0);
    conv2d_51_scratch0_array.data = AI_PTR(activations_map[0] + 0);
    conv2d_51_scratch0_array.data_start = AI_PTR(activations_map[0] + 0);
    conv2d_51_scratch1_array.data = AI_PTR(activations_map[0] + 13632);
    conv2d_51_scratch1_array.data_start = AI_PTR(activations_map[0] + 13632);
    conv2d_53_scratch0_array.data = AI_PTR(activations_map[0] + 0);
    conv2d_53_scratch0_array.data_start = AI_PTR(activations_map[0] + 0);
    conv2d_53_scratch1_array.data = AI_PTR(activations_map[0] + 7108);
    conv2d_53_scratch1_array.data_start = AI_PTR(activations_map[0] + 7108);
    conv2d_54_scratch0_array.data = AI_PTR(activations_map[0] + 0);
    conv2d_54_scratch0_array.data_start = AI_PTR(activations_map[0] + 0);
    conv2d_55_scratch0_array.data = AI_PTR(activations_map[0] + 4072);
    conv2d_55_scratch0_array.data_start = AI_PTR(activations_map[0] + 4072);
    conv2d_55_scratch1_array.data = AI_PTR(activations_map[0] + 7656);
    conv2d_55_scratch1_array.data_start = AI_PTR(activations_map[0] + 7656);
    conv2d_56_scratch0_array.data = AI_PTR(activations_map[0] + 4072);
    conv2d_56_scratch0_array.data_start = AI_PTR(activations_map[0] + 4072);
    conv2d_57_scratch0_array.data = AI_PTR(activations_map[0] + 4072);
    conv2d_57_scratch0_array.data_start = AI_PTR(activations_map[0] + 4072);
    conv2d_59_scratch0_array.data = AI_PTR(activations_map[0] + 0);
    conv2d_59_scratch0_array.data_start = AI_PTR(activations_map[0] + 0);
    conv2d_60_scratch0_array.data = AI_PTR(activations_map[0] + 27928);
    conv2d_60_scratch0_array.data_start = AI_PTR(activations_map[0] + 27928);
    conv2d_61_scratch0_array.data = AI_PTR(activations_map[0] + 0);
    conv2d_61_scratch0_array.data_start = AI_PTR(activations_map[0] + 0);
    conv2d_63_scratch0_array.data = AI_PTR(activations_map[0] + 0);
    conv2d_63_scratch0_array.data_start = AI_PTR(activations_map[0] + 0);
    conv2d_63_scratch1_array.data = AI_PTR(activations_map[0] + 7392);
    conv2d_63_scratch1_array.data_start = AI_PTR(activations_map[0] + 7392);
    conv2d_64_scratch0_array.data = AI_PTR(activations_map[0] + 0);
    conv2d_64_scratch0_array.data_start = AI_PTR(activations_map[0] + 0);
    conv2d_64_scratch1_array.data = AI_PTR(activations_map[0] + 40320);
    conv2d_64_scratch1_array.data_start = AI_PTR(activations_map[0] + 40320);
    conv2d_65_scratch0_array.data = AI_PTR(activations_map[0] + 0);
    conv2d_65_scratch0_array.data_start = AI_PTR(activations_map[0] + 0);
    conv2d_66_scratch0_array.data = AI_PTR(activations_map[0] + 7952);
    conv2d_66_scratch0_array.data_start = AI_PTR(activations_map[0] + 7952);
    conv2d_66_scratch1_array.data = AI_PTR(activations_map[0] + 21200);
    conv2d_66_scratch1_array.data_start = AI_PTR(activations_map[0] + 21200);
    conv2d_66_scratch2_array.data = AI_PTR(activations_map[0] + 83920);
    conv2d_66_scratch2_array.data_start = AI_PTR(activations_map[0] + 83920);
    
    return true;
  }
  return false;
}



AI_DECLARE_STATIC
ai_bool network_configure_weights(
  ai_network* net_ctx, const ai_network_params* params)
{
  AI_ASSERT(net_ctx)
  AI_UNUSED(net_ctx)

  ai_ptr weights_map[1] = AI_C_ARRAY_INIT;

  if (ai_platform_get_weights_map(weights_map, 1, params)) {
    /* Updating weights with array addresses */
    
    conv2d_1_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_1_weights_array.data = AI_PTR(weights_map[0] + 0);
    conv2d_1_weights_array.data_start = AI_PTR(weights_map[0] + 0);
    conv2d_1_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_1_bias_array.data = AI_PTR(weights_map[0] + 432);
    conv2d_1_bias_array.data_start = AI_PTR(weights_map[0] + 432);
    conv2d_2_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_2_weights_array.data = AI_PTR(weights_map[0] + 496);
    conv2d_2_weights_array.data_start = AI_PTR(weights_map[0] + 496);
    conv2d_2_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_2_bias_array.data = AI_PTR(weights_map[0] + 640);
    conv2d_2_bias_array.data_start = AI_PTR(weights_map[0] + 640);
    conv2d_3_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_3_weights_array.data = AI_PTR(weights_map[0] + 704);
    conv2d_3_weights_array.data_start = AI_PTR(weights_map[0] + 704);
    conv2d_3_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_3_bias_array.data = AI_PTR(weights_map[0] + 832);
    conv2d_3_bias_array.data_start = AI_PTR(weights_map[0] + 832);
    conv2d_4_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_4_weights_array.data = AI_PTR(weights_map[0] + 864);
    conv2d_4_weights_array.data_start = AI_PTR(weights_map[0] + 864);
    conv2d_4_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_4_bias_array.data = AI_PTR(weights_map[0] + 1248);
    conv2d_4_bias_array.data_start = AI_PTR(weights_map[0] + 1248);
    conv2d_6_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_6_weights_array.data = AI_PTR(weights_map[0] + 1440);
    conv2d_6_weights_array.data_start = AI_PTR(weights_map[0] + 1440);
    conv2d_6_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_6_bias_array.data = AI_PTR(weights_map[0] + 1872);
    conv2d_6_bias_array.data_start = AI_PTR(weights_map[0] + 1872);
    conv2d_7_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_7_weights_array.data = AI_PTR(weights_map[0] + 2064);
    conv2d_7_weights_array.data_start = AI_PTR(weights_map[0] + 2064);
    conv2d_7_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_7_bias_array.data = AI_PTR(weights_map[0] + 2448);
    conv2d_7_bias_array.data_start = AI_PTR(weights_map[0] + 2448);
    conv2d_8_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_8_weights_array.data = AI_PTR(weights_map[0] + 2480);
    conv2d_8_weights_array.data_start = AI_PTR(weights_map[0] + 2480);
    conv2d_8_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_8_bias_array.data = AI_PTR(weights_map[0] + 2864);
    conv2d_8_bias_array.data_start = AI_PTR(weights_map[0] + 2864);
    conv2d_9_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_9_weights_array.data = AI_PTR(weights_map[0] + 3056);
    conv2d_9_weights_array.data_start = AI_PTR(weights_map[0] + 3056);
    conv2d_9_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_9_bias_array.data = AI_PTR(weights_map[0] + 3488);
    conv2d_9_bias_array.data_start = AI_PTR(weights_map[0] + 3488);
    conv2d_10_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_10_weights_array.data = AI_PTR(weights_map[0] + 3680);
    conv2d_10_weights_array.data_start = AI_PTR(weights_map[0] + 3680);
    conv2d_10_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_10_bias_array.data = AI_PTR(weights_map[0] + 4064);
    conv2d_10_bias_array.data_start = AI_PTR(weights_map[0] + 4064);
    conv2d_12_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_12_weights_array.data = AI_PTR(weights_map[0] + 4096);
    conv2d_12_weights_array.data_start = AI_PTR(weights_map[0] + 4096);
    conv2d_12_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_12_bias_array.data = AI_PTR(weights_map[0] + 4480);
    conv2d_12_bias_array.data_start = AI_PTR(weights_map[0] + 4480);
    conv2d_14_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_14_weights_array.data = AI_PTR(weights_map[0] + 4672);
    conv2d_14_weights_array.data_start = AI_PTR(weights_map[0] + 4672);
    conv2d_14_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_14_bias_array.data = AI_PTR(weights_map[0] + 5104);
    conv2d_14_bias_array.data_start = AI_PTR(weights_map[0] + 5104);
    conv2d_15_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_15_weights_array.data = AI_PTR(weights_map[0] + 5296);
    conv2d_15_weights_array.data_start = AI_PTR(weights_map[0] + 5296);
    conv2d_15_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_15_bias_array.data = AI_PTR(weights_map[0] + 6064);
    conv2d_15_bias_array.data_start = AI_PTR(weights_map[0] + 6064);
    conv2d_16_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_16_weights_array.data = AI_PTR(weights_map[0] + 6128);
    conv2d_16_weights_array.data_start = AI_PTR(weights_map[0] + 6128);
    conv2d_16_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_16_bias_array.data = AI_PTR(weights_map[0] + 7664);
    conv2d_16_bias_array.data_start = AI_PTR(weights_map[0] + 7664);
    conv2d_17_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_17_weights_array.data = AI_PTR(weights_map[0] + 8048);
    conv2d_17_weights_array.data_start = AI_PTR(weights_map[0] + 8048);
    conv2d_17_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_17_bias_array.data = AI_PTR(weights_map[0] + 8912);
    conv2d_17_bias_array.data_start = AI_PTR(weights_map[0] + 8912);
    conv2d_18_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_18_weights_array.data = AI_PTR(weights_map[0] + 9296);
    conv2d_18_weights_array.data_start = AI_PTR(weights_map[0] + 9296);
    conv2d_18_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_18_bias_array.data = AI_PTR(weights_map[0] + 10832);
    conv2d_18_bias_array.data_start = AI_PTR(weights_map[0] + 10832);
    conv2d_20_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_20_weights_array.data = AI_PTR(weights_map[0] + 10896);
    conv2d_20_weights_array.data_start = AI_PTR(weights_map[0] + 10896);
    conv2d_20_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_20_bias_array.data = AI_PTR(weights_map[0] + 12432);
    conv2d_20_bias_array.data_start = AI_PTR(weights_map[0] + 12432);
    conv2d_21_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_21_weights_array.data = AI_PTR(weights_map[0] + 12816);
    conv2d_21_weights_array.data_start = AI_PTR(weights_map[0] + 12816);
    conv2d_21_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_21_bias_array.data = AI_PTR(weights_map[0] + 13680);
    conv2d_21_bias_array.data_start = AI_PTR(weights_map[0] + 13680);
    conv2d_22_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_22_weights_array.data = AI_PTR(weights_map[0] + 14064);
    conv2d_22_weights_array.data_start = AI_PTR(weights_map[0] + 14064);
    conv2d_22_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_22_bias_array.data = AI_PTR(weights_map[0] + 15600);
    conv2d_22_bias_array.data_start = AI_PTR(weights_map[0] + 15600);
    conv2d_24_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_24_weights_array.data = AI_PTR(weights_map[0] + 15664);
    conv2d_24_weights_array.data_start = AI_PTR(weights_map[0] + 15664);
    conv2d_24_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_24_bias_array.data = AI_PTR(weights_map[0] + 17200);
    conv2d_24_bias_array.data_start = AI_PTR(weights_map[0] + 17200);
    conv2d_26_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_26_weights_array.data = AI_PTR(weights_map[0] + 17584);
    conv2d_26_weights_array.data_start = AI_PTR(weights_map[0] + 17584);
    conv2d_26_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_26_bias_array.data = AI_PTR(weights_map[0] + 18448);
    conv2d_26_bias_array.data_start = AI_PTR(weights_map[0] + 18448);
    conv2d_27_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_27_weights_array.data = AI_PTR(weights_map[0] + 18832);
    conv2d_27_weights_array.data_start = AI_PTR(weights_map[0] + 18832);
    conv2d_27_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_27_bias_array.data = AI_PTR(weights_map[0] + 21136);
    conv2d_27_bias_array.data_start = AI_PTR(weights_map[0] + 21136);
    conv2d_28_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_28_weights_array.data = AI_PTR(weights_map[0] + 21232);
    conv2d_28_weights_array.data_start = AI_PTR(weights_map[0] + 21232);
    conv2d_28_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_28_bias_array.data = AI_PTR(weights_map[0] + 24688);
    conv2d_28_bias_array.data_start = AI_PTR(weights_map[0] + 24688);
    conv2d_29_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_29_weights_array.data = AI_PTR(weights_map[0] + 25264);
    conv2d_29_weights_array.data_start = AI_PTR(weights_map[0] + 25264);
    conv2d_29_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_29_bias_array.data = AI_PTR(weights_map[0] + 26560);
    conv2d_29_bias_array.data_start = AI_PTR(weights_map[0] + 26560);
    conv2d_30_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_30_weights_array.data = AI_PTR(weights_map[0] + 27136);
    conv2d_30_weights_array.data_start = AI_PTR(weights_map[0] + 27136);
    conv2d_30_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_30_bias_array.data = AI_PTR(weights_map[0] + 30592);
    conv2d_30_bias_array.data_start = AI_PTR(weights_map[0] + 30592);
    conv2d_32_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_32_weights_array.data = AI_PTR(weights_map[0] + 30688);
    conv2d_32_weights_array.data_start = AI_PTR(weights_map[0] + 30688);
    conv2d_32_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_32_bias_array.data = AI_PTR(weights_map[0] + 34144);
    conv2d_32_bias_array.data_start = AI_PTR(weights_map[0] + 34144);
    conv2d_33_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_33_weights_array.data = AI_PTR(weights_map[0] + 34720);
    conv2d_33_weights_array.data_start = AI_PTR(weights_map[0] + 34720);
    conv2d_33_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_33_bias_array.data = AI_PTR(weights_map[0] + 36016);
    conv2d_33_bias_array.data_start = AI_PTR(weights_map[0] + 36016);
    conv2d_34_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_34_weights_array.data = AI_PTR(weights_map[0] + 36592);
    conv2d_34_weights_array.data_start = AI_PTR(weights_map[0] + 36592);
    conv2d_34_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_34_bias_array.data = AI_PTR(weights_map[0] + 40048);
    conv2d_34_bias_array.data_start = AI_PTR(weights_map[0] + 40048);
    conv2d_36_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_36_weights_array.data = AI_PTR(weights_map[0] + 40144);
    conv2d_36_weights_array.data_start = AI_PTR(weights_map[0] + 40144);
    conv2d_36_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_36_bias_array.data = AI_PTR(weights_map[0] + 43600);
    conv2d_36_bias_array.data_start = AI_PTR(weights_map[0] + 43600);
    conv2d_37_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_37_weights_array.data = AI_PTR(weights_map[0] + 44176);
    conv2d_37_weights_array.data_start = AI_PTR(weights_map[0] + 44176);
    conv2d_37_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_37_bias_array.data = AI_PTR(weights_map[0] + 45472);
    conv2d_37_bias_array.data_start = AI_PTR(weights_map[0] + 45472);
    conv2d_38_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_38_weights_array.data = AI_PTR(weights_map[0] + 46048);
    conv2d_38_weights_array.data_start = AI_PTR(weights_map[0] + 46048);
    conv2d_38_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_38_bias_array.data = AI_PTR(weights_map[0] + 49504);
    conv2d_38_bias_array.data_start = AI_PTR(weights_map[0] + 49504);
    conv2d_40_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_40_weights_array.data = AI_PTR(weights_map[0] + 49600);
    conv2d_40_weights_array.data_start = AI_PTR(weights_map[0] + 49600);
    conv2d_40_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_40_bias_array.data = AI_PTR(weights_map[0] + 53056);
    conv2d_40_bias_array.data_start = AI_PTR(weights_map[0] + 53056);
    conv2d_41_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_41_weights_array.data = AI_PTR(weights_map[0] + 53632);
    conv2d_41_weights_array.data_start = AI_PTR(weights_map[0] + 53632);
    conv2d_41_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_41_bias_array.data = AI_PTR(weights_map[0] + 54928);
    conv2d_41_bias_array.data_start = AI_PTR(weights_map[0] + 54928);
    conv2d_42_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_42_weights_array.data = AI_PTR(weights_map[0] + 55504);
    conv2d_42_weights_array.data_start = AI_PTR(weights_map[0] + 55504);
    conv2d_42_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_42_bias_array.data = AI_PTR(weights_map[0] + 60112);
    conv2d_42_bias_array.data_start = AI_PTR(weights_map[0] + 60112);
    conv2d_43_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_43_weights_array.data = AI_PTR(weights_map[0] + 60240);
    conv2d_43_weights_array.data_start = AI_PTR(weights_map[0] + 60240);
    conv2d_43_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_43_bias_array.data = AI_PTR(weights_map[0] + 66384);
    conv2d_43_bias_array.data_start = AI_PTR(weights_map[0] + 66384);
    conv2d_44_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_44_weights_array.data = AI_PTR(weights_map[0] + 67152);
    conv2d_44_weights_array.data_start = AI_PTR(weights_map[0] + 67152);
    conv2d_44_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_44_bias_array.data = AI_PTR(weights_map[0] + 68880);
    conv2d_44_bias_array.data_start = AI_PTR(weights_map[0] + 68880);
    conv2d_45_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_45_weights_array.data = AI_PTR(weights_map[0] + 69648);
    conv2d_45_weights_array.data_start = AI_PTR(weights_map[0] + 69648);
    conv2d_45_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_45_bias_array.data = AI_PTR(weights_map[0] + 75792);
    conv2d_45_bias_array.data_start = AI_PTR(weights_map[0] + 75792);
    conv2d_47_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_47_weights_array.data = AI_PTR(weights_map[0] + 75920);
    conv2d_47_weights_array.data_start = AI_PTR(weights_map[0] + 75920);
    conv2d_47_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_47_bias_array.data = AI_PTR(weights_map[0] + 82064);
    conv2d_47_bias_array.data_start = AI_PTR(weights_map[0] + 82064);
    conv2d_48_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_48_weights_array.data = AI_PTR(weights_map[0] + 82832);
    conv2d_48_weights_array.data_start = AI_PTR(weights_map[0] + 82832);
    conv2d_48_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_48_bias_array.data = AI_PTR(weights_map[0] + 84560);
    conv2d_48_bias_array.data_start = AI_PTR(weights_map[0] + 84560);
    conv2d_49_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_49_weights_array.data = AI_PTR(weights_map[0] + 85328);
    conv2d_49_weights_array.data_start = AI_PTR(weights_map[0] + 85328);
    conv2d_49_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_49_bias_array.data = AI_PTR(weights_map[0] + 91472);
    conv2d_49_bias_array.data_start = AI_PTR(weights_map[0] + 91472);
    conv2d_51_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_51_weights_array.data = AI_PTR(weights_map[0] + 91600);
    conv2d_51_weights_array.data_start = AI_PTR(weights_map[0] + 91600);
    conv2d_51_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_51_bias_array.data = AI_PTR(weights_map[0] + 97744);
    conv2d_51_bias_array.data_start = AI_PTR(weights_map[0] + 97744);
    conv2d_53_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_53_weights_array.data = AI_PTR(weights_map[0] + 98512);
    conv2d_53_weights_array.data_start = AI_PTR(weights_map[0] + 98512);
    conv2d_53_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_53_bias_array.data = AI_PTR(weights_map[0] + 100240);
    conv2d_53_bias_array.data_start = AI_PTR(weights_map[0] + 100240);
    conv2d_54_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_54_weights_array.data = AI_PTR(weights_map[0] + 101008);
    conv2d_54_weights_array.data_start = AI_PTR(weights_map[0] + 101008);
    conv2d_54_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_54_bias_array.data = AI_PTR(weights_map[0] + 111760);
    conv2d_54_bias_array.data_start = AI_PTR(weights_map[0] + 111760);
    conv2d_55_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_55_weights_array.data = AI_PTR(weights_map[0] + 111984);
    conv2d_55_weights_array.data_start = AI_PTR(weights_map[0] + 111984);
    conv2d_55_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_55_bias_array.data = AI_PTR(weights_map[0] + 130800);
    conv2d_55_bias_array.data_start = AI_PTR(weights_map[0] + 130800);
    conv2d_56_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_56_weights_array.data = AI_PTR(weights_map[0] + 132144);
    conv2d_56_weights_array.data_start = AI_PTR(weights_map[0] + 132144);
    conv2d_56_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_56_bias_array.data = AI_PTR(weights_map[0] + 135168);
    conv2d_56_bias_array.data_start = AI_PTR(weights_map[0] + 135168);
    conv2d_57_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_57_weights_array.data = AI_PTR(weights_map[0] + 136512);
    conv2d_57_weights_array.data_start = AI_PTR(weights_map[0] + 136512);
    conv2d_57_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_57_bias_array.data = AI_PTR(weights_map[0] + 155328);
    conv2d_57_bias_array.data_start = AI_PTR(weights_map[0] + 155328);
    conv2d_59_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_59_weights_array.data = AI_PTR(weights_map[0] + 155552);
    conv2d_59_weights_array.data_start = AI_PTR(weights_map[0] + 155552);
    conv2d_59_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_59_bias_array.data = AI_PTR(weights_map[0] + 174368);
    conv2d_59_bias_array.data_start = AI_PTR(weights_map[0] + 174368);
    conv2d_60_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_60_weights_array.data = AI_PTR(weights_map[0] + 175712);
    conv2d_60_weights_array.data_start = AI_PTR(weights_map[0] + 175712);
    conv2d_60_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_60_bias_array.data = AI_PTR(weights_map[0] + 178736);
    conv2d_60_bias_array.data_start = AI_PTR(weights_map[0] + 178736);
    conv2d_61_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_61_weights_array.data = AI_PTR(weights_map[0] + 180080);
    conv2d_61_weights_array.data_start = AI_PTR(weights_map[0] + 180080);
    conv2d_61_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_61_bias_array.data = AI_PTR(weights_map[0] + 198896);
    conv2d_61_bias_array.data_start = AI_PTR(weights_map[0] + 198896);
    conv2d_63_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_63_weights_array.data = AI_PTR(weights_map[0] + 199120);
    conv2d_63_weights_array.data_start = AI_PTR(weights_map[0] + 199120);
    conv2d_63_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_63_bias_array.data = AI_PTR(weights_map[0] + 217936);
    conv2d_63_bias_array.data_start = AI_PTR(weights_map[0] + 217936);
    conv2d_64_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_64_weights_array.data = AI_PTR(weights_map[0] + 219280);
    conv2d_64_weights_array.data_start = AI_PTR(weights_map[0] + 219280);
    conv2d_64_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_64_bias_array.data = AI_PTR(weights_map[0] + 222304);
    conv2d_64_bias_array.data_start = AI_PTR(weights_map[0] + 222304);
    conv2d_65_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_65_weights_array.data = AI_PTR(weights_map[0] + 223648);
    conv2d_65_weights_array.data_start = AI_PTR(weights_map[0] + 223648);
    conv2d_65_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_65_bias_array.data = AI_PTR(weights_map[0] + 261280);
    conv2d_65_bias_array.data_start = AI_PTR(weights_map[0] + 261280);
    conv2d_66_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_66_weights_array.data = AI_PTR(weights_map[0] + 261728);
    conv2d_66_weights_array.data_start = AI_PTR(weights_map[0] + 261728);
    conv2d_66_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_66_bias_array.data = AI_PTR(weights_map[0] + 405088);
    conv2d_66_bias_array.data_start = AI_PTR(weights_map[0] + 405088);
    dense_68_weights_array.format |= AI_FMT_FLAG_CONST;
    dense_68_weights_array.data = AI_PTR(weights_map[0] + 410208);
    dense_68_weights_array.data_start = AI_PTR(weights_map[0] + 410208);
    dense_68_bias_array.format |= AI_FMT_FLAG_CONST;
    dense_68_bias_array.data = AI_PTR(weights_map[0] + 426848);
    dense_68_bias_array.data_start = AI_PTR(weights_map[0] + 426848);
    return true;
  }
  return false;
}


/**  PUBLIC APIs SECTION  *****************************************************/
AI_DEPRECATED
AI_API_ENTRY
ai_bool ai_network_get_info(
  ai_handle network, ai_network_report* report)
{
  ai_network* net_ctx = AI_NETWORK_ACQUIRE_CTX(network);

  if (report && net_ctx)
  {
    ai_network_report r = {
      .model_name        = AI_NETWORK_MODEL_NAME,
      .model_signature   = AI_NETWORK_MODEL_SIGNATURE,
      .model_datetime    = AI_TOOLS_DATE_TIME,
      
      .compile_datetime  = AI_TOOLS_COMPILE_TIME,
      
      .runtime_revision  = ai_platform_runtime_get_revision(),
      .runtime_version   = ai_platform_runtime_get_version(),

      .tool_revision     = AI_TOOLS_REVISION_ID,
      .tool_version      = {AI_TOOLS_VERSION_MAJOR, AI_TOOLS_VERSION_MINOR,
                            AI_TOOLS_VERSION_MICRO, 0x0},
      .tool_api_version  = AI_STRUCT_INIT,

      .api_version            = ai_platform_api_get_version(),
      .interface_api_version  = ai_platform_interface_api_get_version(),
      
      .n_macc            = 58174788,
      .n_inputs          = 0,
      .inputs            = NULL,
      .n_outputs         = 0,
      .outputs           = NULL,
      .params            = AI_STRUCT_INIT,
      .activations       = AI_STRUCT_INIT,
      .n_nodes           = 0,
      .signature         = 0x0,
    };

    if (!ai_platform_api_get_network_report(network, &r)) return false;

    *report = r;
    return true;
  }
  return false;
}

AI_API_ENTRY
ai_bool ai_network_get_report(
  ai_handle network, ai_network_report* report)
{
  ai_network* net_ctx = AI_NETWORK_ACQUIRE_CTX(network);

  if (report && net_ctx)
  {
    ai_network_report r = {
      .model_name        = AI_NETWORK_MODEL_NAME,
      .model_signature   = AI_NETWORK_MODEL_SIGNATURE,
      .model_datetime    = AI_TOOLS_DATE_TIME,
      
      .compile_datetime  = AI_TOOLS_COMPILE_TIME,
      
      .runtime_revision  = ai_platform_runtime_get_revision(),
      .runtime_version   = ai_platform_runtime_get_version(),

      .tool_revision     = AI_TOOLS_REVISION_ID,
      .tool_version      = {AI_TOOLS_VERSION_MAJOR, AI_TOOLS_VERSION_MINOR,
                            AI_TOOLS_VERSION_MICRO, 0x0},
      .tool_api_version  = AI_STRUCT_INIT,

      .api_version            = ai_platform_api_get_version(),
      .interface_api_version  = ai_platform_interface_api_get_version(),
      
      .n_macc            = 58174788,
      .n_inputs          = 0,
      .inputs            = NULL,
      .n_outputs         = 0,
      .outputs           = NULL,
      .map_signature     = AI_MAGIC_SIGNATURE,
      .map_weights       = AI_STRUCT_INIT,
      .map_activations   = AI_STRUCT_INIT,
      .n_nodes           = 0,
      .signature         = 0x0,
    };

    if (!ai_platform_api_get_network_report(network, &r)) return false;

    *report = r;
    return true;
  }
  return false;
}

AI_API_ENTRY
ai_error ai_network_get_error(ai_handle network)
{
  return ai_platform_network_get_error(network);
}

AI_API_ENTRY
ai_error ai_network_create(
  ai_handle* network, const ai_buffer* network_config)
{
  return ai_platform_network_create(
    network, network_config, 
    &AI_NET_OBJ_INSTANCE,
    AI_TOOLS_API_VERSION_MAJOR, AI_TOOLS_API_VERSION_MINOR, AI_TOOLS_API_VERSION_MICRO);
}

AI_API_ENTRY
ai_handle ai_network_destroy(ai_handle network)
{
  return ai_platform_network_destroy(network);
}

AI_API_ENTRY
ai_bool ai_network_init(
  ai_handle network, const ai_network_params* params)
{
  ai_network* net_ctx = ai_platform_network_init(network, params);
  if (!net_ctx) return false;

  ai_bool ok = true;
  ok &= network_configure_weights(net_ctx, params);
  ok &= network_configure_activations(net_ctx, params);

  ok &= ai_platform_network_post_init(network);

  return ok;
}


AI_API_ENTRY
ai_i32 ai_network_run(
  ai_handle network, const ai_buffer* input, ai_buffer* output)
{
  return ai_platform_network_process(network, input, output);
}

AI_API_ENTRY
ai_i32 ai_network_forward(ai_handle network, const ai_buffer* input)
{
  return ai_platform_network_process(network, input, NULL);
}



#undef AI_NETWORK_MODEL_SIGNATURE
#undef AI_NET_OBJ_INSTANCE
#undef AI_TOOLS_DATE_TIME
#undef AI_TOOLS_COMPILE_TIME

