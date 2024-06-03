/**
 * \file IfxHspdm_bf.h
 * \brief
 * \copyright Copyright (c) 2020 Infineon Technologies AG. All rights reserved.
 *
 *
 * Version: TC39XB_UM_V1.5.0
 * Specification: TC3xx User Manual V1.5.0
 * MAY BE CHANGED BY USER [yes/no]: No
 *
 *                                 IMPORTANT NOTICE
 *
 * Use of this file is subject to the terms of use agreed between (i) you or
 * the company in which ordinary course of business you are acting and (ii)
 * Infineon Technologies AG or its licensees. If and as long as no such terms
 * of use are agreed, use of this file is subject to following:
 *
 * Boost Software License - Version 1.0 - August 17th, 2003
 *
 * Permission is hereby granted, free of charge, to any person or organization
 * obtaining a copy of the software and accompanying documentation covered by
 * this license (the "Software") to use, reproduce, display, distribute,
 * execute, and transmit the Software, and to prepare derivative works of the
 * Software, and to permit third-parties to whom the Software is furnished to
 * do so, all subject to the following:
 *
 * The copyright notices in the Software and this entire statement, including
 * the above license grant, this restriction and the following disclaimer, must
 * be included in all copies of the Software, in whole or in part, and all
 * derivative works of the Software, unless such copies or derivative works are
 * solely in the form of machine-executable object code generated by a source
 * language processor.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, TITLE AND NON-INFRINGEMENT. IN NO EVENT
 * SHALL THE COPYRIGHT HOLDERS OR ANYONE DISTRIBUTING THE SOFTWARE BE LIABLE
 * FOR ANY DAMAGES OR OTHER LIABILITY, WHETHER IN CONTRACT, TORT OR OTHERWISE,
 * ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 * \defgroup IfxSfr_Hspdm_Registers_BitfieldsMask Bitfields mask and offset
 * \ingroup IfxSfr_Hspdm_Registers
 * 
 */
#ifndef IFXHSPDM_BF_H
#define IFXHSPDM_BF_H 1

/******************************************************************************/

/******************************************************************************/

/** \addtogroup IfxSfr_Hspdm_Registers_BitfieldsMask
 * \{  */
/** \brief Length for Ifx_HSPDM_CLC_Bits.DISR */
#define IFX_HSPDM_CLC_DISR_LEN (1u)

/** \brief Mask for Ifx_HSPDM_CLC_Bits.DISR */
#define IFX_HSPDM_CLC_DISR_MSK (0x1u)

/** \brief Offset for Ifx_HSPDM_CLC_Bits.DISR */
#define IFX_HSPDM_CLC_DISR_OFF (0u)

/** \brief Length for Ifx_HSPDM_CLC_Bits.DISS */
#define IFX_HSPDM_CLC_DISS_LEN (1u)

/** \brief Mask for Ifx_HSPDM_CLC_Bits.DISS */
#define IFX_HSPDM_CLC_DISS_MSK (0x1u)

/** \brief Offset for Ifx_HSPDM_CLC_Bits.DISS */
#define IFX_HSPDM_CLC_DISS_OFF (1u)

/** \brief Length for Ifx_HSPDM_CLC_Bits.EDIS */
#define IFX_HSPDM_CLC_EDIS_LEN (1u)

/** \brief Mask for Ifx_HSPDM_CLC_Bits.EDIS */
#define IFX_HSPDM_CLC_EDIS_MSK (0x1u)

/** \brief Offset for Ifx_HSPDM_CLC_Bits.EDIS */
#define IFX_HSPDM_CLC_EDIS_OFF (3u)

/** \brief Length for Ifx_HSPDM_ID_Bits.MODREV */
#define IFX_HSPDM_ID_MODREV_LEN (8u)

/** \brief Mask for Ifx_HSPDM_ID_Bits.MODREV */
#define IFX_HSPDM_ID_MODREV_MSK (0xffu)

/** \brief Offset for Ifx_HSPDM_ID_Bits.MODREV */
#define IFX_HSPDM_ID_MODREV_OFF (0u)

/** \brief Length for Ifx_HSPDM_ID_Bits.MODTYPE */
#define IFX_HSPDM_ID_MODTYPE_LEN (8u)

/** \brief Mask for Ifx_HSPDM_ID_Bits.MODTYPE */
#define IFX_HSPDM_ID_MODTYPE_MSK (0xffu)

/** \brief Offset for Ifx_HSPDM_ID_Bits.MODTYPE */
#define IFX_HSPDM_ID_MODTYPE_OFF (8u)

/** \brief Length for Ifx_HSPDM_ID_Bits.MODNUMBER */
#define IFX_HSPDM_ID_MODNUMBER_LEN (16u)

/** \brief Mask for Ifx_HSPDM_ID_Bits.MODNUMBER */
#define IFX_HSPDM_ID_MODNUMBER_MSK (0xffffu)

/** \brief Offset for Ifx_HSPDM_ID_Bits.MODNUMBER */
#define IFX_HSPDM_ID_MODNUMBER_OFF (16u)

/** \brief Length for Ifx_HSPDM_BUFA0_Bits.STARTA */
#define IFX_HSPDM_BUFA0_STARTA_LEN (13u)

/** \brief Mask for Ifx_HSPDM_BUFA0_Bits.STARTA */
#define IFX_HSPDM_BUFA0_STARTA_MSK (0x1fffu)

/** \brief Offset for Ifx_HSPDM_BUFA0_Bits.STARTA */
#define IFX_HSPDM_BUFA0_STARTA_OFF (0u)

/** \brief Length for Ifx_HSPDM_BUFA0_Bits.ENDA */
#define IFX_HSPDM_BUFA0_ENDA_LEN (13u)

/** \brief Mask for Ifx_HSPDM_BUFA0_Bits.ENDA */
#define IFX_HSPDM_BUFA0_ENDA_MSK (0x1fffu)

/** \brief Offset for Ifx_HSPDM_BUFA0_Bits.ENDA */
#define IFX_HSPDM_BUFA0_ENDA_OFF (16u)

/** \brief Length for Ifx_HSPDM_BUFB0_Bits.STARTB */
#define IFX_HSPDM_BUFB0_STARTB_LEN (13u)

/** \brief Mask for Ifx_HSPDM_BUFB0_Bits.STARTB */
#define IFX_HSPDM_BUFB0_STARTB_MSK (0x1fffu)

/** \brief Offset for Ifx_HSPDM_BUFB0_Bits.STARTB */
#define IFX_HSPDM_BUFB0_STARTB_OFF (0u)

/** \brief Length for Ifx_HSPDM_BUFB0_Bits.ENDB */
#define IFX_HSPDM_BUFB0_ENDB_LEN (13u)

/** \brief Mask for Ifx_HSPDM_BUFB0_Bits.ENDB */
#define IFX_HSPDM_BUFB0_ENDB_MSK (0x1fffu)

/** \brief Offset for Ifx_HSPDM_BUFB0_Bits.ENDB */
#define IFX_HSPDM_BUFB0_ENDB_OFF (16u)

/** \brief Length for Ifx_HSPDM_CURRAD_Bits.CURRAD */
#define IFX_HSPDM_CURRAD_CURRAD_LEN (13u)

