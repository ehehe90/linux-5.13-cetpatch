/*
 * Copyright 2012-15 Advanced Micro Devices, Inc.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE COPYRIGHT HOLDER(S) OR AUTHOR(S) BE LIABLE FOR ANY CLAIM, DAMAGES OR
 * OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
 * ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 * OTHER DEALINGS IN THE SOFTWARE.
 *
 * Authors: AMD
 *
 */

#ifndef __DC_MCIF_WB_DCN20_H__
#define __DC_MCIF_WB_DCN20_H__

#define TO_DCN20_MMHUBBUB(mcif_wb_base) \
	container_of(mcif_wb_base, struct dcn20_mmhubbub, base)

/* DCN */
#define BASE_INNER(seg) \
	DCE_BASE__INST0_SEG ## seg

#define BASE(seg) \
	BASE_INNER(seg)

#define MCIF_WB_COMMON_REG_LIST_DCN2_0(inst) \
	SRI(MCIF_WB_BUFMGR_SW_CONTROL, MCIF_WB, inst),\
	SRI(MCIF_WB_BUFMGR_CUR_LINE_R, MCIF_WB, inst),\
	SRI(MCIF_WB_BUFMGR_STATUS, MCIF_WB, inst),\
	SRI(MCIF_WB_BUF_PITCH, MCIF_WB, inst),\
	SRI(MCIF_WB_BUF_1_STATUS, MCIF_WB, inst),\
	SRI(MCIF_WB_BUF_1_STATUS2, MCIF_WB, inst),\
	SRI(MCIF_WB_BUF_2_STATUS, MCIF_WB, inst),\
	SRI(MCIF_WB_BUF_2_STATUS2, MCIF_WB, inst),\
	SRI(MCIF_WB_BUF_3_STATUS, MCIF_WB, inst),\
	SRI(MCIF_WB_BUF_3_STATUS2, MCIF_WB, inst),\
	SRI(MCIF_WB_BUF_4_STATUS, MCIF_WB, inst),\
	SRI(MCIF_WB_BUF_4_STATUS2, MCIF_WB, inst),\
	SRI(MCIF_WB_ARBITRATION_CONTROL, MCIF_WB, inst),\
	SRI(MCIF_WB_SCLK_CHANGE, MCIF_WB, inst),\
	SRI(MCIF_WB_TEST_DEBUG_INDEX, MCIF_WB, inst),\
	SRI(MCIF_WB_TEST_DEBUG_DATA, MCIF_WB, inst),\
	SRI(MCIF_WB_BUF_1_ADDR_Y, MCIF_WB, inst),\
	SRI(MCIF_WB_BUF_1_ADDR_Y_OFFSET, MCIF_WB, inst),\
	SRI(MCIF_WB_BUF_1_ADDR_C, MCIF_WB, inst),\
	SRI(MCIF_WB_BUF_1_ADDR_C_OFFSET, MCIF_WB, inst),\
	SRI(MCIF_WB_BUF_2_ADDR_Y, MCIF_WB, inst),\
	SRI(MCIF_WB_BUF_2_ADDR_Y_OFFSET, MCIF_WB, inst),\
	SRI(MCIF_WB_BUF_2_ADDR_C, MCIF_WB, inst),\
	SRI(MCIF_WB_BUF_2_ADDR_C_OFFSET, MCIF_WB, inst),\
	SRI(MCIF_WB_BUF_3_ADDR_Y, MCIF_WB, inst),\
	SRI(MCIF_WB_BUF_3_ADDR_Y_OFFSET, MCIF_WB, inst),\
	SRI(MCIF_WB_BUF_3_ADDR_C, MCIF_WB, inst),\
	SRI(MCIF_WB_BUF_3_ADDR_C_OFFSET, MCIF_WB, inst),\
	SRI(MCIF_WB_BUF_4_ADDR_Y, MCIF_WB, inst),\
	SRI(MCIF_WB_BUF_4_ADDR_Y_OFFSET, MCIF_WB, inst),\
	SRI(MCIF_WB_BUF_4_ADDR_C, MCIF_WB, inst),\
	SRI(MCIF_WB_BUF_4_ADDR_C_OFFSET, MCIF_WB, inst),\
	SRI(MCIF_WB_BUFMGR_VCE_CONTROL, MCIF_WB, inst),\
	SRI(MCIF_WB_NB_PSTATE_LATENCY_WATERMARK, MCIF_WB, inst),\
	SRI(MCIF_WB_NB_PSTATE_CONTROL, MCIF_WB, inst),\
	SRI(MCIF_WB_WATERMARK, MCIF_WB, inst),\
	SRI(MCIF_WB_CLOCK_GATER_CONTROL, MCIF_WB, inst),\
	SRI(MCIF_WB_WARM_UP_CNTL, MCIF_WB, inst),\
	SRI(MCIF_WB_SELF_REFRESH_CONTROL, MCIF_WB, inst),\
	SRI(MULTI_LEVEL_QOS_CTRL, MCIF_WB, inst),\
	SRI(MCIF_WB_SECURITY_LEVEL, MCIF_WB, inst),\
	SRI(MCIF_WB_BUF_LUMA_SIZE, MCIF_WB, inst),\
	SRI(MCIF_WB_BUF_CHROMA_SIZE, MCIF_WB, inst),\
	SRI(MCIF_WB_BUF_1_ADDR_Y_HIGH, MCIF_WB, inst),\
	SRI(MCIF_WB_BUF_1_ADDR_C_HIGH, MCIF_WB, inst),\
	SRI(MCIF_WB_BUF_2_ADDR_Y_HIGH, MCIF_WB, inst),\
	SRI(MCIF_WB_BUF_2_ADDR_C_HIGH, MCIF_WB, inst),\
	SRI(MCIF_WB_BUF_3_ADDR_Y_HIGH, MCIF_WB, inst),\
	SRI(MCIF_WB_BUF_3_ADDR_C_HIGH, MCIF_WB, inst),\
	SRI(MCIF_WB_BUF_4_ADDR_Y_HIGH, MCIF_WB, inst),\
	SRI(MCIF_WB_BUF_4_ADDR_C_HIGH, MCIF_WB, inst),\
	SRI(MCIF_WB_BUF_1_RESOLUTION, MCIF_WB, inst),\
	SRI(MCIF_WB_BUF_2_RESOLUTION, MCIF_WB, inst),\
	SRI(MCIF_WB_BUF_3_RESOLUTION, MCIF_WB, inst),\
	SRI(MCIF_WB_BUF_4_RESOLUTION, MCIF_WB, inst),\
	SRI(SMU_WM_CONTROL, WBIF, inst)

