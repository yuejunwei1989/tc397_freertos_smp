/**
 * \file port_tricore.h
 * \brief File defining the TriCore CPU specific registers and macros for
 * Tricore supported compiler abstraction
 *
 * \copyright Copyright (c) 2020 Infineon Technologies AG. All rights reserved.
 *
 *                               IMPORTANT NOTICE
 *
 * Use of this file is subject to the terms of use agreed between (i) you or
 * the company in which ordinary course of business you are acting and (ii)
 * Infineon Technologies AG or its licensees. If and as long as no such
 * terms of use are agreed, use of this file is subject to following:
 *
 * Boost Software License - Version 1.0 - August 17th, 2003
 *
 * Permission is hereby granted, free of charge, to any person or
 * organization obtaining a copy of the software and accompanying
 * documentation covered by this license (the "Software") to use, reproduce,
 * display, distribute, execute, and transmit the Software, and to prepare
 * derivative works of the Software, and to permit third-parties to whom the
 * Software is furnished to do so, all subject to the following:
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
 */

#ifndef PORT_TRICORE_H_
#define PORT_TRICORE_H_


#define TRICORE_AUDO_FUTURE 0x010
#define TRICORE_AUDO_NG     0x020
#define TRICORE_AUDO_MAX    0x030
#define TRICORE_AURIX_TC2XX 0x110
#define TRICORE_AURIX_TC3XX 0x120
#define TRICORE_AURIX_TC4XX 0x130

/******************************************************************************
 *                           TriCore CPU Registers                            *
 *****************************************************************************/
#define TRICORE_CPU_PSW    0xFE04
#define TRICORE_CPU_ICR    0xFE2C
#define TRICORE_CPU_FCX    0xFE38
#define TRICORE_CPU_SYSCON 0xFE14
#define TRICORE_CPU_PSW    0xFE04
#define TRICORE_CPU_PCXI   0xFE00
#define TRICORE_CPU_CORE_ID 0xFE1C

/******************************************************************************
 *                         Compiler Specific Defines                          *
 *****************************************************************************/
#if defined(__HIGHTEC__)
#define TRICORE_CINLINE static inline __attribute__ ((always_inline))
#define TRICORE_NOINLINE              __attribute__ ((noinline))

/******************************************************************************
 *                   TriCore Intrinsics for GNUC Compiler                     *
 *****************************************************************************/
#include "machine/intrinsics.h"

#define TriCore__mfcr( short_address )              _mfcr( short_address )
#define TriCore__mtcr( short_address, value )       _mtcr( short_address, value )
#define TriCore__disable( )                         _disable( )
#define TriCore__enable( )                          _enable( )
#define TriCore__isync( )                           _isync( )
#define TriCore__dsync( )                           _dsync( )
#define TriCore__svlcx( )                           _svlcx( )
#define TriCore__rslcx( )                           _rslcx( )
#define TriCore__syscall( value )                   _syscall( value )
#define TriCore__debug( )                           _debug( )
#define TriCore__nop( )                             _nop( )
#define TriCore__mem_barrier( )                     __asm__ volatile("":::"memory")

/******************************************************************************
 *                              GNUC Macros END                               *
 *****************************************************************************/
#elif defined(__TASKING__)
#define TRICORE_CINLINE               static inline
#define TRICORE_NOINLINE             __attribute__((noinline))

/******************************************************************************
 *                 TriCore Intrinsics for TASKING Compiler                    *
 *****************************************************************************/
#define TriCore__mfcr( short_address )              __mfcr( short_address )
#define TriCore__mtcr( short_address, value )       __mtcr( short_address, value )
#define TriCore__disable( )                         __disable( )
#define TriCore__enable( )                          __enable( )
#define TriCore__isync( )                           __isync( )
#define TriCore__dsync( )                           __dsync( )
#define TriCore__svlcx( )                           __svlcx( )
#define TriCore__rslcx( )                           __rslcx( )
#define TriCore__syscall( value )                   __syscall( value )
#define TriCore__debug( )                           __debug( )
#define TriCore__nop( )                             __nop( )
#define TriCore__mem_barrier( )                     __asm ("":::"memory")

/******************************************************************************
 *                             TASKING Macros END                             *
 *****************************************************************************/

#elif defined(__ghs__)
#define TRICORE_CINLINE static inline __attribute__ ((always_inline))
#define TRICORE_NOINLINE              __attribute__ ((noinline))


/******************************************************************************
 *                   TriCore Intrinsics for GHS Compiler                      *
 *****************************************************************************/
#include <intrinsics.h>

#define TriCore__mfcr( short_address )              __mfcr( short_address )
#define TriCore__mtcr( short_address, value )       __mtcr( short_address, value )
#define TriCore__disable( )                         __disable( )
#define TriCore__enable( )                          __enable( )
#define TriCore__isync( )                           __isync( )
#define TriCore__dsync( )                           __dsync( )
#define TriCore__svlcx( )                           __svlcx( )
#define TriCore__rslcx( )                           __rslcx( )
#define TriCore__syscall( value )                   __syscall( value )
#define TriCore__debug( )                           __debug( )
#define TriCore__nop( )                             __nop( )
#define TriCore__mem_barrier( )                     __asm__ volatile("":::"memory")

/******************************************************************************
 *                               GHS Macros END                               *
 *****************************************************************************/


#elif defined(__DCC__)


#define TRICORE_CINLINE                    static __inline__
#define TRICORE_NOINLINE              __attribute__ ((noinline))


/******************************************************************************
 *                   TriCore Intrinsics for DCC Compiler                      *
 *****************************************************************************/

extern int  TriCore__mfcr( const unsigned int )       __attribute__((intrinsic_function(0x101, 0, "mfcr") ));
extern void TriCore__mtcr( const unsigned int, int )  __attribute__((intrinsic_function(0x102, 0, "mtcr") ));
extern void TriCore__disable( void )                  __attribute__((intrinsic_function(0x103, 0, "disable") ));
extern void TriCore__enable( void )                   __attribute__((intrinsic_function(0x103, 0, "enable") ));
extern void TriCore__isync( void )                    __attribute__((intrinsic_function(0x103, 0, "isync") ));
extern void TriCore__dsync( void )                    __attribute__((intrinsic_function(0x103, 4, "dsync") ));
extern void TriCore__svlcx( void )                    __attribute__((intrinsic_function(0x103, 0, "svlcx") ));
extern void TriCore__rslcx( void )                    __attribute__((intrinsic_function(0x103, 0, "rslcx") ));
extern void TriCore__syscall( const unsigned int)     __attribute__((intrinsic_function(0x100, 0, "syscall") ));
extern void TriCore__debug( void )                    __attribute__((intrinsic_function(0x103, 0, "debug") ));
extern void TriCore__nop( void )                      __attribute__((intrinsic_function(0x103, 0, "nop") ));
extern void TriCore__mem_barrier( void)               __attribute__((intrinsic_function(0x103, 4, "diabmbar") ));

/******************************************************************************
 *                               DCC Macros END                               *
 *****************************************************************************/
#else /* #ifdef __DCC__ */
#error "Compiler not supported!"
#endif /* #ifdef __HIGHTEC__ */

#endif /* PORT_TRICORE_H_ */