/** \brief Mask for Ifx_HSPDM_CURRAD_Bits.CURRAD */
#define IFX_HSPDM_CURRAD_CURRAD_MSK (0x1fffu)

/** \brief Offset for Ifx_HSPDM_CURRAD_Bits.CURRAD */
#define IFX_HSPDM_CURRAD_CURRAD_OFF (0u)

/** \brief Length for Ifx_HSPDM_MUTE0_Bits.START0 */
#define IFX_HSPDM_MUTE0_START0_LEN (13u)

/** \brief Mask for Ifx_HSPDM_MUTE0_Bits.START0 */
#define IFX_HSPDM_MUTE0_START0_MSK (0x1fffu)

/** \brief Offset for Ifx_HSPDM_MUTE0_Bits.START0 */
#define IFX_HSPDM_MUTE0_START0_OFF (0u)

/** \brief Length for Ifx_HSPDM_MUTE0_Bits.END0 */
#define IFX_HSPDM_MUTE0_END0_LEN (13u)

/** \brief Mask for Ifx_HSPDM_MUTE0_Bits.END0 */
#define IFX_HSPDM_MUTE0_END0_MSK (0x1fffu)

/** \brief Offset for Ifx_HSPDM_MUTE0_Bits.END0 */
#define IFX_HSPDM_MUTE0_END0_OFF (16u)

/** \brief Length for Ifx_HSPDM_MUTE1_Bits.START1 */
#define IFX_HSPDM_MUTE1_START1_LEN (13u)

/** \brief Mask for Ifx_HSPDM_MUTE1_Bits.START1 */
#define IFX_HSPDM_MUTE1_START1_MSK (0x1fffu)

/** \brief Offset for Ifx_HSPDM_MUTE1_Bits.START1 */
#define IFX_HSPDM_MUTE1_START1_OFF (0u)

/** \brief Length for Ifx_HSPDM_MUTE1_Bits.END1 */
#define IFX_HSPDM_MUTE1_END1_LEN (13u)

/** \brief Mask for Ifx_HSPDM_MUTE1_Bits.END1 */
#define IFX_HSPDM_MUTE1_END1_MSK (0x1fffu)

/** \brief Offset for Ifx_HSPDM_MUTE1_Bits.END1 */
#define IFX_HSPDM_MUTE1_END1_OFF (16u)

/** \brief Length for Ifx_HSPDM_ADCTG_Bits.OFFSET */
#define IFX_HSPDM_ADCTG_OFFSET_LEN (16u)

/** \brief Mask for Ifx_HSPDM_ADCTG_Bits.OFFSET */
#define IFX_HSPDM_ADCTG_OFFSET_MSK (0xffffu)

/** \brief Offset for Ifx_HSPDM_ADCTG_Bits.OFFSET */
#define IFX_HSPDM_ADCTG_OFFSET_OFF (0u)

/** \brief Length for Ifx_HSPDM_ADCTG_Bits.PERIOD */
#define IFX_HSPDM_ADCTG_PERIOD_LEN (16u)

/** \brief Mask for Ifx_HSPDM_ADCTG_Bits.PERIOD */
#define IFX_HSPDM_ADCTG_PERIOD_MSK (0xffffu)

/** \brief Offset for Ifx_HSPDM_ADCTG_Bits.PERIOD */
#define IFX_HSPDM_ADCTG_PERIOD_OFF (16u)

/** \brief Length for Ifx_HSPDM_ADCTGCNT_Bits.TGCNT */
#define IFX_HSPDM_ADCTGCNT_TGCNT_LEN (16u)

/** \brief Mask for Ifx_HSPDM_ADCTGCNT_Bits.TGCNT */
#define IFX_HSPDM_ADCTGCNT_TGCNT_MSK (0xffffu)

/** \brief Offset for Ifx_HSPDM_ADCTGCNT_Bits.TGCNT */
#define IFX_HSPDM_ADCTGCNT_TGCNT_OFF (0u)

/** \brief Length for Ifx_HSPDM_CON_Bits.EN0 */
#define IFX_HSPDM_CON_EN0_LEN (1u)

/** \brief Mask for Ifx_HSPDM_CON_Bits.EN0 */
#define IFX_HSPDM_CON_EN0_MSK (0x1u)

/** \brief Offset for Ifx_HSPDM_CON_Bits.EN0 */
#define IFX_HSPDM_CON_EN0_OFF (0u)

/** \brief Length for Ifx_HSPDM_CON_Bits.EN1 */
#define IFX_HSPDM_CON_EN1_LEN (1u)

/** \brief Mask for Ifx_HSPDM_CON_Bits.EN1 */
#define IFX_HSPDM_CON_EN1_MSK (0x1u)

/** \brief Offset for Ifx_HSPDM_CON_Bits.EN1 */
#define IFX_HSPDM_CON_EN1_OFF (1u)

/** \brief Length for Ifx_HSPDM_CON_Bits.SM */
#define IFX_HSPDM_CON_SM_LEN (2u)

/** \brief Mask for Ifx_HSPDM_CON_Bits.SM */
#define IFX_HSPDM_CON_SM_MSK (0x3u)

/** \brief Offset for Ifx_HSPDM_CON_Bits.SM */
#define IFX_HSPDM_CON_SM_OFF (2u)

/** \brief Length for Ifx_HSPDM_CON_Bits.PAC */
#define IFX_HSPDM_CON_PAC_LEN (1u)

/** \brief Mask for Ifx_HSPDM_CON_Bits.PAC */
#define IFX_HSPDM_CON_PAC_MSK (0x1u)

/** \brief Offset for Ifx_HSPDM_CON_Bits.PAC */
#define IFX_HSPDM_CON_PAC_OFF (4u)

/** \brief Length for Ifx_HSPDM_CON_Bits.ITMDIV */
#define IFX_HSPDM_CON_ITMDIV_LEN (2u)

/** \brief Mask for Ifx_HSPDM_CON_Bits.ITMDIV */
#define IFX_HSPDM_CON_ITMDIV_MSK (0x3u)

/** \brief Offset for Ifx_HSPDM_CON_Bits.ITMDIV */
#define IFX_HSPDM_CON_ITMDIV_OFF (5u)

/** \brief Length for Ifx_HSPDM_CON_Bits.MM */
#define IFX_HSPDM_CON_MM_LEN (1u)

/** \brief Mask for Ifx_HSPDM_CON_Bits.MM */
#define IFX_HSPDM_CON_MM_MSK (0x1u)

/** \brief Offset for Ifx_HSPDM_CON_Bits.MM */
#define IFX_HSPDM_CON_MM_OFF (7u)

/** \brief Length for Ifx_HSPDM_CON_Bits.RUN */
#define IFX_HSPDM_CON_RUN_LEN (1u)

/** \brief Mask for Ifx_HSPDM_CON_Bits.RUN */
#define IFX_HSPDM_CON_RUN_MSK (0x1u)

/** \brief Offset for Ifx_HSPDM_CON_Bits.RUN */
#define IFX_HSPDM_CON_RUN_OFF (8u)

