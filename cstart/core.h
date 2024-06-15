/*====================================================================
* Project:  Board Support Package (BSP)
* Function: CORE initialisation structure
*
* Copyright HighTec EDV-Systeme GmbH 1982-2020
*====================================================================*/

#ifndef __CORE_H__
#define __CORE_H__

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#include "tc39xb/IfxScu_reg.h"

/*
 * Structures of the copy/clear tables
 * to initialise the data ram
 */
typedef struct cleartable
{
	unsigned long *base;	/* base address of this area */
	long size;				/* size of this area */
} ClearTable_t;

typedef struct copytable
{
	unsigned long *src;		/* base address of the initial data */
	unsigned long *dst;		/* destination address to copy to */
	long size;				/* size of the area to copy */
} CopyTable_t;


/*
 * the core initialisation structure
 */
typedef struct coreinit
{
	const ClearTable_t	*cleartable;	/* the clear table of this CPU */
	const CopyTable_t	*copytable;		/* the copy table */
	unsigned long		*istack;		/* the interrupt stack */
	unsigned long		*ustack;		/* the initial userstack */
	unsigned long		*smallA0;		/* base of the small data area with base A0 */
	unsigned long		*smallA1;		/* base of the small data area with base A1 */
	unsigned long		*smallA8;		/* base of the small data area with base A8 */
	unsigned long		*smallA9;		/* base of the small data area with base A9 */
	unsigned long		csaBase;		/* base address of the CSA area */
	unsigned long		csaSize;		/* size of the CSA area */
	unsigned long		inttab;		    /* base of the interrupt table */
	unsigned long		traptab;		/* base of the trap table */
	volatile Ifx_SCU_WDTCPU_CON0 *wdtCon0;	/* watchdog register base (address of wdtcon0) */
	volatile Ifx_SCU_WDTCPU_CON1 *wdtCon1;	/* watchdog register base (address of wdtcon1) */
	int (*main)(int, char **);			/* the main function */
} CoreInit_t;

/*
 * the boot mode header description
 */
typedef struct bmhd
{
	void (*startAddress)(void);			/* the User Code Start Address */
	unsigned short		bmIndex;		/* the Boot Mode Index (BMI) */
	unsigned short		bmhdID;			/* the Boot Mode Header ID (0xb359) */
	unsigned long		chkStart;		/* Memory Range to be checked - Start Address */
	unsigned long		chkEnd;			/* Memory Range to be checked - End Address */
	unsigned long		crcRange;		/* Check Result for the Memory Range */
	unsigned long		invCrcRange;	/* Inverted Check Result for the Memory Range */
	unsigned long		crcHead;		/* Check Result of the ABM Header (0 ..  0x17) */
	unsigned long		invCrcHead;		/* Inverted Check Result of the ABM Header */
} BMHD_t;


/*
 * CSA structure
 */
typedef struct
{
	unsigned int reg[16];
} csa_t;

/*
 * PCXI register definition
 */
typedef union
{
	struct
	{
		unsigned int pcxo:16;
		unsigned int pcxs:4;
		unsigned int res:12;
	} bits;
	unsigned int reg;
} pcxi_t;

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __CORE_H__ */