#define MCIF_WB_COMMON_MASK_SH_LIST_DCN2_0(mask_sh) \
	SF(MCIF_WB0_MCIF_WB_BUFMGR_SW_CONTROL, MCIF_WB_BUFMGR_ENABLE, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUFMGR_SW_CONTROL, MCIF_WB_BUFMGR_SW_INT_EN, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUFMGR_SW_CONTROL, MCIF_WB_BUFMGR_SW_INT_ACK, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUFMGR_SW_CONTROL, MCIF_WB_BUFMGR_SW_SLICE_INT_EN, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUFMGR_SW_CONTROL, MCIF_WB_BUFMGR_SW_OVERRUN_INT_EN, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUFMGR_SW_CONTROL, MCIF_WB_BUFMGR_SW_LOCK, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUFMGR_SW_CONTROL, MCIF_WB_P_VMID, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUFMGR_SW_CONTROL, MCIF_WB_BUF_ADDR_FENCE_EN, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUFMGR_CUR_LINE_R, MCIF_WB_BUFMGR_CUR_LINE_R, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUFMGR_STATUS, MCIF_WB_BUFMGR_VCE_INT_STATUS, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUFMGR_STATUS, MCIF_WB_BUFMGR_SW_INT_STATUS, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUFMGR_STATUS, MCIF_WB_BUFMGR_SW_OVERRUN_INT_STATUS, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUFMGR_STATUS, MCIF_WB_BUFMGR_CUR_BUF, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUFMGR_STATUS, MCIF_WB_BUFMGR_BUFTAG, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUFMGR_STATUS, MCIF_WB_BUFMGR_CUR_LINE_L, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUFMGR_STATUS, MCIF_WB_BUFMGR_NEXT_BUF, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUF_PITCH, MCIF_WB_BUF_LUMA_PITCH, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUF_PITCH, MCIF_WB_BUF_CHROMA_PITCH, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUF_1_STATUS, MCIF_WB_BUF_1_ACTIVE, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUF_1_STATUS, MCIF_WB_BUF_1_SW_LOCKED, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUF_1_STATUS, MCIF_WB_BUF_1_VCE_LOCKED, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUF_1_STATUS, MCIF_WB_BUF_1_OVERFLOW, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUF_1_STATUS, MCIF_WB_BUF_1_DISABLE, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUF_1_STATUS, MCIF_WB_BUF_1_MODE, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUF_1_STATUS, MCIF_WB_BUF_1_BUFTAG, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUF_1_STATUS, MCIF_WB_BUF_1_NXT_BUF, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUF_1_STATUS, MCIF_WB_BUF_1_FIELD, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUF_1_STATUS, MCIF_WB_BUF_1_CUR_LINE_L, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUF_1_STATUS, MCIF_WB_BUF_1_LONG_LINE_ERROR, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUF_1_STATUS, MCIF_WB_BUF_1_SHORT_LINE_ERROR, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUF_1_STATUS, MCIF_WB_BUF_1_FRAME_LENGTH_ERROR, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUF_1_STATUS2, MCIF_WB_BUF_1_CUR_LINE_R, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUF_1_STATUS2, MCIF_WB_BUF_1_NEW_CONTENT, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUF_1_STATUS2, MCIF_WB_BUF_1_COLOR_DEPTH, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUF_1_STATUS2, MCIF_WB_BUF_1_TMZ_BLACK_PIXEL, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUF_1_STATUS2, MCIF_WB_BUF_1_TMZ, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUF_1_STATUS2, MCIF_WB_BUF_1_Y_OVERRUN, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUF_1_STATUS2, MCIF_WB_BUF_1_C_OVERRUN, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUF_2_STATUS, MCIF_WB_BUF_2_ACTIVE, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUF_2_STATUS, MCIF_WB_BUF_2_SW_LOCKED, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUF_2_STATUS, MCIF_WB_BUF_2_VCE_LOCKED, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUF_2_STATUS, MCIF_WB_BUF_2_OVERFLOW, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUF_2_STATUS, MCIF_WB_BUF_2_DISABLE, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUF_2_STATUS, MCIF_WB_BUF_2_MODE, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUF_2_STATUS, MCIF_WB_BUF_2_BUFTAG, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUF_2_STATUS, MCIF_WB_BUF_2_NXT_BUF, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUF_2_STATUS, MCIF_WB_BUF_2_FIELD, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUF_2_STATUS, MCIF_WB_BUF_2_CUR_LINE_L, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUF_2_STATUS, MCIF_WB_BUF_2_LONG_LINE_ERROR, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUF_2_STATUS, MCIF_WB_BUF_2_SHORT_LINE_ERROR, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUF_2_STATUS, MCIF_WB_BUF_2_FRAME_LENGTH_ERROR, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUF_2_STATUS2, MCIF_WB_BUF_2_CUR_LINE_R, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUF_2_STATUS2, MCIF_WB_BUF_2_NEW_CONTENT, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUF_2_STATUS2, MCIF_WB_BUF_2_COLOR_DEPTH, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUF_2_STATUS2, MCIF_WB_BUF_2_TMZ_BLACK_PIXEL, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUF_2_STATUS2, MCIF_WB_BUF_2_TMZ, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUF_2_STATUS2, MCIF_WB_BUF_2_Y_OVERRUN, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUF_2_STATUS2, MCIF_WB_BUF_2_C_OVERRUN, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUF_3_STATUS, MCIF_WB_BUF_3_ACTIVE, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUF_3_STATUS, MCIF_WB_BUF_3_SW_LOCKED, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUF_3_STATUS, MCIF_WB_BUF_3_VCE_LOCKED, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUF_3_STATUS, MCIF_WB_BUF_3_OVERFLOW, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUF_3_STATUS, MCIF_WB_BUF_3_DISABLE, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUF_3_STATUS, MCIF_WB_BUF_3_MODE, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUF_3_STATUS, MCIF_WB_BUF_3_BUFTAG, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUF_3_STATUS, MCIF_WB_BUF_3_NXT_BUF, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUF_3_STATUS, MCIF_WB_BUF_3_FIELD, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUF_3_STATUS, MCIF_WB_BUF_3_CUR_LINE_L, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUF_3_STATUS, MCIF_WB_BUF_3_LONG_LINE_ERROR, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUF_3_STATUS, MCIF_WB_BUF_3_SHORT_LINE_ERROR, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUF_3_STATUS, MCIF_WB_BUF_3_FRAME_LENGTH_ERROR, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUF_3_STATUS2, MCIF_WB_BUF_3_CUR_LINE_R, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUF_3_STATUS2, MCIF_WB_BUF_3_NEW_CONTENT, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUF_3_STATUS2, MCIF_WB_BUF_3_COLOR_DEPTH, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUF_3_STATUS2, MCIF_WB_BUF_3_TMZ_BLACK_PIXEL, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUF_3_STATUS2, MCIF_WB_BUF_3_TMZ, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUF_3_STATUS2, MCIF_WB_BUF_3_Y_OVERRUN, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUF_3_STATUS2, MCIF_WB_BUF_3_C_OVERRUN, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUF_4_STATUS, MCIF_WB_BUF_4_ACTIVE, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUF_4_STATUS, MCIF_WB_BUF_4_SW_LOCKED, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUF_4_STATUS, MCIF_WB_BUF_4_VCE_LOCKED, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUF_4_STATUS, MCIF_WB_BUF_4_OVERFLOW, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUF_4_STATUS, MCIF_WB_BUF_4_DISABLE, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUF_4_STATUS, MCIF_WB_BUF_4_MODE, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUF_4_STATUS, MCIF_WB_BUF_4_BUFTAG, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUF_4_STATUS, MCIF_WB_BUF_4_NXT_BUF, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUF_4_STATUS, MCIF_WB_BUF_4_FIELD, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUF_4_STATUS, MCIF_WB_BUF_4_CUR_LINE_L, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUF_4_STATUS, MCIF_WB_BUF_4_LONG_LINE_ERROR, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUF_4_STATUS, MCIF_WB_BUF_4_SHORT_LINE_ERROR, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUF_4_STATUS, MCIF_WB_BUF_4_FRAME_LENGTH_ERROR, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUF_4_STATUS2, MCIF_WB_BUF_4_CUR_LINE_R, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUF_4_STATUS2, MCIF_WB_BUF_4_NEW_CONTENT, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUF_4_STATUS2, MCIF_WB_BUF_4_COLOR_DEPTH, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUF_4_STATUS2, MCIF_WB_BUF_4_TMZ_BLACK_PIXEL, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUF_4_STATUS2, MCIF_WB_BUF_4_TMZ, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUF_4_STATUS2, MCIF_WB_BUF_4_Y_OVERRUN, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUF_4_STATUS2, MCIF_WB_BUF_4_C_OVERRUN, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_ARBITRATION_CONTROL, MCIF_WB_CLIENT_ARBITRATION_SLICE, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_ARBITRATION_CONTROL, MCIF_WB_TIME_PER_PIXEL, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_SCLK_CHANGE, WM_CHANGE_ACK_FORCE_ON, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_SCLK_CHANGE, MCIF_WB_CLI_WATERMARK_MASK, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_TEST_DEBUG_INDEX, MCIF_WB_TEST_DEBUG_INDEX, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_TEST_DEBUG_DATA, MCIF_WB_TEST_DEBUG_DATA, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUF_1_ADDR_Y, MCIF_WB_BUF_1_ADDR_Y, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUF_1_ADDR_Y_OFFSET, MCIF_WB_BUF_1_ADDR_Y_OFFSET, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUF_1_ADDR_C, MCIF_WB_BUF_1_ADDR_C, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUF_1_ADDR_C_OFFSET, MCIF_WB_BUF_1_ADDR_C_OFFSET, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUF_2_ADDR_Y, MCIF_WB_BUF_2_ADDR_Y, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUF_2_ADDR_Y_OFFSET, MCIF_WB_BUF_2_ADDR_Y_OFFSET, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUF_2_ADDR_C, MCIF_WB_BUF_2_ADDR_C, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUF_2_ADDR_C_OFFSET, MCIF_WB_BUF_2_ADDR_C_OFFSET, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUF_3_ADDR_Y, MCIF_WB_BUF_3_ADDR_Y, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUF_3_ADDR_Y_OFFSET, MCIF_WB_BUF_3_ADDR_Y_OFFSET, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUF_3_ADDR_C, MCIF_WB_BUF_3_ADDR_C, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUF_3_ADDR_C_OFFSET, MCIF_WB_BUF_3_ADDR_C_OFFSET, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUF_4_ADDR_Y, MCIF_WB_BUF_4_ADDR_Y, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUF_4_ADDR_Y_OFFSET, MCIF_WB_BUF_4_ADDR_Y_OFFSET, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUF_4_ADDR_C, MCIF_WB_BUF_4_ADDR_C, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUF_4_ADDR_C_OFFSET, MCIF_WB_BUF_4_ADDR_C_OFFSET, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUFMGR_VCE_CONTROL, MCIF_WB_BUFMGR_VCE_LOCK_IGNORE, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUFMGR_VCE_CONTROL, MCIF_WB_BUFMGR_VCE_INT_EN, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUFMGR_VCE_CONTROL, MCIF_WB_BUFMGR_VCE_INT_ACK, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUFMGR_VCE_CONTROL, MCIF_WB_BUFMGR_VCE_SLICE_INT_EN, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUFMGR_VCE_CONTROL, MCIF_WB_BUFMGR_VCE_LOCK, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUFMGR_VCE_CONTROL, MCIF_WB_BUFMGR_SLICE_SIZE, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_NB_PSTATE_LATENCY_WATERMARK, NB_PSTATE_CHANGE_REFRESH_WATERMARK, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_NB_PSTATE_CONTROL, NB_PSTATE_CHANGE_URGENT_DURING_REQUEST, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_NB_PSTATE_CONTROL, NB_PSTATE_CHANGE_FORCE_ON, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_NB_PSTATE_CONTROL, NB_PSTATE_ALLOW_FOR_URGENT, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_NB_PSTATE_CONTROL, NB_PSTATE_CHANGE_WATERMARK_MASK, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_WATERMARK, MCIF_WB_CLI_WATERMARK, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_CLOCK_GATER_CONTROL, MCIF_WB_CLI_CLOCK_GATER_OVERRIDE, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_WARM_UP_CNTL, MCIF_WB_PITCH_SIZE_WARMUP, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_SELF_REFRESH_CONTROL, DIS_REFRESH_UNDER_NBPREQ, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_SELF_REFRESH_CONTROL, PERFRAME_SELF_REFRESH, mask_sh),\
	SF(MCIF_WB0_MULTI_LEVEL_QOS_CTRL, MAX_SCALED_TIME_TO_URGENT, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_SECURITY_LEVEL, MCIF_WB_SECURITY_LEVEL, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUF_LUMA_SIZE, MCIF_WB_BUF_LUMA_SIZE, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUF_CHROMA_SIZE, MCIF_WB_BUF_CHROMA_SIZE, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUF_1_ADDR_Y_HIGH, MCIF_WB_BUF_1_ADDR_Y_HIGH, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUF_1_ADDR_C_HIGH, MCIF_WB_BUF_1_ADDR_C_HIGH, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUF_2_ADDR_Y_HIGH, MCIF_WB_BUF_2_ADDR_Y_HIGH, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUF_2_ADDR_C_HIGH, MCIF_WB_BUF_2_ADDR_C_HIGH, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUF_3_ADDR_Y_HIGH, MCIF_WB_BUF_3_ADDR_Y_HIGH, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUF_3_ADDR_C_HIGH, MCIF_WB_BUF_3_ADDR_C_HIGH, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUF_4_ADDR_Y_HIGH, MCIF_WB_BUF_4_ADDR_Y_HIGH, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUF_4_ADDR_C_HIGH, MCIF_WB_BUF_4_ADDR_C_HIGH, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUF_1_RESOLUTION, MCIF_WB_BUF_1_RESOLUTION_WIDTH, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUF_1_RESOLUTION, MCIF_WB_BUF_1_RESOLUTION_HEIGHT, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUF_2_RESOLUTION, MCIF_WB_BUF_2_RESOLUTION_WIDTH, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUF_2_RESOLUTION, MCIF_WB_BUF_2_RESOLUTION_HEIGHT, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUF_3_RESOLUTION, MCIF_WB_BUF_3_RESOLUTION_WIDTH, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUF_3_RESOLUTION, MCIF_WB_BUF_3_RESOLUTION_HEIGHT, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUF_4_RESOLUTION, MCIF_WB_BUF_4_RESOLUTION_WIDTH, mask_sh),\
	SF(MCIF_WB0_MCIF_WB_BUF_4_RESOLUTION, MCIF_WB_BUF_4_RESOLUTION_HEIGHT, mask_sh),\
	SF(WBIF0_SMU_WM_CONTROL, MCIF_WB0_WM_CHG_SEL, mask_sh),\
	SF(WBIF0_SMU_WM_CONTROL, MCIF_WB0_WM_CHG_REQ, mask_sh),\
	SF(WBIF0_SMU_WM_CONTROL, MCIF_WB0_WM_CHG_ACK_INT_DIS, mask_sh),\
	SF(WBIF0_SMU_WM_CONTROL, MCIF_WB0_WM_CHG_ACK_INT_STATUS, mask_sh)