/** \brief Length for Ifx_HSPDM_CON_Bits.MPOL */
#define IFX_HSPDM_CON_MPOL_LEN (1u)

/** \brief Mask for Ifx_HSPDM_CON_Bits.MPOL */
#define IFX_HSPDM_CON_MPOL_MSK (0x1u)

/** \brief Offset for Ifx_HSPDM_CON_Bits.MPOL */
#define IFX_HSPDM_CON_MPOL_OFF (9u)

/** \brief Length for Ifx_HSPDM_CON_Bits.ADCTGEN */
#define IFX_HSPDM_CON_ADCTGEN_LEN (1u)

/** \brief Mask for Ifx_HSPDM_CON_Bits.ADCTGEN */
#define IFX_HSPDM_CON_ADCTGEN_MSK (0x1u)

/** \brief Offset for Ifx_HSPDM_CON_Bits.ADCTGEN */
#define IFX_HSPDM_CON_ADCTGEN_OFF (10u)

/** \brief Length for Ifx_HSPDM_CON_Bits.DITH */
#define IFX_HSPDM_CON_DITH_LEN (3u)

/** \brief Mask for Ifx_HSPDM_CON_Bits.DITH */
#define IFX_HSPDM_CON_DITH_MSK (0x7u)

/** \brief Offset for Ifx_HSPDM_CON_Bits.DITH */
#define IFX_HSPDM_CON_DITH_OFF (11u)

/** \brief Length for Ifx_HSPDM_CON_Bits.RUNC */
#define IFX_HSPDM_CON_RUNC_LEN (1u)

/** \brief Mask for Ifx_HSPDM_CON_Bits.RUNC */
#define IFX_HSPDM_CON_RUNC_MSK (0x1u)

/** \brief Offset for Ifx_HSPDM_CON_Bits.RUNC */
#define IFX_HSPDM_CON_RUNC_OFF (16u)

/** \brief Length for Ifx_HSPDM_CON_Bits.RUNS */
#define IFX_HSPDM_CON_RUNS_LEN (1u)

/** \brief Mask for Ifx_HSPDM_CON_Bits.RUNS */
#define IFX_HSPDM_CON_RUNS_MSK (0x1u)

/** \brief Offset for Ifx_HSPDM_CON_Bits.RUNS */
#define IFX_HSPDM_CON_RUNS_OFF (17u)

/** \brief Length for Ifx_HSPDM_CON_Bits.HREN */
#define IFX_HSPDM_CON_HREN_LEN (1u)

/** \brief Mask for Ifx_HSPDM_CON_Bits.HREN */
#define IFX_HSPDM_CON_HREN_MSK (0x1u)

/** \brief Offset for Ifx_HSPDM_CON_Bits.HREN */
#define IFX_HSPDM_CON_HREN_OFF (18u)

/** \brief Length for Ifx_HSPDM_CON_Bits.HRAE */
#define IFX_HSPDM_CON_HRAE_LEN (1u)

/** \brief Mask for Ifx_HSPDM_CON_Bits.HRAE */
#define IFX_HSPDM_CON_HRAE_MSK (0x1u)

/** \brief Offset for Ifx_HSPDM_CON_Bits.HRAE */
#define IFX_HSPDM_CON_HRAE_OFF (19u)

/** \brief Length for Ifx_HSPDM_CON_Bits.HRSEL */
#define IFX_HSPDM_CON_HRSEL_LEN (1u)

/** \brief Mask for Ifx_HSPDM_CON_Bits.HRSEL */
#define IFX_HSPDM_CON_HRSEL_MSK (0x1u)

/** \brief Offset for Ifx_HSPDM_CON_Bits.HRSEL */
#define IFX_HSPDM_CON_HRSEL_OFF (20u)

/** \brief Length for Ifx_HSPDM_FLAGS_Bits.BAS */
#define IFX_HSPDM_FLAGS_BAS_LEN (1u)

/** \brief Mask for Ifx_HSPDM_FLAGS_Bits.BAS */
#define IFX_HSPDM_FLAGS_BAS_MSK (0x1u)

/** \brief Offset for Ifx_HSPDM_FLAGS_Bits.BAS */
#define IFX_HSPDM_FLAGS_BAS_OFF (0u)

/** \brief Length for Ifx_HSPDM_FLAGS_Bits.BAE */
#define IFX_HSPDM_FLAGS_BAE_LEN (1u)

/** \brief Mask for Ifx_HSPDM_FLAGS_Bits.BAE */
#define IFX_HSPDM_FLAGS_BAE_MSK (0x1u)

/** \brief Offset for Ifx_HSPDM_FLAGS_Bits.BAE */
#define IFX_HSPDM_FLAGS_BAE_OFF (1u)

/** \brief Length for Ifx_HSPDM_FLAGS_Bits.BBS */
#define IFX_HSPDM_FLAGS_BBS_LEN (1u)

/** \brief Mask for Ifx_HSPDM_FLAGS_Bits.BBS */
#define IFX_HSPDM_FLAGS_BBS_MSK (0x1u)

/** \brief Offset for Ifx_HSPDM_FLAGS_Bits.BBS */
#define IFX_HSPDM_FLAGS_BBS_OFF (2u)

/** \brief Length for Ifx_HSPDM_FLAGS_Bits.BBE */
#define IFX_HSPDM_FLAGS_BBE_LEN (1u)

/** \brief Mask for Ifx_HSPDM_FLAGS_Bits.BBE */
#define IFX_HSPDM_FLAGS_BBE_MSK (0x1u)

/** \brief Offset for Ifx_HSPDM_FLAGS_Bits.BBE */
#define IFX_HSPDM_FLAGS_BBE_OFF (3u)

/** \brief Length for Ifx_HSPDM_FLAGS_Bits.M0S */
#define IFX_HSPDM_FLAGS_M0S_LEN (1u)

/** \brief Mask for Ifx_HSPDM_FLAGS_Bits.M0S */
#define IFX_HSPDM_FLAGS_M0S_MSK (0x1u)

/** \brief Offset for Ifx_HSPDM_FLAGS_Bits.M0S */
#define IFX_HSPDM_FLAGS_M0S_OFF (4u)

/** \brief Length for Ifx_HSPDM_FLAGS_Bits.M0E */
#define IFX_HSPDM_FLAGS_M0E_LEN (1u)

/** \brief Mask for Ifx_HSPDM_FLAGS_Bits.M0E */
#define IFX_HSPDM_FLAGS_M0E_MSK (0x1u)

/** \brief Offset for Ifx_HSPDM_FLAGS_Bits.M0E */
#define IFX_HSPDM_FLAGS_M0E_OFF (5u)

/** \brief Length for Ifx_HSPDM_FLAGS_Bits.M1S */
#define IFX_HSPDM_FLAGS_M1S_LEN (1u)

/** \brief Mask for Ifx_HSPDM_FLAGS_Bits.M1S */
#define IFX_HSPDM_FLAGS_M1S_MSK (0x1u)

/** \brief Offset for Ifx_HSPDM_FLAGS_Bits.M1S */
#define IFX_HSPDM_FLAGS_M1S_OFF (6u)

