/**************************************************************************
**                                                                        *
**  FILE        :  sync_on_halt.c                                         *
**                                                                        *
**  DESCRIPTION :                                                         *
**      Derivative-specific code that is run, every time the target       *
**      halts, to synchronize the target and the debugger.                *
**                                                                        *
**      This code is linked in by default. At the risk of debugging       *
**      problems resulting from e.g. cache incoherence, it can be         *
**      left out by right-clicking on the file in the C/C++ Projects      *
**      view and selecting "Exclude from build...".                       *
**                                                                        *
**      If a user-defined TriCore processor is being used, this file      *
**      may have to be adapted.                                           *
**                                                                        *
**  Copyright 1996-2021 TASKING BV                                        *
**                                                                        *
**************************************************************************/

#include <stddef.h>

#pragma nomisrac

/* Code compaction, for example, must be avoided because this creates
 * function calls and the CSA chain may not be initialized yet when
 * this is run.
 *
 * Inlining must be avoided because it could make the label
 * _sync_on_halt_end disappear. */
#pragma optimize acefgIklmNopRsuvwy

/* Because this code is not part of the application program as such,
 * it makes no sense to profile it or runtime error check */
#pragma profiling off
#pragma runtime BCM

/* This explicit inclusion is used because the file may be compiled
 * without SFR inclusion */
#include __SFRFILE__(__CPU__)

/* As above, but for the assembler. */
#define _SYNC_ON_HALT_STRINGIFY1(x) _SYNC_ON_HALT_STRINGIFY2(x)
#define _SYNC_ON_HALT_STRINGIFY2(y) #y

__asm(".include <sfr/reg" _SYNC_ON_HALT_STRINGIFY1(__CPU__) ".def>");

#if        defined(_REGTC27X_H) || defined(_REGTC27XB_H)        \
        || defined(_REGTC27XC_H) || defined(_REGTC27XD_H)       \
        || defined(_REGTC26X_H) || defined(_REGTC26XB_H)        \
        || defined(_REGTC29X_H) || defined(_REGTC29XB_H)        \
        || defined(_REGTC21X_H) || defined(_REGTC22X_H)         \
        || defined(_REGTC23X_H) || defined(_REGTC23X_ADAS_H)    \
        || defined(_REGTC35X_H) || defined(_REGTC37X_H)         \
        || defined(_REGTC36X_H) \
        || defined(_REGTC38X_H) \
        || defined(_REGTC39X_H) || defined(_REGTC39XB_H)
#if defined(__NO_VTC)
#define __CLONE
#else
#define __CLONE __clone
#endif
#define __DSPR_SYNC_ON_HALT_LCX __at(0xd0003f80)
#define __DSPR_SYNC_ON_HALT_UCX __at(0xd0003fc0)
#else
#define __CLONE
#define __DSPR_SYNC_ON_HALT_LCX
#define __DSPR_SYNC_ON_HALT_UCX
#endif
unsigned int __near __CLONE __align(64) _sync_on_halt_lcx[16] __DSPR_SYNC_ON_HALT_LCX;
unsigned int __near __CLONE __align(64) _sync_on_halt_ucx[16] __DSPR_SYNC_ON_HALT_UCX;

/* This function should never be called by the target application itself. */
extern void _sync_on_halt_end(void)
{
        __nop();
        __debug();
}

/* This function should never be called by the target application itself.
 * __protect__ is needed to prevent this from being eliminated through
 * unreferenced section removal. */