#define MCIF_WB_REG_FIELD_LIST_DCN2_0(type) \
	type MCIF_WB_BUFMGR_ENABLE;\
	type MCIF_WB_BUFMGR_SW_INT_EN;\
	type MCIF_WB_BUFMGR_SW_INT_ACK;\
	type MCIF_WB_BUFMGR_SW_SLICE_INT_EN;\
	type MCIF_WB_BUFMGR_SW_OVERRUN_INT_EN;\
	type MCIF_WB_BUFMGR_SW_LOCK;\
	type MCIF_WB_P_VMID;\
	type MCIF_WB_BUF_ADDR_FENCE_EN;\
	type MCIF_WB_BUFMGR_CUR_LINE_R;\
	type MCIF_WB_BUFMGR_VCE_INT_STATUS;\
	type MCIF_WB_BUFMGR_SW_INT_STATUS;\
	type MCIF_WB_BUFMGR_SW_OVERRUN_INT_STATUS;\
	type MCIF_WB_BUFMGR_CUR_BUF;\
	type MCIF_WB_BUFMGR_BUFTAG;\
	type MCIF_WB_BUFMGR_CUR_LINE_L;\
	type MCIF_WB_BUFMGR_NEXT_BUF;\
	type MCIF_WB_BUF_LUMA_PITCH;\
	type MCIF_WB_BUF_CHROMA_PITCH;\
	type MCIF_WB_BUF_1_ACTIVE;\
	type MCIF_WB_BUF_1_SW_LOCKED;\
	type MCIF_WB_BUF_1_VCE_LOCKED;\
	type MCIF_WB_BUF_1_OVERFLOW;\
	type MCIF_WB_BUF_1_DISABLE;\
	type MCIF_WB_BUF_1_MODE;\
	type MCIF_WB_BUF_1_BUFTAG;\
	type MCIF_WB_BUF_1_NXT_BUF;\
	type MCIF_WB_BUF_1_FIELD;\
	type MCIF_WB_BUF_1_CUR_LINE_L;\
	type MCIF_WB_BUF_1_LONG_LINE_ERROR;\
	type MCIF_WB_BUF_1_SHORT_LINE_ERROR;\
	type MCIF_WB_BUF_1_FRAME_LENGTH_ERROR;\
	type MCIF_WB_BUF_1_CUR_LINE_R;\
	type MCIF_WB_BUF_1_NEW_CONTENT;\
	type MCIF_WB_BUF_1_COLOR_DEPTH;\
	type MCIF_WB_BUF_1_TMZ_BLACK_PIXEL;\
	type MCIF_WB_BUF_1_TMZ;\
	type MCIF_WB_BUF_1_Y_OVERRUN;\
	type MCIF_WB_BUF_1_C_OVERRUN;\
	type MCIF_WB_BUF_2_ACTIVE;\
	type MCIF_WB_BUF_2_SW_LOCKED;\
	type MCIF_WB_BUF_2_VCE_LOCKED;\
	type MCIF_WB_BUF_2_OVERFLOW;\
	type MCIF_WB_BUF_2_DISABLE;\
	type MCIF_WB_BUF_2_MODE;\
	type MCIF_WB_BUF_2_BUFTAG;\
	type MCIF_WB_BUF_2_NXT_BUF;\
	type MCIF_WB_BUF_2_FIELD;\
	type MCIF_WB_BUF_2_CUR_LINE_L;\
	type MCIF_WB_BUF_2_LONG_LINE_ERROR;\
	type MCIF_WB_BUF_2_SHORT_LINE_ERROR;\
	type MCIF_WB_BUF_2_FRAME_LENGTH_ERROR;\
	type MCIF_WB_BUF_2_CUR_LINE_R;\
	type MCIF_WB_BUF_2_NEW_CONTENT;\
	type MCIF_WB_BUF_2_COLOR_DEPTH;\
	type MCIF_WB_BUF_2_TMZ_BLACK_PIXEL;\
	type MCIF_WB_BUF_2_TMZ;\
	type MCIF_WB_BUF_2_Y_OVERRUN;\
	type MCIF_WB_BUF_2_C_OVERRUN;\
	type MCIF_WB_BUF_3_ACTIVE;\
	type MCIF_WB_BUF_3_SW_LOCKED;\
	type MCIF_WB_BUF_3_VCE_LOCKED;\
	type MCIF_WB_BUF_3_OVERFLOW;\
	type MCIF_WB_BUF_3_DISABLE;\
	type MCIF_WB_BUF_3_MODE;\
	type MCIF_WB_BUF_3_BUFTAG;\
	type MCIF_WB_BUF_3_NXT_BUF;\
	type MCIF_WB_BUF_3_FIELD;\
	type MCIF_WB_BUF_3_CUR_LINE_L;\
	type MCIF_WB_BUF_3_LONG_LINE_ERROR;\
	type MCIF_WB_BUF_3_SHORT_LINE_ERROR;\
	type MCIF_WB_BUF_3_FRAME_LENGTH_ERROR;\
	type MCIF_WB_BUF_3_CUR_LINE_R;\
	type MCIF_WB_BUF_3_NEW_CONTENT;\
	type MCIF_WB_BUF_3_COLOR_DEPTH;\
	type MCIF_WB_BUF_3_TMZ_BLACK_PIXEL;\
	type MCIF_WB_BUF_3_TMZ;\
	type MCIF_WB_BUF_3_Y_OVERRUN;\
	type MCIF_WB_BUF_3_C_OVERRUN;\
	type MCIF_WB_BUF_4_ACTIVE;\
	type MCIF_WB_BUF_4_SW_LOCKED;\
	type MCIF_WB_BUF_4_VCE_LOCKED;\
	type MCIF_WB_BUF_4_OVERFLOW;\
	type MCIF_WB_BUF_4_DISABLE;\
	type MCIF_WB_BUF_4_MODE;\
	type MCIF_WB_BUF_4_BUFTAG;\
	type MCIF_WB_BUF_4_NXT_BUF;\
	type MCIF_WB_BUF_4_FIELD;\
	type MCIF_WB_BUF_4_CUR_LINE_L;\
	type MCIF_WB_BUF_4_LONG_LINE_ERROR;\
	type MCIF_WB_BUF_4_SHORT_LINE_ERROR;\
	type MCIF_WB_BUF_4_FRAME_LENGTH_ERROR;\
	type MCIF_WB_BUF_4_CUR_LINE_R;\
	type MCIF_WB_BUF_4_NEW_CONTENT;\
	type MCIF_WB_BUF_4_COLOR_DEPTH;\
	type MCIF_WB_BUF_4_TMZ_BLACK_PIXEL;\
	type MCIF_WB_BUF_4_TMZ;\
	type MCIF_WB_BUF_4_Y_OVERRUN;\
	type MCIF_WB_BUF_4_C_OVERRUN;\
	type MCIF_WB_CLIENT_ARBITRATION_SLICE;\
	type MCIF_WB_TIME_PER_PIXEL;\
	type WM_CHANGE_ACK_FORCE_ON;\
	type MCIF_WB_CLI_WATERMARK_MASK;\
	type MCIF_WB_TEST_DEBUG_INDEX;\
	type MCIF_WB_TEST_DEBUG_DATA;\
	type MCIF_WB_BUF_1_ADDR_Y;\
	type MCIF_WB_BUF_1_ADDR_Y_OFFSET;\
	type MCIF_WB_BUF_1_ADDR_C;\
	type MCIF_WB_BUF_1_ADDR_C_OFFSET;\
	type MCIF_WB_BUF_2_ADDR_Y;\
	type MCIF_WB_BUF_2_ADDR_Y_OFFSET;\
	type MCIF_WB_BUF_2_ADDR_C;\
	type MCIF_WB_BUF_2_ADDR_C_OFFSET;\
	type MCIF_WB_BUF_3_ADDR_Y;\
	type MCIF_WB_BUF_3_ADDR_Y_OFFSET;\
	type MCIF_WB_BUF_3_ADDR_C;\
	type MCIF_WB_BUF_3_ADDR_C_OFFSET;\
	type MCIF_WB_BUF_4_ADDR_Y;\
	type MCIF_WB_BUF_4_ADDR_Y_OFFSET;\
	type MCIF_WB_BUF_4_ADDR_C;\
	type MCIF_WB_BUF_4_ADDR_C_OFFSET;\
	type MCIF_WB_BUFMGR_VCE_LOCK_IGNORE;\
	type MCIF_WB_BUFMGR_VCE_INT_EN;\
	type MCIF_WB_BUFMGR_VCE_INT_ACK;\
	type MCIF_WB_BUFMGR_VCE_SLICE_INT_EN;\
	type MCIF_WB_BUFMGR_VCE_LOCK;\
	type MCIF_WB_BUFMGR_SLICE_SIZE;\
	type NB_PSTATE_CHANGE_REFRESH_WATERMARK;\
	type NB_PSTATE_CHANGE_URGENT_DURING_REQUEST;\
	type NB_PSTATE_CHANGE_FORCE_ON;\
	type NB_PSTATE_ALLOW_FOR_URGENT;\
	type NB_PSTATE_CHANGE_WATERMARK_MASK;\
	type MCIF_WB_CLI_WATERMARK;\
	type MCIF_WB_CLI_CLOCK_GATER_OVERRIDE;\
	type MCIF_WB_PITCH_SIZE_WARMUP;\
	type DIS_REFRESH_UNDER_NBPREQ;\
	type PERFRAME_SELF_REFRESH;\
	type MAX_SCALED_TIME_TO_URGENT;\
	type MCIF_WB_SECURITY_LEVEL;\
	type MCIF_WB_BUF_LUMA_SIZE;\
	type MCIF_WB_BUF_CHROMA_SIZE;\
	type MCIF_WB_BUF_1_ADDR_Y_HIGH;\
	type MCIF_WB_BUF_1_ADDR_C_HIGH;\
	type MCIF_WB_BUF_2_ADDR_Y_HIGH;\
	type MCIF_WB_BUF_2_ADDR_C_HIGH;\
	type MCIF_WB_BUF_3_ADDR_Y_HIGH;\
	type MCIF_WB_BUF_3_ADDR_C_HIGH;\
	type MCIF_WB_BUF_4_ADDR_Y_HIGH;\
	type MCIF_WB_BUF_4_ADDR_C_HIGH;\
	type MCIF_WB_BUF_1_RESOLUTION_WIDTH;\
	type MCIF_WB_BUF_1_RESOLUTION_HEIGHT;\
	type MCIF_WB_BUF_2_RESOLUTION_WIDTH;\
	type MCIF_WB_BUF_2_RESOLUTION_HEIGHT;\
	type MCIF_WB_BUF_3_RESOLUTION_WIDTH;\
	type MCIF_WB_BUF_3_RESOLUTION_HEIGHT;\
	type MCIF_WB_BUF_4_RESOLUTION_WIDTH;\
	type MCIF_WB_BUF_4_RESOLUTION_HEIGHT;\
	type MCIF_WB0_WM_CHG_SEL;\
	type MCIF_WB0_WM_CHG_REQ;\
	type MCIF_WB0_WM_CHG_ACK_INT_DIS;\
	type MCIF_WB0_WM_CHG_ACK_INT_STATUS

