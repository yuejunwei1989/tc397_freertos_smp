#include "IfxCpu_Trap.h"

#if defined(__TASKING__)
#pragma protect on
#endif

extern void IfxCpu_Trap_memoryManagementError(uint32 tin);
extern void IfxCpu_Trap_internalProtectionError(uint32 tin);
extern void IfxCpu_Trap_instructionError(uint32 tin);
extern void IfxCpu_Trap_contextManagementError(uint32 tin);
extern void IfxCpu_Trap_busError(uint32 tin);
extern void IfxCpu_Trap_assertion(uint32 tin);
extern void IfxCpu_Trap_nonMaskableInterrupt(uint32 tin);

extern void IfxCpu_Trap_systemCall_Cpu0(uint32 tin);
extern void IfxCpu_Trap_systemCall_Cpu1(uint32 tin);
extern void IfxCpu_Trap_systemCall_Cpu2(uint32 tin);
extern void IfxCpu_Trap_systemCall_Cpu3(uint32 tin);
extern void IfxCpu_Trap_systemCall_Cpu4(uint32 tin);
extern void IfxCpu_Trap_systemCall_Cpu5(uint32 tin);

void __trap( 0 ) __vector_table( 0 ) trapmmu0( void )
{
    IfxCpu_Tsr_CallTSR(IfxCpu_Trap_memoryManagementError);
}
void __trap( 1 ) __vector_table( 0 ) trapprot0( void )
{
    IfxCpu_Tsr_CallTSR(IfxCpu_Trap_internalProtectionError);
}
void __trap( 2 ) __vector_table( 0 ) trapinst0( void )
{
    IfxCpu_Tsr_CallTSR(IfxCpu_Trap_instructionError);
}
void __trap( 3 ) __vector_table( 0 ) trapcont0( void )
{
    IfxCpu_Tsr_CallCSATSR(IfxCpu_Trap_contextManagementError);
}
void __trap( 4 ) __vector_table( 0 ) trapbus0( void )
{
    IfxCpu_Tsr_CallTSR(IfxCpu_Trap_busError);
}
void __trap( 5 ) __vector_table( 0 ) trapass0( void )
{
    IfxCpu_Tsr_CallTSR(IfxCpu_Trap_assertion);
}
void __trap( 6 ) __vector_table( 0 ) trapsys0( void )
{
    IfxCpu_Tsr_CallTSR(IfxCpu_Trap_systemCall_Cpu0);
}
void __trap( 7 ) __vector_table( 0 ) trapnmi0( void )
{
    IfxCpu_Tsr_CallTSR(IfxCpu_Trap_nonMaskableInterrupt);
}

void __trap( 0 ) __vector_table( 1 ) trapmmu1( void )
{
    IfxCpu_Tsr_CallTSR(IfxCpu_Trap_memoryManagementError);
}
void __trap( 1 ) __vector_table( 1 ) trapprot1( void )
{
    IfxCpu_Tsr_CallTSR(IfxCpu_Trap_internalProtectionError);
}
void __trap( 2 ) __vector_table( 1 ) trapinst1( void )
{
    IfxCpu_Tsr_CallTSR(IfxCpu_Trap_instructionError);
}
void __trap( 3 ) __vector_table( 1 ) trapcont1( void )
{
    IfxCpu_Tsr_CallCSATSR(IfxCpu_Trap_contextManagementError);
}
void __trap( 4 ) __vector_table( 1 ) trapbus1( void )
{
    IfxCpu_Tsr_CallTSR(IfxCpu_Trap_busError);
}
void __trap( 5 ) __vector_table( 1 ) trapass1( void )
{
    IfxCpu_Tsr_CallTSR(IfxCpu_Trap_assertion);
}
void __trap( 6 ) __vector_table( 1 ) trapsys1( void )
{
    IfxCpu_Tsr_CallTSR(IfxCpu_Trap_systemCall_Cpu1);
}
void __trap( 7 ) __vector_table( 1 ) trapnmi1( void )
{
    IfxCpu_Tsr_CallTSR(IfxCpu_Trap_nonMaskableInterrupt);
}

void __trap( 0 ) __vector_table( 2 ) trapmmu2( void )
{
    IfxCpu_Tsr_CallTSR(IfxCpu_Trap_memoryManagementError);
}
void __trap( 1 ) __vector_table( 2 ) trapprot2( void )
{
    IfxCpu_Tsr_CallTSR(IfxCpu_Trap_internalProtectionError);
}
void __trap( 2 ) __vector_table( 2 ) trapinst2( void )
{
    IfxCpu_Tsr_CallTSR(IfxCpu_Trap_instructionError);
}
void __trap( 3 ) __vector_table( 2 ) trapcont2( void )
{
    IfxCpu_Tsr_CallCSATSR(IfxCpu_Trap_contextManagementError);
}
void __trap( 4 ) __vector_table( 2 ) trapbus2( void )
{
    IfxCpu_Tsr_CallTSR(IfxCpu_Trap_busError);
}
void __trap( 5 ) __vector_table( 2 ) trapass2( void )
{
    IfxCpu_Tsr_CallTSR(IfxCpu_Trap_assertion);
}
void __trap( 6 ) __vector_table( 2 ) trapsys2( void )
{
    IfxCpu_Tsr_CallTSR(IfxCpu_Trap_systemCall_Cpu2);
}
void __trap( 7 ) __vector_table( 2 ) trapnmi2( void )
{
    IfxCpu_Tsr_CallTSR(IfxCpu_Trap_nonMaskableInterrupt);
}

