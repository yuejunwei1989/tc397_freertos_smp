/**
 * \file IfxEbcu_reg.h
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
 * \defgroup IfxSfr_Ebcu_Registers_Cfg Ebcu address
 * \ingroup IfxSfr_Ebcu_Registers
 * 
 * \defgroup IfxSfr_Ebcu_Registers_Cfg_BaseAddress Base address
 * \ingroup IfxSfr_Ebcu_Registers_Cfg
 *
 * \defgroup IfxSfr_Ebcu_Registers_Cfg_Ebcu 2-EBCU
 * \ingroup IfxSfr_Ebcu_Registers_Cfg
 *
 *
 */
#ifndef IFXEBCU_REG_H
#define IFXEBCU_REG_H 1
/******************************************************************************/
#include "IfxEbcu_regdef.h"
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/

/** \addtogroup IfxSfr_Ebcu_Registers_Cfg_BaseAddress
 * \{  */

/** \brief EBCU object */
#define MODULE_EBCU /*lint --e(923, 9078)*/ ((*(Ifx_EBCU*)0xFA000100u))
/** \}  */


/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Ebcu_Registers_Cfg_Ebcu
 * \{  */
/** \brief 8, Module Identification Register */
#define EBCU_ID /*lint --e(923, 9078)*/ (*(volatile Ifx_EBCU_ID*)0xFA000108u)

/** \brief 10, BCU Control Register */
#define EBCU_CON /*lint --e(923, 9078)*/ (*(volatile Ifx_EBCU_CON*)0xFA000110u)

/** \brief 14, Arbiter Priority Register High */
#define EBCU_PRIOH /*lint --e(923, 9078)*/ (*(volatile Ifx_EBCU_PRIOH*)0xFA000114u)

/** \brief 18, Arbiter Priority Register Low */
#define EBCU_PRIOL /*lint --e(923, 9078)*/ (*(volatile Ifx_EBCU_PRIOL*)0xFA000118u)

/** \brief 20, BCU Error Control Capture Register */
#define EBCU_ECON /*lint --e(923, 9078)*/ (*(volatile Ifx_EBCU_ECON*)0xFA000120u)

/** \brief 24, BCU Error Address Capture Register */
#define EBCU_EADD /*lint --e(923, 9078)*/ (*(volatile Ifx_EBCU_EADD*)0xFA000124u)

/** \brief 28, BCU Error Data Capture Register */
#define EBCU_EDAT /*lint --e(923, 9078)*/ (*(volatile Ifx_EBCU_EDAT*)0xFA000128u)

/** \brief 30, BCU Debug Control Register */
#define EBCU_DBCNTL /*lint --e(923, 9078)*/ (*(volatile Ifx_EBCU_DBCNTL*)0xFA000130u)

/** \brief 34, EBCU Debug Grant Mask Register */
#define EBCU_DBGRNT /*lint --e(923, 9078)*/ (*(volatile Ifx_EBCU_DBGRNT*)0xFA000134u)

/** \brief 38, BCU Debug Address 1 Register */
#define EBCU_DBADR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_EBCU_DBADR1*)0xFA000138u)

/** \brief 3C, BCU Debug Address 2 Register */
#define EBCU_DBADR2 /*lint --e(923, 9078)*/ (*(volatile Ifx_EBCU_DBADR2*)0xFA00013Cu)

/** \brief 40, BCU Debug Bus Operation Signals Register */
#define EBCU_DBBOS /*lint --e(923, 9078)*/ (*(volatile Ifx_EBCU_DBBOS*)0xFA000140u)

/** \brief 44, EBCU Debug Trapped Master Register */
#define EBCU_DBGNTT /*lint --e(923, 9078)*/ (*(volatile Ifx_EBCU_DBGNTT*)0xFA000144u)

/** \brief 48, BCU Debug Trapped Address Register */
#define EBCU_DBADRT /*lint --e(923, 9078)*/ (*(volatile Ifx_EBCU_DBADRT*)0xFA000148u)

/** \brief 4C, BCU Debug Trapped Bus Operation Signals Register */
#define EBCU_DBBOST /*lint --e(923, 9078)*/ (*(volatile Ifx_EBCU_DBBOST*)0xFA00014Cu)

/** \brief 50, BCU Debug Data Status Register */
#define EBCU_DBDAT /*lint --e(923, 9078)*/ (*(volatile Ifx_EBCU_DBDAT*)0xFA000150u)

/** \brief 60, BCU EDC Alarm Status Register 0 */
#define EBCU_ALSTAT0 /*lint --e(923, 9078)*/ (*(volatile Ifx_EBCU_ALSTAT*)0xFA000160u)

/** \brief 64, BCU EDC Alarm Status Register 1 */
#define EBCU_ALSTAT1 /*lint --e(923, 9078)*/ (*(volatile Ifx_EBCU_ALSTAT*)0xFA000164u)

/** \brief 68, BCU EDC Alarm Status Register 2 */
#define EBCU_ALSTAT2 /*lint --e(923, 9078)*/ (*(volatile Ifx_EBCU_ALSTAT*)0xFA000168u)

/** \brief 6C, BCU EDC Alarm Status Register 3 */
#define EBCU_ALSTAT3 /*lint --e(923, 9078)*/ (*(volatile Ifx_EBCU_ALSTAT*)0xFA00016Cu)

/** \brief 70, BCU EDC Alarm Clear Register 0 */
#define EBCU_ALCLR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_EBCU_ALCLR*)0xFA000170u)

/** \brief 74, BCU EDC Alarm Clear Register 1 */
#define EBCU_ALCLR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_EBCU_ALCLR*)0xFA000174u)

/** \brief 78, BCU EDC Alarm Clear Register 2 */
#define EBCU_ALCLR2 /*lint --e(923, 9078)*/ (*(volatile Ifx_EBCU_ALCLR*)0xFA000178u)

/** \brief 7C, BCU EDC Alarm Clear Register 3 */
#define EBCU_ALCLR3 /*lint --e(923, 9078)*/ (*(volatile Ifx_EBCU_ALCLR*)0xFA00017Cu)

/** \brief 80, BCU EDC Alarm Control Register */
#define EBCU_ALCTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_EBCU_ALCTRL*)0xFA000180u)

/** \brief 84, FPI Error Generation Control Register */
#define EBCU_FEGEN /*lint --e(923, 9078)*/ (*(volatile Ifx_EBCU_FEGEN*)0xFA000184u)

/** \brief F8, Access Enable Register 1 */
#define EBCU_ACCEN1 /*lint --e(923, 9078)*/ (*(volatile Ifx_EBCU_ACCEN1*)0xFA0001F8u)

/** \brief FC, Access Enable Register 0 */
#define EBCU_ACCEN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_EBCU_ACCEN0*)0xFA0001FCu)


/** \}  */

/******************************************************************************/

/******************************************************************************/

#endif /* IFXEBCU_REG_H */