#define MCIF_WB_REG_VARIABLE_LIST_DCN2_0 \
	uint32_t MCIF_WB_BUFMGR_SW_CONTROL;\
	uint32_t MCIF_WB_BUFMGR_CUR_LINE_R;\
	uint32_t MCIF_WB_BUFMGR_STATUS;\
	uint32_t MCIF_WB_BUF_PITCH;\
	uint32_t MCIF_WB_BUF_1_STATUS;\
	uint32_t MCIF_WB_BUF_1_STATUS2;\
	uint32_t MCIF_WB_BUF_2_STATUS;\
	uint32_t MCIF_WB_BUF_2_STATUS2;\
	uint32_t MCIF_WB_BUF_3_STATUS;\
	uint32_t MCIF_WB_BUF_3_STATUS2;\
	uint32_t MCIF_WB_BUF_4_STATUS;\
	uint32_t MCIF_WB_BUF_4_STATUS2;\
	uint32_t MCIF_WB_ARBITRATION_CONTROL;\
	uint32_t MCIF_WB_SCLK_CHANGE;\
	uint32_t MCIF_WB_TEST_DEBUG_INDEX;\
	uint32_t MCIF_WB_TEST_DEBUG_DATA;\
	uint32_t MCIF_WB_BUF_1_ADDR_Y;\
	uint32_t MCIF_WB_BUF_1_ADDR_Y_OFFSET;\
	uint32_t MCIF_WB_BUF_1_ADDR_C;\
	uint32_t MCIF_WB_BUF_1_ADDR_C_OFFSET;\
	uint32_t MCIF_WB_BUF_2_ADDR_Y;\
	uint32_t MCIF_WB_BUF_2_ADDR_Y_OFFSET;\
	uint32_t MCIF_WB_BUF_2_ADDR_C;\
	uint32_t MCIF_WB_BUF_2_ADDR_C_OFFSET;\
	uint32_t MCIF_WB_BUF_3_ADDR_Y;\
	uint32_t MCIF_WB_BUF_3_ADDR_Y_OFFSET;\
	uint32_t MCIF_WB_BUF_3_ADDR_C;\
	uint32_t MCIF_WB_BUF_3_ADDR_C_OFFSET;\
	uint32_t MCIF_WB_BUF_4_ADDR_Y;\
	uint32_t MCIF_WB_BUF_4_ADDR_Y_OFFSET;\
	uint32_t MCIF_WB_BUF_4_ADDR_C;\
	uint32_t MCIF_WB_BUF_4_ADDR_C_OFFSET;\
	uint32_t MCIF_WB_BUFMGR_VCE_CONTROL;\
	uint32_t MCIF_WB_NB_PSTATE_LATENCY_WATERMARK;\
	uint32_t MCIF_WB_NB_PSTATE_CONTROL;\
	uint32_t MCIF_WB_WATERMARK;\
	uint32_t MCIF_WB_CLOCK_GATER_CONTROL;\
	uint32_t MCIF_WB_WARM_UP_CNTL;\
	uint32_t MCIF_WB_SELF_REFRESH_CONTROL;\
	uint32_t MULTI_LEVEL_QOS_CTRL;\
	uint32_t MCIF_WB_SECURITY_LEVEL;\
	uint32_t MCIF_WB_BUF_LUMA_SIZE;\
	uint32_t MCIF_WB_BUF_CHROMA_SIZE;\
	uint32_t MCIF_WB_BUF_1_ADDR_Y_HIGH;\
	uint32_t MCIF_WB_BUF_1_ADDR_C_HIGH;\
	uint32_t MCIF_WB_BUF_2_ADDR_Y_HIGH;\
	uint32_t MCIF_WB_BUF_2_ADDR_C_HIGH;\
	uint32_t MCIF_WB_BUF_3_ADDR_Y_HIGH;\
	uint32_t MCIF_WB_BUF_3_ADDR_C_HIGH;\
	uint32_t MCIF_WB_BUF_4_ADDR_Y_HIGH;\
	uint32_t MCIF_WB_BUF_4_ADDR_C_HIGH;\
	uint32_t MCIF_WB_BUF_1_RESOLUTION;\
	uint32_t MCIF_WB_BUF_2_RESOLUTION;\
	uint32_t MCIF_WB_BUF_3_RESOLUTION;\
	uint32_t MCIF_WB_BUF_4_RESOLUTION;\
	uint32_t SMU_WM_CONTROL