/** \brief Length for Ifx_HSPDM_FLAGS_Bits.M1E */
#define IFX_HSPDM_FLAGS_M1E_LEN (1u)

/** \brief Mask for Ifx_HSPDM_FLAGS_Bits.M1E */
#define IFX_HSPDM_FLAGS_M1E_MSK (0x1u)

/** \brief Offset for Ifx_HSPDM_FLAGS_Bits.M1E */
#define IFX_HSPDM_FLAGS_M1E_OFF (7u)

/** \brief Length for Ifx_HSPDM_FLAGS_Bits.ER */
#define IFX_HSPDM_FLAGS_ER_LEN (1u)

/** \brief Mask for Ifx_HSPDM_FLAGS_Bits.ER */
#define IFX_HSPDM_FLAGS_ER_MSK (0x1u)

/** \brief Offset for Ifx_HSPDM_FLAGS_Bits.ER */
#define IFX_HSPDM_FLAGS_ER_OFF (8u)

/** \brief Length for Ifx_HSPDM_FLAGS_Bits.MUTE */
#define IFX_HSPDM_FLAGS_MUTE_LEN (1u)

/** \brief Mask for Ifx_HSPDM_FLAGS_Bits.MUTE */
#define IFX_HSPDM_FLAGS_MUTE_MSK (0x1u)

/** \brief Offset for Ifx_HSPDM_FLAGS_Bits.MUTE */
#define IFX_HSPDM_FLAGS_MUTE_OFF (9u)

/** \brief Length for Ifx_HSPDM_FLAGSSET_Bits.BAS */
#define IFX_HSPDM_FLAGSSET_BAS_LEN (1u)

/** \brief Mask for Ifx_HSPDM_FLAGSSET_Bits.BAS */
#define IFX_HSPDM_FLAGSSET_BAS_MSK (0x1u)

/** \brief Offset for Ifx_HSPDM_FLAGSSET_Bits.BAS */
#define IFX_HSPDM_FLAGSSET_BAS_OFF (0u)

/** \brief Length for Ifx_HSPDM_FLAGSSET_Bits.BAE */
#define IFX_HSPDM_FLAGSSET_BAE_LEN (1u)

/** \brief Mask for Ifx_HSPDM_FLAGSSET_Bits.BAE */
#define IFX_HSPDM_FLAGSSET_BAE_MSK (0x1u)

/** \brief Offset for Ifx_HSPDM_FLAGSSET_Bits.BAE */
#define IFX_HSPDM_FLAGSSET_BAE_OFF (1u)

/** \brief Length for Ifx_HSPDM_FLAGSSET_Bits.BBS */
#define IFX_HSPDM_FLAGSSET_BBS_LEN (1u)

/** \brief Mask for Ifx_HSPDM_FLAGSSET_Bits.BBS */
#define IFX_HSPDM_FLAGSSET_BBS_MSK (0x1u)

/** \brief Offset for Ifx_HSPDM_FLAGSSET_Bits.BBS */
#define IFX_HSPDM_FLAGSSET_BBS_OFF (2u)

/** \brief Length for Ifx_HSPDM_FLAGSSET_Bits.BBE */
#define IFX_HSPDM_FLAGSSET_BBE_LEN (1u)

/** \brief Mask for Ifx_HSPDM_FLAGSSET_Bits.BBE */
#define IFX_HSPDM_FLAGSSET_BBE_MSK (0x1u)

/** \brief Offset for Ifx_HSPDM_FLAGSSET_Bits.BBE */
#define IFX_HSPDM_FLAGSSET_BBE_OFF (3u)

/** \brief Length for Ifx_HSPDM_FLAGSSET_Bits.M0S */
#define IFX_HSPDM_FLAGSSET_M0S_LEN (1u)

/** \brief Mask for Ifx_HSPDM_FLAGSSET_Bits.M0S */
#define IFX_HSPDM_FLAGSSET_M0S_MSK (0x1u)

/** \brief Offset for Ifx_HSPDM_FLAGSSET_Bits.M0S */
#define IFX_HSPDM_FLAGSSET_M0S_OFF (4u)

/** \brief Length for Ifx_HSPDM_FLAGSSET_Bits.M0E */
#define IFX_HSPDM_FLAGSSET_M0E_LEN (1u)

/** \brief Mask for Ifx_HSPDM_FLAGSSET_Bits.M0E */
#define IFX_HSPDM_FLAGSSET_M0E_MSK (0x1u)

/** \brief Offset for Ifx_HSPDM_FLAGSSET_Bits.M0E */
#define IFX_HSPDM_FLAGSSET_M0E_OFF (5u)

/** \brief Length for Ifx_HSPDM_FLAGSSET_Bits.M1S */
#define IFX_HSPDM_FLAGSSET_M1S_LEN (1u)

/** \brief Mask for Ifx_HSPDM_FLAGSSET_Bits.M1S */
#define IFX_HSPDM_FLAGSSET_M1S_MSK (0x1u)

/** \brief Offset for Ifx_HSPDM_FLAGSSET_Bits.M1S */
#define IFX_HSPDM_FLAGSSET_M1S_OFF (6u)

/** \brief Length for Ifx_HSPDM_FLAGSSET_Bits.M1E */
#define IFX_HSPDM_FLAGSSET_M1E_LEN (1u)

/** \brief Mask for Ifx_HSPDM_FLAGSSET_Bits.M1E */
#define IFX_HSPDM_FLAGSSET_M1E_MSK (0x1u)

/** \brief Offset for Ifx_HSPDM_FLAGSSET_Bits.M1E */
#define IFX_HSPDM_FLAGSSET_M1E_OFF (7u)

/** \brief Length for Ifx_HSPDM_FLAGSSET_Bits.ER */
#define IFX_HSPDM_FLAGSSET_ER_LEN (1u)

/** \brief Mask for Ifx_HSPDM_FLAGSSET_Bits.ER */
#define IFX_HSPDM_FLAGSSET_ER_MSK (0x1u)

/** \brief Offset for Ifx_HSPDM_FLAGSSET_Bits.ER */
#define IFX_HSPDM_FLAGSSET_ER_OFF (8u)

/** \brief Length for Ifx_HSPDM_FLAGSCLEAR_Bits.BAS */
#define IFX_HSPDM_FLAGSCLEAR_BAS_LEN (1u)

/** \brief Mask for Ifx_HSPDM_FLAGSCLEAR_Bits.BAS */
#define IFX_HSPDM_FLAGSCLEAR_BAS_MSK (0x1u)

/** \brief Offset for Ifx_HSPDM_FLAGSCLEAR_Bits.BAS */
#define IFX_HSPDM_FLAGSCLEAR_BAS_OFF (0u)

/** \brief Length for Ifx_HSPDM_FLAGSCLEAR_Bits.BAE */
#define IFX_HSPDM_FLAGSCLEAR_BAE_LEN (1u)

/** \brief Mask for Ifx_HSPDM_FLAGSCLEAR_Bits.BAE */
#define IFX_HSPDM_FLAGSCLEAR_BAE_MSK (0x1u)

/** \brief Offset for Ifx_HSPDM_FLAGSCLEAR_Bits.BAE */
#define IFX_HSPDM_FLAGSCLEAR_BAE_OFF (1u)

