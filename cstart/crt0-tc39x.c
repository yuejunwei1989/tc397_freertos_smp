/*====================================================================
* Project:  Board Support Package (BSP)
* Function: CORE startup and initialisation function
*
* Copyright HighTec EDV-Systeme GmbH 1982-2020
*====================================================================*/
#pragma GCC optimize ("-O2")
#ifndef __TRICORE_NAME__
#ifdef __TC39XX__
#define __TRICORE_NAME__	0x3900
#else
#error "TriCore derivative is not defined"
#endif /* __TC39XX__ */
#endif /* __TRICORE_NAME__ */

#include <stdlib.h>
#include <string.h>
#include <machine/intrinsics.h>

#include "tc39xb/IfxScu_reg.h"
#include "tc39xb/IfxCpu_reg.h"
#include "tc39xb/IfxCpu_bf.h"

#include "core.h"

#ifdef __TC39XX__
/* remark: CPU5 uses CORE_ID 6 !! */
#define MAX_CORES		(6 + 1)
#endif /* __TC39XX__ */


/* the initial trap table */
void first_trap_table(void) __attribute__ ((noreturn));


void _start(void);
void cstart(const CoreInit_t *) __attribute__ ((interrupt,noinline));
static void clear_end_init(volatile unsigned int *wdtbase) __attribute__ ((interrupt,noinline));
static void set_end_init(volatile unsigned int *wdtbase) __attribute__ ((interrupt,noinline));
static void clear_table_func(const ClearTable_t *table) __attribute__ ((interrupt));
static void copy_table_func(const CopyTable_t *table) __attribute__ ((interrupt));
static void init_csa(unsigned int csa_base, unsigned int csa_size) __attribute__ ((interrupt));
void start_core(unsigned int coreId);


/* declare symbol used by linker for memory map checking */
#define _STRINGIFY(x)	#x