struct dcn20_mmhubbub_registers {
	MCIF_WB_REG_VARIABLE_LIST_DCN2_0;
};


struct dcn20_mmhubbub_mask {
	MCIF_WB_REG_FIELD_LIST_DCN2_0(uint32_t);
};

struct dcn20_mmhubbub_shift {
	MCIF_WB_REG_FIELD_LIST_DCN2_0(uint8_t);
};

struct dcn20_mmhubbub {
	struct mcif_wb base;
	const struct dcn20_mmhubbub_registers *mcif_wb_regs;
	const struct dcn20_mmhubbub_shift *mcif_wb_shift;
	const struct dcn20_mmhubbub_mask *mcif_wb_mask;
};

void mmhubbub2_config_mcif_irq(struct mcif_wb *mcif_wb,
	struct mcif_irq_params *params);

void mmhubbub2_enable_mcif(struct mcif_wb *mcif_wb);

void mmhubbub2_disable_mcif(struct mcif_wb *mcif_wb);

void mcifwb2_dump_frame(struct mcif_wb *mcif_wb,
	struct mcif_buf_params *mcif_params,
	enum dwb_scaler_mode out_format,
	unsigned int dest_width,
	unsigned int dest_height,
	struct mcif_wb_frame_dump_info *dump_info,
	unsigned char *luma_buffer,
	unsigned char *chroma_buffer,
	unsigned char *dest_luma_buffer,
	unsigned char *dest_chroma_buffer);

void dcn20_mmhubbub_construct(struct dcn20_mmhubbub *mcif_wb20,
	struct dc_context *ctx,
	const struct dcn20_mmhubbub_registers *mcif_wb_regs,
	const struct dcn20_mmhubbub_shift *mcif_wb_shift,
	const struct dcn20_mmhubbub_mask *mcif_wb_mask,
	int inst);

#endif