void __trap( 0 ) __vector_table( 3 ) trapmmu3( void )
{
    IfxCpu_Tsr_CallTSR(IfxCpu_Trap_memoryManagementError);
}
void __trap( 1 ) __vector_table( 3 ) trapprot3( void )
{
    IfxCpu_Tsr_CallTSR(IfxCpu_Trap_internalProtectionError);
}
void __trap( 2 ) __vector_table( 3 ) trapinst3( void )
{
    IfxCpu_Tsr_CallTSR(IfxCpu_Trap_instructionError);
}
void __trap( 3 ) __vector_table( 3 ) trapcont3( void )
{
    IfxCpu_Tsr_CallCSATSR(IfxCpu_Trap_contextManagementError);
}
void __trap( 4 ) __vector_table( 3 ) trapbus3( void )
{
    IfxCpu_Tsr_CallTSR(IfxCpu_Trap_busError);
}
void __trap( 5 ) __vector_table( 3 ) trapass3( void )
{
    IfxCpu_Tsr_CallTSR(IfxCpu_Trap_assertion);
}
void __trap( 6 ) __vector_table( 3 ) trapsys3( void )
{
    IfxCpu_Tsr_CallTSR(IfxCpu_Trap_systemCall_Cpu3);
}
void __trap( 7 ) __vector_table( 3 ) trapnmi3( void )
{
    IfxCpu_Tsr_CallTSR(IfxCpu_Trap_nonMaskableInterrupt);
}

void __trap( 0 ) __vector_table( 4 ) trapmmu4( void )
{
    IfxCpu_Tsr_CallTSR(IfxCpu_Trap_memoryManagementError);
}
void __trap( 1 ) __vector_table( 4 ) trapprot4( void )
{
    IfxCpu_Tsr_CallTSR(IfxCpu_Trap_internalProtectionError);
}
void __trap( 2 ) __vector_table( 4 ) trapinst4( void )
{
    IfxCpu_Tsr_CallTSR(IfxCpu_Trap_instructionError);
}
void __trap( 3 ) __vector_table( 4 ) trapcont4( void )
{
    IfxCpu_Tsr_CallCSATSR(IfxCpu_Trap_contextManagementError);
}
void __trap( 4 ) __vector_table( 4 ) trapbus4( void )
{
    IfxCpu_Tsr_CallTSR(IfxCpu_Trap_busError);
}
void __trap( 5 ) __vector_table( 4 ) trapass4( void )
{
    IfxCpu_Tsr_CallTSR(IfxCpu_Trap_assertion);
}
void __trap( 6 ) __vector_table( 4 ) trapsys4( void )
{
    IfxCpu_Tsr_CallTSR(IfxCpu_Trap_systemCall_Cpu4);
}
void __trap( 7 ) __vector_table( 4 ) trapnmi4( void )
{
    IfxCpu_Tsr_CallTSR(IfxCpu_Trap_nonMaskableInterrupt);
}

void __trap( 0 ) __vector_table( 5 ) trapmmu5( void )
{
    IfxCpu_Tsr_CallTSR(IfxCpu_Trap_memoryManagementError);
}
void __trap( 1 ) __vector_table( 5 ) trapprot5( void )
{
    IfxCpu_Tsr_CallTSR(IfxCpu_Trap_internalProtectionError);
}
void __trap( 2 ) __vector_table( 5 ) trapinst5( void )
{
    IfxCpu_Tsr_CallTSR(IfxCpu_Trap_instructionError);
}
void __trap( 3 ) __vector_table( 5 ) trapcont5( void )
{
    IfxCpu_Tsr_CallCSATSR(IfxCpu_Trap_contextManagementError);
}
void __trap( 4 ) __vector_table( 5 ) trapbus5( void )
{
    IfxCpu_Tsr_CallTSR(IfxCpu_Trap_busError);
}
void __trap( 5 ) __vector_table( 5 ) trapass5( void )
{
    IfxCpu_Tsr_CallTSR(IfxCpu_Trap_assertion);
}
void __trap( 6 ) __vector_table( 5 ) trapsys5( void )
{
    IfxCpu_Tsr_CallTSR(IfxCpu_Trap_systemCall_Cpu5);
}
void __trap( 7 ) __vector_table( 5 ) trapnmi5( void )
{
    IfxCpu_Tsr_CallTSR(IfxCpu_Trap_nonMaskableInterrupt);
}

#if defined(__TASKING__)
#pragma endprotect
#endif