/** \brief Length for Ifx_HSPDM_FLAGSCLEAR_Bits.BBS */
#define IFX_HSPDM_FLAGSCLEAR_BBS_LEN (1u)

/** \brief Mask for Ifx_HSPDM_FLAGSCLEAR_Bits.BBS */
#define IFX_HSPDM_FLAGSCLEAR_BBS_MSK (0x1u)

/** \brief Offset for Ifx_HSPDM_FLAGSCLEAR_Bits.BBS */
#define IFX_HSPDM_FLAGSCLEAR_BBS_OFF (2u)

/** \brief Length for Ifx_HSPDM_FLAGSCLEAR_Bits.BBE */
#define IFX_HSPDM_FLAGSCLEAR_BBE_LEN (1u)

/** \brief Mask for Ifx_HSPDM_FLAGSCLEAR_Bits.BBE */
#define IFX_HSPDM_FLAGSCLEAR_BBE_MSK (0x1u)

/** \brief Offset for Ifx_HSPDM_FLAGSCLEAR_Bits.BBE */
#define IFX_HSPDM_FLAGSCLEAR_BBE_OFF (3u)

/** \brief Length for Ifx_HSPDM_FLAGSCLEAR_Bits.M0S */
#define IFX_HSPDM_FLAGSCLEAR_M0S_LEN (1u)

/** \brief Mask for Ifx_HSPDM_FLAGSCLEAR_Bits.M0S */
#define IFX_HSPDM_FLAGSCLEAR_M0S_MSK (0x1u)

/** \brief Offset for Ifx_HSPDM_FLAGSCLEAR_Bits.M0S */
#define IFX_HSPDM_FLAGSCLEAR_M0S_OFF (4u)

/** \brief Length for Ifx_HSPDM_FLAGSCLEAR_Bits.M0E */
#define IFX_HSPDM_FLAGSCLEAR_M0E_LEN (1u)

/** \brief Mask for Ifx_HSPDM_FLAGSCLEAR_Bits.M0E */
#define IFX_HSPDM_FLAGSCLEAR_M0E_MSK (0x1u)

/** \brief Offset for Ifx_HSPDM_FLAGSCLEAR_Bits.M0E */
#define IFX_HSPDM_FLAGSCLEAR_M0E_OFF (5u)

/** \brief Length for Ifx_HSPDM_FLAGSCLEAR_Bits.M1S */
#define IFX_HSPDM_FLAGSCLEAR_M1S_LEN (1u)

/** \brief Mask for Ifx_HSPDM_FLAGSCLEAR_Bits.M1S */
#define IFX_HSPDM_FLAGSCLEAR_M1S_MSK (0x1u)

/** \brief Offset for Ifx_HSPDM_FLAGSCLEAR_Bits.M1S */
#define IFX_HSPDM_FLAGSCLEAR_M1S_OFF (6u)

/** \brief Length for Ifx_HSPDM_FLAGSCLEAR_Bits.M1E */
#define IFX_HSPDM_FLAGSCLEAR_M1E_LEN (1u)

/** \brief Mask for Ifx_HSPDM_FLAGSCLEAR_Bits.M1E */
#define IFX_HSPDM_FLAGSCLEAR_M1E_MSK (0x1u)

/** \brief Offset for Ifx_HSPDM_FLAGSCLEAR_Bits.M1E */
#define IFX_HSPDM_FLAGSCLEAR_M1E_OFF (7u)

/** \brief Length for Ifx_HSPDM_FLAGSCLEAR_Bits.ER */
#define IFX_HSPDM_FLAGSCLEAR_ER_LEN (1u)

/** \brief Mask for Ifx_HSPDM_FLAGSCLEAR_Bits.ER */
#define IFX_HSPDM_FLAGSCLEAR_ER_MSK (0x1u)

/** \brief Offset for Ifx_HSPDM_FLAGSCLEAR_Bits.ER */
#define IFX_HSPDM_FLAGSCLEAR_ER_OFF (8u)

/** \brief Length for Ifx_HSPDM_FLAGSEN_Bits.BAS */
#define IFX_HSPDM_FLAGSEN_BAS_LEN (1u)

/** \brief Mask for Ifx_HSPDM_FLAGSEN_Bits.BAS */
#define IFX_HSPDM_FLAGSEN_BAS_MSK (0x1u)

/** \brief Offset for Ifx_HSPDM_FLAGSEN_Bits.BAS */
#define IFX_HSPDM_FLAGSEN_BAS_OFF (0u)

/** \brief Length for Ifx_HSPDM_FLAGSEN_Bits.BAE */
#define IFX_HSPDM_FLAGSEN_BAE_LEN (1u)

/** \brief Mask for Ifx_HSPDM_FLAGSEN_Bits.BAE */
#define IFX_HSPDM_FLAGSEN_BAE_MSK (0x1u)

/** \brief Offset for Ifx_HSPDM_FLAGSEN_Bits.BAE */
#define IFX_HSPDM_FLAGSEN_BAE_OFF (1u)

/** \brief Length for Ifx_HSPDM_FLAGSEN_Bits.BBS */
#define IFX_HSPDM_FLAGSEN_BBS_LEN (1u)

/** \brief Mask for Ifx_HSPDM_FLAGSEN_Bits.BBS */
#define IFX_HSPDM_FLAGSEN_BBS_MSK (0x1u)

/** \brief Offset for Ifx_HSPDM_FLAGSEN_Bits.BBS */
#define IFX_HSPDM_FLAGSEN_BBS_OFF (2u)

/** \brief Length for Ifx_HSPDM_FLAGSEN_Bits.BBE */
#define IFX_HSPDM_FLAGSEN_BBE_LEN (1u)

/** \brief Mask for Ifx_HSPDM_FLAGSEN_Bits.BBE */
#define IFX_HSPDM_FLAGSEN_BBE_MSK (0x1u)

/** \brief Offset for Ifx_HSPDM_FLAGSEN_Bits.BBE */
#define IFX_HSPDM_FLAGSEN_BBE_OFF (3u)

/** \brief Length for Ifx_HSPDM_FLAGSEN_Bits.M0S */
#define IFX_HSPDM_FLAGSEN_M0S_LEN (1u)

/** \brief Mask for Ifx_HSPDM_FLAGSEN_Bits.M0S */
#define IFX_HSPDM_FLAGSEN_M0S_MSK (0x1u)

/** \brief Offset for Ifx_HSPDM_FLAGSEN_Bits.M0S */
#define IFX_HSPDM_FLAGSEN_M0S_OFF (4u)

/** \brief Length for Ifx_HSPDM_FLAGSEN_Bits.M0E */
#define IFX_HSPDM_FLAGSEN_M0E_LEN (1u)

/** \brief Mask for Ifx_HSPDM_FLAGSEN_Bits.M0E */
#define IFX_HSPDM_FLAGSEN_M0E_MSK (0x1u)

/** \brief Offset for Ifx_HSPDM_FLAGSEN_Bits.M0E */
#define IFX_HSPDM_FLAGSEN_M0E_OFF (5u)