extern void __protect__ _sync_on_halt(void)
{
#if        defined(_REGTC1762_H) || defined(_REGTC1764_H) || defined(_REGTC1766_H) || defined(_REGTC1766B_H)    \
        || defined(_REGTC1792_H) || defined(_REGTC1796_H) || defined(_REGTC1796B_H)                             \
        || defined(_REGTC1164_H) || defined(_REGTC1166_H)                                                       \

/* Device has no data cache. */

#elif      defined(_REGTC1130_H)
#  define _EBU 8

#  define _DCACHE_0_ADDRESS     0xc0000000U
#  define _DCACHE_0_SIZE        64              /* In kBytes. */

#elif      defined(_REGTC1167_H) || defined(_REGTC1197_H)                               \
        || defined(_REGTC1724_H) || defined(_REGTC1728_H)                               \
        || defined(_REGTC1184_H) || defined(_REGTC1784_H)                               \
        || defined(_REGTC1767_H) || defined(_REGTC1768_H) || defined(_REGTC1797_H)      \
        || defined(_REGTC1782_H) || defined(_REGTC1783_H) || defined(_REGTC1746_H)      \
        || defined(_REGTC1337_H) || defined(_REGTC1367_H) || defined(_REGTC1387_H)
#  if !defined(__CORE_TC131__)
#    error Internal inconsistency.
#  endif

#  define _DCACHE_LINES         256
#  define _DCACHE_WAYS          2
#  define _DCACHE_LINE_INDEX    4

#  define _DCACHE_OFFSET        0x80000000U


#elif defined(_REGTC1736_H) || defined(_REGTC21X_H) || defined(_REGTC22X_H) || defined(_REGTC23X_H) || defined(_REGTC23X_ADAS_H)

/* Device has no data cache, but does have a Data Line or Read Buffer (DLB or DRB). We need
 * to execute CACHEI.WI at least once. */

#  if !defined(__CORE_TC131__) && !defined(__CORE_TC16X__) && !defined(__CORE_TC162__)
#    error Internal inconsistency.
#  endif

#  define _DCACHE_LINES         1
#  define _DCACHE_WAYS          1
#  ifdef _REGTC1736_H
#   define _DCACHE_LINE_INDEX   4
#  else
#   define _DCACHE_LINE_INDEX   5
#  endif

#  define _DCACHE_OFFSET        0x80000000U

#elif defined(_REGTC1798_H) || defined(_REGTC1748_H) || defined(_REGTC1791_H) || defined(_REGTC1793_H)

#  ifndef __CORE_TC16__
#    error Internal inconsistency.
#  endif

#  define _DCACHE_LINES         128
#  define _DCACHE_WAYS          4
#  define _DCACHE_LINE_INDEX    5

#  define _DCACHE_OFFSET        0x80000000U

#elif      defined(_REGTC27X_H) || defined(_REGTC27XB_H) || defined(_REGTC27XC_H) || defined(_REGTC27XD_H)
#  if !defined(__CORE_TC16X__) && !defined(__CORE_TC162__)
#    error Internal inconsistency.
#  endif

/* Cache way number occupies bits 0 and 1, index number occupies bits 5...10. */
#  define _DCACHE_LINES         64
#  define _DCACHE_WAYS          4
#  define _DCACHE_LINE_INDEX    5

#  define _DCACHE_OFFSET        0x80000000U

#elif      defined(_REGTC26X_H) || defined(_REGTC26XB_H) || defined(_REGTC29X_H)        \
        || defined(_REGTC35X_H) || defined(_REGTC37X_H)                                 \
        || defined(_REGTC36X_H) \
        || defined(_REGTC29XB_H) || defined(_REGTC38X_H) || defined(_REGTC39X_H) || defined(_REGTC39XB_H)
#  if !defined(__CORE_TC16X__) && !defined(__CORE_TC162__)
#    error Internal inconsistency.
#  endif

/* Cache way number occupies bit 0, index number occupies bits 5...11. */
#  define _DCACHE_LINES         128
#  define _DCACHE_WAYS          2
#  define _DCACHE_LINE_INDEX    5

#  define _DCACHE_OFFSET        0x80000000U

#else
#  error Unknown device. For user-defined devices, this code may have to be adapted.
#endif


#ifdef _DCACHE_LINES
        unsigned char *         line_addr;
        unsigned int            line_index;
        unsigned int            way_index;
#endif

#ifdef _EBU
        EBU_ADDRSEL0_type *     ebu_addrselx;
        ptrdiff_t               ebu_addrsel_delta;
        int                     region_index;
        unsigned int            region_addr_u;
#endif

#if defined(_EBU) || defined(_DCACHE_0_ADDRESS)
        unsigned char *         line_addr;
        unsigned int            line_count;
        unsigned int            line_index;
#endif


        /* Determine number of EBU regions. (Note that at the time of this writing at
         * least it was not actually possible for there to be 5 or 6, only 4 or 7.) */
#ifndef _EBU
   /* (Nothing.) */
#elif defined(EBU_ADDRSEL7) || !defined(EBU_ADDRSEL3)
#  error Unexpected number of EBU_ADDRSELx registers.
#elif defined(EBU_ADDRSEL6)
#  define _EBU_REGION_COUNT 7
#elif defined(EBU_ADDRSEL5)
#  define _EBU_REGION_COUNT 6
#elif defined(EBU_ADDRSEL4)
#  define _EBU_REGION_COUNT 5
#else
#  define _EBU_REGION_COUNT 4
#endif

        /* ***************************************************************************************
         * Save PSW and (most of) the address and data registers. (Not all of these will actually
         * be used, but that is up to the compiler and cannot be predicted reliably.)
         *
         * Note that PSW must be saved because of the switch to supervisor mode below, but also
         * because the remainder of the code may change the flags.
         *
         * The st*cx instructions do not affect the CSA list and do not require it to be properly
         * initialized (which it might not be at this point). */
        __asm("stlcx _sync_on_halt_lcx");
        __asm("stucx _sync_on_halt_ucx");

        /* Set PSW.IO to 2 (supervisor mode). This is needed for certain operations
         * performed below. */
        __mtcr(PSW, (int) (((unsigned int) __mfcr(PSW) & 0xfffff3ffU) | 0x800U));

        /* ***************************************************************
         * Initiate flushing of instruction cache. (Waiting for it to
         * complete is done later, i.e. in parallel with the data
         * cache flushing.)
         */
#if        defined(_REGTC1130_H)        \
        || defined(_REGTC1762_H) || defined(_REGTC1764_H)                               \
        || defined(_REGTC1766_H) || defined(_REGTC1766B_H)                              \
        || defined(_REGTC1164_H) || defined(_REGTC1166_H)                               \
        || defined(_REGTC1792_H) || defined(_REGTC1796_H) || defined(_REGTC1796B_H)

/* Instruction cache flushing not supported for these devices. */

#elif      defined(_REGTC1167_H) || defined(_REGTC1197_H)                               \
        || defined(_REGTC1724_H) || defined(_REGTC1728_H) || defined(_REGTC1736_H)      \
        || defined(_REGTC1184_H) || defined(_REGTC1784_H)                               \
        || defined(_REGTC1767_H) || defined(_REGTC1768_H) || defined(_REGTC1797_H)      \
        || defined(_REGTC1782_H) || defined(_REGTC1783_H) || defined(_REGTC1746_H)      \
        || defined(_REGTC1337_H) || defined(_REGTC1367_H) || defined(_REGTC1387_H)

#  define _ICACHE_BIT0  PMI_CON1.B.PCINV
#  define _ICACHE_BIT1  PMI_CON1.B.PBINV

#elif      defined(_REGTC1798_H) || defined(_REGTC1748_H) || defined(_REGTC1791_H) || defined(_REGTC1793_H)     \
        || defined(_REGTC21X_H)  || defined(_REGTC22X_H)  || defined(_REGTC23X_H)  || defined(_REGTC23X_ADAS_H) \
        || defined(_REGTC27X_H)  || defined(_REGTC27XB_H) || defined(_REGTC27XC_H) || defined(_REGTC27XD_H) \
        || defined(_REGTC26X_H)  || defined(_REGTC26XB_H) || defined(_REGTC29X_H)  || defined(_REGTC29XB_H) \
        || defined(_REGTC35X_H) || defined(_REGTC37X_H) \
        || defined(_REGTC36X_H) \
        || defined(_REGTC38X_H)   || defined(_REGTC39X_H) || defined(_REGTC39XB_H)

#  define _ICACHE_BIT0_W(bit_val) \
        __mtcr(PCON1, (int) (((unsigned int) __mfcr(PCON1) & 0xfffffffeU) | (bit_val ? 1 : 0)))
#  define _ICACHE_BIT1_W(bit_val) \
        __mtcr(PCON1, (int) (((unsigned int) __mfcr(PCON1) & 0xfffffffdU) | (bit_val ? 2 : 0)))

#  define _ICACHE_BIT0_R \
        (((unsigned int) __mfcr(PCON1) & 0x1U)!=0U)
#  define _ICACHE_BIT1_R \
        (((unsigned int) __mfcr(PCON1) & 0x2U)!=0U)

#else
#  error Unknown device.
#endif


#ifdef _ICACHE_BIT0
        _ICACHE_BIT0 = 1;
        _ICACHE_BIT1 = 1;
#endif

#ifdef _ICACHE_BIT0_W
        _ICACHE_BIT0_W(1);
        _ICACHE_BIT1_W(1);
#endif

        /* **********************************************************
         * Flush data cache. This will also flush the data line
         * buffer, if there is one. */

#ifdef _EBU
        ebu_addrselx = &EBU_ADDRSEL0;

        ebu_addrsel_delta = ((EBU_ADDRSEL0_type *) &EBU_ADDRSEL1) - &EBU_ADDRSEL0;

        for (   region_index = 0; region_index < _EBU_REGION_COUNT;
                region_index++, ebu_addrselx += ebu_addrsel_delta       )
        {
                if (!ebu_addrselx->B.REGENAB)
                {
                        continue;
                }

                if (       (((ebu_addrselx->B.BASE >> 16) & 0xfU) == _EBU)
                        || (ebu_addrselx->B.ALTENAB && (ebu_addrselx->B.ALTSEG == _EBU))
                   )
                {
                        /* EBU region is accessible via segment specified by _EBU. */

                        /* Calculate start address of region. First, bits 28-31. */
                        region_addr_u = ((unsigned int) _EBU << 28);

                        /* Add bits 12-27. */
                        region_addr_u +=        ((unsigned int) (ebu_addrselx->B.BASE & 0xffff) << 12)
                                                & (0xffffffffU << (27 - ebu_addrselx->B.MASK));

                        /* Size measured in 16-byte (128-bit) cache lines.
                         * For example, when MASK equals 15, the size is
                         * 4 kBytes, i.e. 256 lines. */
                        line_count = 1 << (23 - ebu_addrselx->B.MASK);

                        line_addr = (unsigned char *) region_addr_u;

                        for (line_index = 0; line_index < line_count; line_index++)
                        {
                                __cacheawi(line_addr);

                                line_addr += 16;
                        }
                }
        }
#endif /* #ifdef _EBU */

#ifdef _DCACHE_0_ADDRESS
        line_count = (_DCACHE_0_SIZE * 1024) / 16;
        line_addr = (unsigned char *) _DCACHE_0_ADDRESS;

        for (line_index = 0; line_index < line_count; line_index++)
        {
                __cacheawi(line_addr);

                line_addr += 16;
        }
#endif

#ifdef _DCACHE_1_ADDRESS
        line_count = (_DCACHE_1_SIZE * 1024) / 16;
        line_addr = (unsigned char *) _DCACHE_1_ADDRESS;

        for (line_index = 0; line_index < line_count; line_index++)
        {
                __cacheawi(line_addr);

                line_addr += 16;
        }
#endif


#ifdef _DCACHE_LINES
        /* In the case of a TC1.6E core, there is only a Data Read Buffer (DRB),
         * not a real cache, and as a result a single __cacheiwi(...) would
         * actually suffice. However, the loop also works. */
        line_addr = (unsigned char *) _DCACHE_OFFSET;

        for (line_index = 0; line_index < _DCACHE_LINES; line_index++)
        {
                for (way_index = 0; way_index < _DCACHE_WAYS; way_index++)
                {
                        __cacheiwi( line_addr+way_index );
                }

                line_addr += (1 << _DCACHE_LINE_INDEX);
        }
#endif

        /* **********************************************************
         * Wait for code cache flushing to complete.
         */
#ifdef _ICACHE_BIT0
        while (_ICACHE_BIT0 || _ICACHE_BIT1);
#endif

#ifdef _ICACHE_BIT0_R
        while (_ICACHE_BIT0_R || _ICACHE_BIT1_R);
#endif

        /* ***************************************************************************************
         * Restore registers. */

        /* If we switched to supervisor mode above, this restores the prior mode
         * as well. */
        __mtcr(PSW, _sync_on_halt_ucx[1]);
        __asm("lducx _sync_on_halt_ucx");
        __asm("ldlcx _sync_on_halt_lcx");

        /* ***************************************************************************************
         * Flush pipeline. */

        __dsync();              /* Synchronize data. */
        __isync();              /* Synchronize instructions. */
        __nop();                /*  */
        __nop();                /* TC113_CPU9. */

        /* No function call should be used here, because the CSA may not have
         * been initialized yet. */
        __asm("j _sync_on_halt_end");
        return;
}