#define DECL_SYM(name,val)							\
	__asm (".global       " #name );				\
	__asm (".set  " #name "," _STRINGIFY(val));		\
	__asm (".type " #name ",@object");

DECL_SYM(__TRICORE_DERIVATE_NAME__,__TRICORE_NAME__);


#pragma section ".start" ax 4
/*
    The BMI header for AURIX 2G is no longer located in program flash sectors.
    There are dedicated UCBs in data flash: UCB_BMHDx_ORIG + UCB_BMHDx_COPY (x=0,1,2,3).
 */
/*********************************************************************************
 * startup code
 *********************************************************************************/
void _RESET(void)
{
	__asm (".global _START");
	/* we must make a jump to cached segment, why trap_tab follow */
	__asm ("_START: movh.a %a15,hi:_start");
	__asm ("  lea  %a15,[%a15]lo:_start");
	__asm ("  ji %a15");
}
#pragma section


/* provide compiler information: symbols are not small addressable */
#pragma section ".data" aw
extern const ClearTable_t	__clear_table;
extern const CopyTable_t	__copy_table;
extern const ClearTable_t	__clear_table_CPU0_;
extern const CopyTable_t	__copy_table_CPU0_;
extern unsigned long		__ISTACK0;
extern unsigned long		__USTACK0;
extern unsigned long		_SMALL_DATA__CPU0_ __attribute__ ((weak));
extern unsigned long		_SMALL_DATA2__CPU0_ __attribute__ ((weak));
extern unsigned long		_SMALL_DATA3__CPU0_ __attribute__ ((weak));
extern unsigned long		_SMALL_DATA4__CPU0_ __attribute__ ((weak));
extern unsigned long		__CSA0;
extern unsigned long		LCF_CSA0_SIZE;
extern unsigned long		__INTTAB_CPU0;
extern unsigned long		__TRAPTAB_CPU0;
extern int init_applproc0(int, char **);

extern const ClearTable_t	__clear_table_CPU1_;
extern const CopyTable_t	__copy_table_CPU1_;
extern unsigned long		__ISTACK1;
extern unsigned long		__USTACK1;
extern unsigned long		_SMALL_DATA__CPU1_ __attribute__ ((weak));
extern unsigned long		_SMALL_DATA2__CPU1_ __attribute__ ((weak));
extern unsigned long		_SMALL_DATA3__CPU1_ __attribute__ ((weak));
extern unsigned long		_SMALL_DATA4__CPU1_ __attribute__ ((weak));
extern unsigned long		__CSA1;
extern unsigned long		LCF_CSA1_SIZE;
extern unsigned long		__INTTAB_CPU1;
extern unsigned long		__TRAPTAB_CPU1;

extern const ClearTable_t	__clear_table_CPU2_;
extern const CopyTable_t	__copy_table_CPU2_;
extern unsigned long		__ISTACK2;
extern unsigned long		__USTACK2;
extern unsigned long		_SMALL_DATA__CPU2_ __attribute__ ((weak));
extern unsigned long		_SMALL_DATA2__CPU2_ __attribute__ ((weak));
extern unsigned long		_SMALL_DATA3__CPU2_ __attribute__ ((weak));
extern unsigned long		_SMALL_DATA4__CPU2_ __attribute__ ((weak));
extern unsigned long		__CSA2;
extern unsigned long		LCF_CSA2_SIZE;
extern unsigned long		__INTTAB_CPU2;
extern unsigned long		__TRAPTAB_CPU2;

extern const ClearTable_t	__clear_table_CPU3_;
extern const CopyTable_t	__copy_table_CPU3_;
extern unsigned long		__ISTACK3;
extern unsigned long		__USTACK3;
extern unsigned long		_SMALL_DATA__CPU3_ __attribute__ ((weak));
extern unsigned long		_SMALL_DATA2__CPU3_ __attribute__ ((weak));
extern unsigned long		_SMALL_DATA3__CPU3_ __attribute__ ((weak));
extern unsigned long		_SMALL_DATA4__CPU3_ __attribute__ ((weak));
extern unsigned long		__CSA3;
extern unsigned long		LCF_CSA3_SIZE;
extern unsigned long		__INTTAB_CPU3;
extern unsigned long		__TRAPTAB_CPU3;

extern const ClearTable_t	__clear_table_CPU4_;
extern const CopyTable_t	__copy_table_CPU4_;
extern unsigned long		__ISTACK4;
extern unsigned long		__USTACK4;
extern unsigned long		_SMALL_DATA__CPU4_ __attribute__ ((weak));
extern unsigned long		_SMALL_DATA2__CPU4_ __attribute__ ((weak));
extern unsigned long		_SMALL_DATA3__CPU4_ __attribute__ ((weak));
extern unsigned long		_SMALL_DATA4__CPU4_ __attribute__ ((weak));
extern unsigned long		__CSA4;
extern unsigned long		LCF_CSA4_SIZE;
extern unsigned long		__INTTAB_CPU4;
extern unsigned long		__TRAPTAB_CPU4;

extern const ClearTable_t	__clear_table_CPU5_;
extern const CopyTable_t	__copy_table_CPU5_;
extern unsigned long		__ISTACK5;
extern unsigned long		__USTACK5;
extern unsigned long		_SMALL_DATA__CPU5_ __attribute__ ((weak));
extern unsigned long		_SMALL_DATA2__CPU5_ __attribute__ ((weak));
extern unsigned long		_SMALL_DATA3__CPU5_ __attribute__ ((weak));
extern unsigned long		_SMALL_DATA4__CPU5_ __attribute__ ((weak));
extern unsigned long		__CSA5;
extern unsigned long		LCF_CSA5_SIZE;
extern unsigned long		__INTTAB_CPU5;
extern unsigned long		__TRAPTAB_CPU5;
extern int main(int, char **);

#pragma section

/* provide compiler information: symbols are not small addressable */
#pragma section ".rodata" a
const CoreInit_t CPUInit[MAX_CORES] =
{
	[0] =
	{
		.cleartable	= 0,
		.copytable	= 0,
		.istack		= &__ISTACK0,
		.ustack		= &__USTACK0,
		.smallA0	= &_SMALL_DATA__CPU0_,
		.smallA1	= &_SMALL_DATA2__CPU0_,
		.smallA8	= &_SMALL_DATA3__CPU0_,
		.smallA9	= &_SMALL_DATA4__CPU0_,
		.csaBase	= (unsigned long)&__CSA0,
		.csaSize	= (unsigned long)&LCF_CSA0_SIZE,
		.inttab     = (unsigned long)&__INTTAB_CPU0,
		.traptab     = (unsigned long)&__TRAPTAB_CPU0,
		.wdtCon0	= &SCU_WDTCPU0CON0,
		.wdtCon1	= &SCU_WDTCPU0CON1,
		.main		= main,
	},

	[1] =
	{
		.cleartable	= 0,
		.copytable	= 0,
		.istack		= &__ISTACK1,
		.ustack		= &__USTACK1,
		.smallA0	= &_SMALL_DATA__CPU1_,
		.smallA1	= &_SMALL_DATA2__CPU1_,
		.smallA8	= &_SMALL_DATA3__CPU1_,
		.smallA9	= &_SMALL_DATA4__CPU1_,
		.csaBase	= (unsigned long)&__CSA1,
		.csaSize	= (unsigned long)&LCF_CSA1_SIZE,
		.inttab     = (unsigned long)&__INTTAB_CPU1,
		.traptab     = (unsigned long)&__TRAPTAB_CPU1,
		.wdtCon0	= &SCU_WDTCPU1CON0,
		.wdtCon1	= &SCU_WDTCPU1CON1,
		.main		= main,
	},

	[2] =
	{
		.cleartable	= 0,
		.copytable	= 0,
		.istack		= &__ISTACK2,
		.ustack		= &__USTACK2,
		.smallA0	= &_SMALL_DATA__CPU2_,
		.smallA1	= &_SMALL_DATA2__CPU2_,
		.smallA8	= &_SMALL_DATA3__CPU2_,
		.smallA9	= &_SMALL_DATA4__CPU2_,
		.csaBase	= (unsigned long)&__CSA2,
		.csaSize	= (unsigned long)&LCF_CSA2_SIZE,
		.inttab     = (unsigned long)&__INTTAB_CPU2,
		.traptab     = (unsigned long)&__TRAPTAB_CPU2,
		.wdtCon0	= &SCU_WDTCPU2CON0,
		.wdtCon1	= &SCU_WDTCPU2CON1,
		.main		= main,
	},

	[3] =
	{
		.cleartable	= 0,
		.copytable	= 0,
		.istack		= &__ISTACK3,
		.ustack		= &__USTACK3,
		.smallA0	= &_SMALL_DATA__CPU3_,
		.smallA1	= &_SMALL_DATA2__CPU3_,
		.smallA8	= &_SMALL_DATA3__CPU3_,
		.smallA9	= &_SMALL_DATA4__CPU3_,
		.csaBase	= (unsigned long)&__CSA3,
		.csaSize	= (unsigned long)&LCF_CSA3_SIZE,
		.inttab     = (unsigned long)&__INTTAB_CPU3,
		.traptab     = (unsigned long)&__TRAPTAB_CPU3,
		.wdtCon0	= &SCU_WDTCPU3CON0,
		.wdtCon1	= &SCU_WDTCPU3CON1,
		.main		= main,
	},

	[4] =
	{
		.cleartable	= 0,
		.copytable	= 0,
		.istack		= &__ISTACK4,
		.ustack		= &__USTACK4,
		.smallA0	= &_SMALL_DATA__CPU4_,
		.smallA1	= &_SMALL_DATA2__CPU4_,
		.smallA8	= &_SMALL_DATA3__CPU4_,
		.smallA9	= &_SMALL_DATA4__CPU4_,
		.csaBase	= (unsigned long)&__CSA4,
		.csaSize	= (unsigned long)&LCF_CSA4_SIZE,
		.inttab     = (unsigned long)&__INTTAB_CPU4,
		.traptab     = (unsigned long)&__TRAPTAB_CPU4,
		.wdtCon0	= &SCU_WDTCPU4CON0,
		.wdtCon1	= &SCU_WDTCPU4CON1,
		.main		= main,
	},

	/* entry 5 is not used (CPU5_CORE_ID == 6 !!) */

	[6] =
	{
		.cleartable	= 0,
		.copytable	= 0,
		.istack		= &__ISTACK5,
		.ustack		= &__USTACK5,
		.smallA0	= &_SMALL_DATA__CPU5_,
		.smallA1	= &_SMALL_DATA2__CPU5_,
		.smallA8	= &_SMALL_DATA3__CPU5_,
		.smallA9	= &_SMALL_DATA4__CPU5_,
		.csaBase	= (unsigned long)&__CSA5,
		.csaSize	= (unsigned long)&LCF_CSA5_SIZE,
		.inttab     = (unsigned long)&__INTTAB_CPU5,
		.traptab     = (unsigned long)&__TRAPTAB_CPU5,
		.wdtCon0	= &SCU_WDTCPU5CON0,
		.wdtCon1	= &SCU_WDTCPU5CON1,
		.main		= main,
	}
};
#pragma section

#pragma section ".startup.code" ax 4
void _start(void)
{
	unsigned int coreID = _mfcr(CPU_CORE_ID) & IFX_CPU_CORE_ID_CORE_ID_MSK;
	const CoreInit_t *core;		/* the core initialisation structure */
	core = &CPUInit[coreID];

	/* load stack pointer (reserve 4 ints for startup) */
	__asm volatile ("mov.aa %%sp, %0" : : "a" (&core->ustack[-4]) : "a10");
	cstart(core);
}
#pragma section

#pragma section ".startup.code" ax 4
/*
 * the initial startup routine
 * - initialise the global RAM
 * - start the other CPUs
 * - disable/enable System Watchdog
 * - call the main function
 */
void cstart(const CoreInit_t *core)
{
	unsigned int psw;

	/* reset endinit and disable watchdog */
	if (core->wdtCon0->U & 1)
	{
		/* clear endinit bit in CPU0 WDT */
		clear_end_init(&core->wdtCon0->U);
	}
	if ((core == &CPUInit[0]) && (*&SCU_WDTSCON0.U & 1))
	{
		/* clear endinit bit in safety WDT */
		clear_end_init(&SCU_WDTSCON0.U);
	}

	/* setup interrupt stack */
	_mtcr(CPU_ISP, (unsigned int)core->istack);

	/* install trap handlers */
	_mtcr(CPU_BTV, (unsigned int)first_trap_table);

	/* install trap handlers */
	_mtcr(CPU_BIV, (unsigned int)core->inttab);

	_isync();

	/* initialise call depth counter */
	psw  = _mfcr(CPU_PSW);
	psw |= IFX_CPU_PSW_CDC_MSK;
	psw &= ~(IFX_CPU_PSW_CDE_MSK << IFX_CPU_PSW_CDE_OFF);
	_mtcr(CPU_PSW, psw);
	_isync();

	/* enable write access to system global registers */
	psw  = _mfcr(CPU_PSW);
	psw |= (IFX_CPU_PSW_GW_MSK << IFX_CPU_PSW_GW_OFF);
	_mtcr(CPU_PSW, psw);
	_isync();

	/* initialise SDA base pointers */
	__asm volatile ("mov.aa %%a0, %0" : : "a" (core->smallA0));
	__asm volatile ("mov.aa %%a1, %0" : : "a" (core->smallA1));
	__asm volatile ("mov.aa %%a8, %0" : : "a" (core->smallA8));
	__asm volatile ("mov.aa %%a9, %0" : : "a" (core->smallA9));

	/* disable write access to system global registers */
	psw  = _mfcr(CPU_PSW);
	psw &= ~(IFX_CPU_PSW_GW_MSK << IFX_CPU_PSW_GW_OFF);
	_mtcr(CPU_PSW, psw);
	_isync();

	/* disable Watchdogs */
	if (core == &CPUInit[0])
	{
		/* safety WDT handled by CPU0 */
		SCU_WDTSCON1.B.DR = 1;
		set_end_init(&SCU_WDTSCON0.U);
	}

	core->wdtCon1->B.DR = 1;
	set_end_init(&core->wdtCon0->U);

	init_csa(core->csaBase, core->csaSize);

	/* handle global clear and copy tables */
	if (core == &CPUInit[0])
	{
		clear_table_func(&__clear_table);
		copy_table_func(&__copy_table);
		start_core(1);
		start_core(2);
		start_core(3);
		start_core(4);
		start_core(6);
	}

	/* handle core specific clear and copy tables */
	//clear_table_func(core->cleartable);
	//copy_table_func(core->copytable);

	/* pass coreID to main */
	core->ustack[-2] = _mfcr(CPU_CORE_ID) & IFX_CPU_CORE_ID_CORE_ID_MSK;
	/* terminate argv */
	core->ustack[-1] = 0;
	__asm volatile ("mov.aa %%sp, %0" : : "a" (&core->ustack[-2]) : "a10");
	exit((*core->main)(1, (char **)&core->ustack[-2]));
}

static void clear_end_init(volatile unsigned int *wdtbase)
{
	unsigned int passwd;

	passwd = *wdtbase;
	passwd &= 0xffffff00;
	*wdtbase = passwd | 0xf1;
	*wdtbase = passwd | 0xf2;
	/* read back new value ==> synchronise LFI */
	(void)*wdtbase;
}
static void set_end_init(volatile unsigned int *wdtbase)
{
	unsigned int passwd;

	passwd = *wdtbase;
	passwd &= 0xffffff00;
	*wdtbase = passwd | 0xf1;
	*wdtbase = passwd | 0xf3;
	/* read back new value ==> synchronise LFI */
	(void)*wdtbase;
}

static void clear_table_func(const ClearTable_t *pt)
{
	while (pt->size >= 0)
	{
		memset(pt->base, 0l, pt->size);
		pt++;
	}
}

static void copy_table_func(const CopyTable_t *pt)
{
	while (pt->size >= 0)
	{
		memcpy(pt->dst, pt->src, pt->size);
		pt++;
	}
}

#define CSA_FRAME_SIZE	64
#define CSA_ALIGNMENT	(CSA_FRAME_SIZE - 1)

static void init_csa(unsigned int csa_base, unsigned int csa_size)
{
	csa_t		*pcsa;
	pcxi_t		pcxi;
	unsigned int current_csa;

	_mtcr(CPU_PCXI, 0);						/* initialise PCXI */

	/* force correct alignment of CSA */
	csa_base = (csa_base + CSA_ALIGNMENT) & ~CSA_ALIGNMENT;
	csa_size = csa_size / CSA_FRAME_SIZE;		/* number of csa entries */

	pcsa = (csa_t *)csa_base;

	pcsa->reg[0] = 0;
	pcsa++;
	current_csa = csa_base;

	pcxi.bits.pcxs = csa_base >> 28;			/* segment of csa area */
	pcxi.bits.pcxo = ((csa_base + sizeof(csa_t)) >> 6 ) & 0xffff;	/* get csa index */

	_mtcr(CPU_LCX, pcxi.reg);					/* initialise LCX */

	csa_size -= 1;								/* CSA's to initialise -= 1 */

	while (csa_size--)
	{
		pcxi.bits.pcxo = (current_csa >> 6) & 0xffff;
		pcsa->reg[0] = pcxi.reg;
		pcsa++;
		current_csa += sizeof(csa_t);
	}
	pcxi.bits.pcxo = (current_csa >> 6) & 0xffff;
	_mtcr(CPU_FCX, pcxi.reg);					/* initialise FCX */
}
#pragma section


#pragma section ".text" ax
void start_core(unsigned int coreId)
{
	if (coreId == 1)
	{
		/* enable CPU1 */
		CPU1_PC.U = (unsigned int)_start;		/* set start address */
		CPU1_SYSCON.B.BHALT = 0;				/* reset HALT state */
	}
	else if (coreId == 2)
	{
		/* enable CPU2 */
		CPU2_PC.U = (unsigned int)_start;		/* set start address */
		CPU2_SYSCON.B.BHALT = 0;				/* reset HALT state */
	}
	else if (coreId == 3)
	{
		/* enable CPU3 */
		CPU3_PC.U = (unsigned int)_start;		/* set start address */
		CPU3_SYSCON.B.BHALT = 0;				/* reset HALT state */
	}
	else if (coreId == 4)
	{
		/* enable CPU4 */
		CPU4_PC.U = (unsigned int)_start;		/* set start address */
		CPU4_SYSCON.B.BHALT = 0;				/* reset HALT state */
	}
	else if (coreId == 6)
	{
		/* enable CPU5 */
		CPU5_PC.U = (unsigned int)_start;		/* set start address */
		CPU5_SYSCON.B.BHALT = 0;				/* reset HALT state */
	}
}

static void __attribute__ ((used)) trap_function(void)
{
	__asm volatile ("debug" : : : "memory");
}
#pragma section


#pragma section ".traptable" ax 256
#define TRAP_ENTRY(hnd)						\
 __asm (".align 5\n\t"						\
		"svlcx\n\t"							\
		"debug\n\t"							\
		"movh.a  %a15, hi:"#hnd"\n\t"		\
		"lea     %a15, [%a15]lo:"#hnd"\n\t"	\
		"mov     %d4, %d15\n\t"				\
		"ji      %a15\n\t"					\
		"rslcx\n\t"							\
		"rfe\n\t"							\
		"nop\n\t" )

void first_trap_table(void)
{
	TRAP_ENTRY(trap_function);
	TRAP_ENTRY(trap_function);
	TRAP_ENTRY(trap_function);
	TRAP_ENTRY(trap_function);
	TRAP_ENTRY(trap_function);
	TRAP_ENTRY(trap_function);
	TRAP_ENTRY(trap_function);
	TRAP_ENTRY(trap_function);
	while(1);
}
#pragma section
#pragma GCC reset_options