/** \brief Length for Ifx_HSPDM_FLAGSEN_Bits.M1S */
#define IFX_HSPDM_FLAGSEN_M1S_LEN (1u)

/** \brief Mask for Ifx_HSPDM_FLAGSEN_Bits.M1S */
#define IFX_HSPDM_FLAGSEN_M1S_MSK (0x1u)

/** \brief Offset for Ifx_HSPDM_FLAGSEN_Bits.M1S */
#define IFX_HSPDM_FLAGSEN_M1S_OFF (6u)

/** \brief Length for Ifx_HSPDM_FLAGSEN_Bits.M1E */
#define IFX_HSPDM_FLAGSEN_M1E_LEN (1u)

/** \brief Mask for Ifx_HSPDM_FLAGSEN_Bits.M1E */
#define IFX_HSPDM_FLAGSEN_M1E_MSK (0x1u)

/** \brief Offset for Ifx_HSPDM_FLAGSEN_Bits.M1E */
#define IFX_HSPDM_FLAGSEN_M1E_OFF (7u)

/** \brief Length for Ifx_HSPDM_FLAGSEN_Bits.ER */
#define IFX_HSPDM_FLAGSEN_ER_LEN (1u)

/** \brief Mask for Ifx_HSPDM_FLAGSEN_Bits.ER */
#define IFX_HSPDM_FLAGSEN_ER_MSK (0x1u)

/** \brief Offset for Ifx_HSPDM_FLAGSEN_Bits.ER */
#define IFX_HSPDM_FLAGSEN_ER_OFF (8u)

/** \brief Length for Ifx_HSPDM_OCS_Bits.SUS */
#define IFX_HSPDM_OCS_SUS_LEN (4u)

/** \brief Mask for Ifx_HSPDM_OCS_Bits.SUS */
#define IFX_HSPDM_OCS_SUS_MSK (0xfu)

/** \brief Offset for Ifx_HSPDM_OCS_Bits.SUS */
#define IFX_HSPDM_OCS_SUS_OFF (24u)

/** \brief Length for Ifx_HSPDM_OCS_Bits.SUS_P */
#define IFX_HSPDM_OCS_SUS_P_LEN (1u)

/** \brief Mask for Ifx_HSPDM_OCS_Bits.SUS_P */
#define IFX_HSPDM_OCS_SUS_P_MSK (0x1u)

/** \brief Offset for Ifx_HSPDM_OCS_Bits.SUS_P */
#define IFX_HSPDM_OCS_SUS_P_OFF (28u)

/** \brief Length for Ifx_HSPDM_OCS_Bits.SUSSTA */
#define IFX_HSPDM_OCS_SUSSTA_LEN (1u)

/** \brief Mask for Ifx_HSPDM_OCS_Bits.SUSSTA */
#define IFX_HSPDM_OCS_SUSSTA_MSK (0x1u)

/** \brief Offset for Ifx_HSPDM_OCS_Bits.SUSSTA */
#define IFX_HSPDM_OCS_SUSSTA_OFF (29u)

/** \brief Length for Ifx_HSPDM_KRSTCLR_Bits.CLR */
#define IFX_HSPDM_KRSTCLR_CLR_LEN (1u)

/** \brief Mask for Ifx_HSPDM_KRSTCLR_Bits.CLR */
#define IFX_HSPDM_KRSTCLR_CLR_MSK (0x1u)

/** \brief Offset for Ifx_HSPDM_KRSTCLR_Bits.CLR */
#define IFX_HSPDM_KRSTCLR_CLR_OFF (0u)

/** \brief Length for Ifx_HSPDM_KRST1_Bits.RST */
#define IFX_HSPDM_KRST1_RST_LEN (1u)

/** \brief Mask for Ifx_HSPDM_KRST1_Bits.RST */
#define IFX_HSPDM_KRST1_RST_MSK (0x1u)

/** \brief Offset for Ifx_HSPDM_KRST1_Bits.RST */
#define IFX_HSPDM_KRST1_RST_OFF (0u)

/** \brief Length for Ifx_HSPDM_KRST0_Bits.RST */
#define IFX_HSPDM_KRST0_RST_LEN (1u)

/** \brief Mask for Ifx_HSPDM_KRST0_Bits.RST */
#define IFX_HSPDM_KRST0_RST_MSK (0x1u)

/** \brief Offset for Ifx_HSPDM_KRST0_Bits.RST */
#define IFX_HSPDM_KRST0_RST_OFF (0u)

/** \brief Length for Ifx_HSPDM_KRST0_Bits.RSTSTAT */
#define IFX_HSPDM_KRST0_RSTSTAT_LEN (1u)

/** \brief Mask for Ifx_HSPDM_KRST0_Bits.RSTSTAT */
#define IFX_HSPDM_KRST0_RSTSTAT_MSK (0x1u)

/** \brief Offset for Ifx_HSPDM_KRST0_Bits.RSTSTAT */
#define IFX_HSPDM_KRST0_RSTSTAT_OFF (1u)

/** \brief Length for Ifx_HSPDM_ACCEN0_Bits.EN0 */
#define IFX_HSPDM_ACCEN0_EN0_LEN (1u)

/** \brief Mask for Ifx_HSPDM_ACCEN0_Bits.EN0 */
#define IFX_HSPDM_ACCEN0_EN0_MSK (0x1u)

/** \brief Offset for Ifx_HSPDM_ACCEN0_Bits.EN0 */
#define IFX_HSPDM_ACCEN0_EN0_OFF (0u)

/** \brief Length for Ifx_HSPDM_ACCEN0_Bits.EN1 */
#define IFX_HSPDM_ACCEN0_EN1_LEN (1u)

/** \brief Mask for Ifx_HSPDM_ACCEN0_Bits.EN1 */
#define IFX_HSPDM_ACCEN0_EN1_MSK (0x1u)

/** \brief Offset for Ifx_HSPDM_ACCEN0_Bits.EN1 */
#define IFX_HSPDM_ACCEN0_EN1_OFF (1u)

/** \brief Length for Ifx_HSPDM_ACCEN0_Bits.EN2 */
#define IFX_HSPDM_ACCEN0_EN2_LEN (1u)

/** \brief Mask for Ifx_HSPDM_ACCEN0_Bits.EN2 */
#define IFX_HSPDM_ACCEN0_EN2_MSK (0x1u)

/** \brief Offset for Ifx_HSPDM_ACCEN0_Bits.EN2 */
#define IFX_HSPDM_ACCEN0_EN2_OFF (2u)

/** \brief Length for Ifx_HSPDM_ACCEN0_Bits.EN3 */
#define IFX_HSPDM_ACCEN0_EN3_LEN (1u)

/** \brief Mask for Ifx_HSPDM_ACCEN0_Bits.EN3 */
#define IFX_HSPDM_ACCEN0_EN3_MSK (0x1u)

/** \brief Offset for Ifx_HSPDM_ACCEN0_Bits.EN3 */
#define IFX_HSPDM_ACCEN0_EN3_OFF (3u)

/** \brief Length for Ifx_HSPDM_ACCEN0_Bits.EN4 */
#define IFX_HSPDM_ACCEN0_EN4_LEN (1u)

/** \brief Mask for Ifx_HSPDM_ACCEN0_Bits.EN4 */
#define IFX_HSPDM_ACCEN0_EN4_MSK (0x1u)

/** \brief Offset for Ifx_HSPDM_ACCEN0_Bits.EN4 */
#define IFX_HSPDM_ACCEN0_EN4_OFF (4u)

/** \brief Length for Ifx_HSPDM_ACCEN0_Bits.EN5 */
#define IFX_HSPDM_ACCEN0_EN5_LEN (1u)

/** \brief Mask for Ifx_HSPDM_ACCEN0_Bits.EN5 */
#define IFX_HSPDM_ACCEN0_EN5_MSK (0x1u)

/** \brief Offset for Ifx_HSPDM_ACCEN0_Bits.EN5 */
#define IFX_HSPDM_ACCEN0_EN5_OFF (5u)

/** \brief Length for Ifx_HSPDM_ACCEN0_Bits.EN6 */
#define IFX_HSPDM_ACCEN0_EN6_LEN (1u)

/** \brief Mask for Ifx_HSPDM_ACCEN0_Bits.EN6 */
#define IFX_HSPDM_ACCEN0_EN6_MSK (0x1u)

/** \brief Offset for Ifx_HSPDM_ACCEN0_Bits.EN6 */
#define IFX_HSPDM_ACCEN0_EN6_OFF (6u)

/** \brief Length for Ifx_HSPDM_ACCEN0_Bits.EN7 */
#define IFX_HSPDM_ACCEN0_EN7_LEN (1u)

/** \brief Mask for Ifx_HSPDM_ACCEN0_Bits.EN7 */
#define IFX_HSPDM_ACCEN0_EN7_MSK (0x1u)

/** \brief Offset for Ifx_HSPDM_ACCEN0_Bits.EN7 */
#define IFX_HSPDM_ACCEN0_EN7_OFF (7u)

/** \brief Length for Ifx_HSPDM_ACCEN0_Bits.EN8 */
#define IFX_HSPDM_ACCEN0_EN8_LEN (1u)

/** \brief Mask for Ifx_HSPDM_ACCEN0_Bits.EN8 */
#define IFX_HSPDM_ACCEN0_EN8_MSK (0x1u)

/** \brief Offset for Ifx_HSPDM_ACCEN0_Bits.EN8 */
#define IFX_HSPDM_ACCEN0_EN8_OFF (8u)

/** \brief Length for Ifx_HSPDM_ACCEN0_Bits.EN9 */
#define IFX_HSPDM_ACCEN0_EN9_LEN (1u)

/** \brief Mask for Ifx_HSPDM_ACCEN0_Bits.EN9 */
#define IFX_HSPDM_ACCEN0_EN9_MSK (0x1u)

/** \brief Offset for Ifx_HSPDM_ACCEN0_Bits.EN9 */
#define IFX_HSPDM_ACCEN0_EN9_OFF (9u)

/** \brief Length for Ifx_HSPDM_ACCEN0_Bits.EN10 */
#define IFX_HSPDM_ACCEN0_EN10_LEN (1u)

/** \brief Mask for Ifx_HSPDM_ACCEN0_Bits.EN10 */
#define IFX_HSPDM_ACCEN0_EN10_MSK (0x1u)

/** \brief Offset for Ifx_HSPDM_ACCEN0_Bits.EN10 */
#define IFX_HSPDM_ACCEN0_EN10_OFF (10u)

/** \brief Length for Ifx_HSPDM_ACCEN0_Bits.EN11 */
#define IFX_HSPDM_ACCEN0_EN11_LEN (1u)

/** \brief Mask for Ifx_HSPDM_ACCEN0_Bits.EN11 */
#define IFX_HSPDM_ACCEN0_EN11_MSK (0x1u)

/** \brief Offset for Ifx_HSPDM_ACCEN0_Bits.EN11 */
#define IFX_HSPDM_ACCEN0_EN11_OFF (11u)

/** \brief Length for Ifx_HSPDM_ACCEN0_Bits.EN12 */
#define IFX_HSPDM_ACCEN0_EN12_LEN (1u)

/** \brief Mask for Ifx_HSPDM_ACCEN0_Bits.EN12 */
#define IFX_HSPDM_ACCEN0_EN12_MSK (0x1u)

/** \brief Offset for Ifx_HSPDM_ACCEN0_Bits.EN12 */
#define IFX_HSPDM_ACCEN0_EN12_OFF (12u)

/** \brief Length for Ifx_HSPDM_ACCEN0_Bits.EN13 */
#define IFX_HSPDM_ACCEN0_EN13_LEN (1u)

/** \brief Mask for Ifx_HSPDM_ACCEN0_Bits.EN13 */
#define IFX_HSPDM_ACCEN0_EN13_MSK (0x1u)

/** \brief Offset for Ifx_HSPDM_ACCEN0_Bits.EN13 */
#define IFX_HSPDM_ACCEN0_EN13_OFF (13u)

/** \brief Length for Ifx_HSPDM_ACCEN0_Bits.EN14 */
#define IFX_HSPDM_ACCEN0_EN14_LEN (1u)

/** \brief Mask for Ifx_HSPDM_ACCEN0_Bits.EN14 */
#define IFX_HSPDM_ACCEN0_EN14_MSK (0x1u)

/** \brief Offset for Ifx_HSPDM_ACCEN0_Bits.EN14 */
#define IFX_HSPDM_ACCEN0_EN14_OFF (14u)

/** \brief Length for Ifx_HSPDM_ACCEN0_Bits.EN15 */
#define IFX_HSPDM_ACCEN0_EN15_LEN (1u)

/** \brief Mask for Ifx_HSPDM_ACCEN0_Bits.EN15 */
#define IFX_HSPDM_ACCEN0_EN15_MSK (0x1u)

/** \brief Offset for Ifx_HSPDM_ACCEN0_Bits.EN15 */
#define IFX_HSPDM_ACCEN0_EN15_OFF (15u)

/** \brief Length for Ifx_HSPDM_ACCEN0_Bits.EN16 */
#define IFX_HSPDM_ACCEN0_EN16_LEN (1u)

/** \brief Mask for Ifx_HSPDM_ACCEN0_Bits.EN16 */
#define IFX_HSPDM_ACCEN0_EN16_MSK (0x1u)

/** \brief Offset for Ifx_HSPDM_ACCEN0_Bits.EN16 */
#define IFX_HSPDM_ACCEN0_EN16_OFF (16u)

/** \brief Length for Ifx_HSPDM_ACCEN0_Bits.EN17 */
#define IFX_HSPDM_ACCEN0_EN17_LEN (1u)

/** \brief Mask for Ifx_HSPDM_ACCEN0_Bits.EN17 */
#define IFX_HSPDM_ACCEN0_EN17_MSK (0x1u)

/** \brief Offset for Ifx_HSPDM_ACCEN0_Bits.EN17 */
#define IFX_HSPDM_ACCEN0_EN17_OFF (17u)

/** \brief Length for Ifx_HSPDM_ACCEN0_Bits.EN18 */
#define IFX_HSPDM_ACCEN0_EN18_LEN (1u)

/** \brief Mask for Ifx_HSPDM_ACCEN0_Bits.EN18 */
#define IFX_HSPDM_ACCEN0_EN18_MSK (0x1u)

/** \brief Offset for Ifx_HSPDM_ACCEN0_Bits.EN18 */
#define IFX_HSPDM_ACCEN0_EN18_OFF (18u)

/** \brief Length for Ifx_HSPDM_ACCEN0_Bits.EN19 */
#define IFX_HSPDM_ACCEN0_EN19_LEN (1u)

/** \brief Mask for Ifx_HSPDM_ACCEN0_Bits.EN19 */
#define IFX_HSPDM_ACCEN0_EN19_MSK (0x1u)

/** \brief Offset for Ifx_HSPDM_ACCEN0_Bits.EN19 */
#define IFX_HSPDM_ACCEN0_EN19_OFF (19u)

/** \brief Length for Ifx_HSPDM_ACCEN0_Bits.EN20 */
#define IFX_HSPDM_ACCEN0_EN20_LEN (1u)

/** \brief Mask for Ifx_HSPDM_ACCEN0_Bits.EN20 */
#define IFX_HSPDM_ACCEN0_EN20_MSK (0x1u)

/** \brief Offset for Ifx_HSPDM_ACCEN0_Bits.EN20 */
#define IFX_HSPDM_ACCEN0_EN20_OFF (20u)

/** \brief Length for Ifx_HSPDM_ACCEN0_Bits.EN21 */
#define IFX_HSPDM_ACCEN0_EN21_LEN (1u)

/** \brief Mask for Ifx_HSPDM_ACCEN0_Bits.EN21 */
#define IFX_HSPDM_ACCEN0_EN21_MSK (0x1u)

/** \brief Offset for Ifx_HSPDM_ACCEN0_Bits.EN21 */
#define IFX_HSPDM_ACCEN0_EN21_OFF (21u)

/** \brief Length for Ifx_HSPDM_ACCEN0_Bits.EN22 */
#define IFX_HSPDM_ACCEN0_EN22_LEN (1u)

/** \brief Mask for Ifx_HSPDM_ACCEN0_Bits.EN22 */
#define IFX_HSPDM_ACCEN0_EN22_MSK (0x1u)

/** \brief Offset for Ifx_HSPDM_ACCEN0_Bits.EN22 */
#define IFX_HSPDM_ACCEN0_EN22_OFF (22u)

/** \brief Length for Ifx_HSPDM_ACCEN0_Bits.EN23 */
#define IFX_HSPDM_ACCEN0_EN23_LEN (1u)

/** \brief Mask for Ifx_HSPDM_ACCEN0_Bits.EN23 */
#define IFX_HSPDM_ACCEN0_EN23_MSK (0x1u)

/** \brief Offset for Ifx_HSPDM_ACCEN0_Bits.EN23 */
#define IFX_HSPDM_ACCEN0_EN23_OFF (23u)

/** \brief Length for Ifx_HSPDM_ACCEN0_Bits.EN24 */
#define IFX_HSPDM_ACCEN0_EN24_LEN (1u)

/** \brief Mask for Ifx_HSPDM_ACCEN0_Bits.EN24 */
#define IFX_HSPDM_ACCEN0_EN24_MSK (0x1u)

/** \brief Offset for Ifx_HSPDM_ACCEN0_Bits.EN24 */
#define IFX_HSPDM_ACCEN0_EN24_OFF (24u)

/** \brief Length for Ifx_HSPDM_ACCEN0_Bits.EN25 */
#define IFX_HSPDM_ACCEN0_EN25_LEN (1u)

/** \brief Mask for Ifx_HSPDM_ACCEN0_Bits.EN25 */
#define IFX_HSPDM_ACCEN0_EN25_MSK (0x1u)

/** \brief Offset for Ifx_HSPDM_ACCEN0_Bits.EN25 */
#define IFX_HSPDM_ACCEN0_EN25_OFF (25u)

/** \brief Length for Ifx_HSPDM_ACCEN0_Bits.EN26 */
#define IFX_HSPDM_ACCEN0_EN26_LEN (1u)

/** \brief Mask for Ifx_HSPDM_ACCEN0_Bits.EN26 */
#define IFX_HSPDM_ACCEN0_EN26_MSK (0x1u)

/** \brief Offset for Ifx_HSPDM_ACCEN0_Bits.EN26 */
#define IFX_HSPDM_ACCEN0_EN26_OFF (26u)

/** \brief Length for Ifx_HSPDM_ACCEN0_Bits.EN27 */
#define IFX_HSPDM_ACCEN0_EN27_LEN (1u)

/** \brief Mask for Ifx_HSPDM_ACCEN0_Bits.EN27 */
#define IFX_HSPDM_ACCEN0_EN27_MSK (0x1u)

/** \brief Offset for Ifx_HSPDM_ACCEN0_Bits.EN27 */
#define IFX_HSPDM_ACCEN0_EN27_OFF (27u)

/** \brief Length for Ifx_HSPDM_ACCEN0_Bits.EN28 */
#define IFX_HSPDM_ACCEN0_EN28_LEN (1u)

/** \brief Mask for Ifx_HSPDM_ACCEN0_Bits.EN28 */
#define IFX_HSPDM_ACCEN0_EN28_MSK (0x1u)

/** \brief Offset for Ifx_HSPDM_ACCEN0_Bits.EN28 */
#define IFX_HSPDM_ACCEN0_EN28_OFF (28u)

/** \brief Length for Ifx_HSPDM_ACCEN0_Bits.EN29 */
#define IFX_HSPDM_ACCEN0_EN29_LEN (1u)

/** \brief Mask for Ifx_HSPDM_ACCEN0_Bits.EN29 */
#define IFX_HSPDM_ACCEN0_EN29_MSK (0x1u)

/** \brief Offset for Ifx_HSPDM_ACCEN0_Bits.EN29 */
#define IFX_HSPDM_ACCEN0_EN29_OFF (29u)

/** \brief Length for Ifx_HSPDM_ACCEN0_Bits.EN30 */
#define IFX_HSPDM_ACCEN0_EN30_LEN (1u)

/** \brief Mask for Ifx_HSPDM_ACCEN0_Bits.EN30 */
#define IFX_HSPDM_ACCEN0_EN30_MSK (0x1u)

/** \brief Offset for Ifx_HSPDM_ACCEN0_Bits.EN30 */
#define IFX_HSPDM_ACCEN0_EN30_OFF (30u)

/** \brief Length for Ifx_HSPDM_ACCEN0_Bits.EN31 */
#define IFX_HSPDM_ACCEN0_EN31_LEN (1u)

/** \brief Mask for Ifx_HSPDM_ACCEN0_Bits.EN31 */
#define IFX_HSPDM_ACCEN0_EN31_MSK (0x1u)

/** \brief Offset for Ifx_HSPDM_ACCEN0_Bits.EN31 */
#define IFX_HSPDM_ACCEN0_EN31_OFF (31u)

/** \}  */

/******************************************************************************/

/******************************************************************************/

#endif /* IFXHSPDM_BF_H */
