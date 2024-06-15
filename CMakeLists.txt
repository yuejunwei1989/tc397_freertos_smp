cmake_minimum_required(VERSION 3.21.1)

project(tc397_freertos_smp CXX C ASM)
set(FREERTOS_DIRECTORY "${CMAKE_SOURCE_DIR}/os/FreeRTOS-Kernel-10.4.3")
set(OS_SRC_LIST
${CMAKE_CURRENT_SOURCE_DIR}/Libraries/iLLD/TC39B/Tricore/Cpu/Std/IfxCpu.c
${CMAKE_CURRENT_SOURCE_DIR}/Libraries/iLLD/TC39B/Tricore/Cpu/Trap/IfxCpu_Trap.c
${CMAKE_CURRENT_SOURCE_DIR}/Libraries/iLLD/TC39B/Tricore/Stm/Std/IfxStm.c
${CMAKE_CURRENT_SOURCE_DIR}/Libraries/iLLD/TC39B/Tricore/Stm/Timer/IfxStm_Timer.c
${CMAKE_CURRENT_SOURCE_DIR}/Libraries/iLLD/TC39B/Tricore/Scu/Std/IfxScuWdt.c
${CMAKE_CURRENT_SOURCE_DIR}/Libraries/iLLD/TC39B/Tricore/Scu/Std/IfxScuCcu.c
${CMAKE_CURRENT_SOURCE_DIR}/Libraries/iLLD/TC39B/Tricore/Port/Std/IfxPort.c
${CMAKE_CURRENT_SOURCE_DIR}/Libraries/iLLD/TC39B/Tricore/Pms/Std/IfxPmsPm.c
${CMAKE_CURRENT_SOURCE_DIR}/Libraries/iLLD/TC39B/Tricore/Pms/Std/IfxPmsEvr.c
${CMAKE_CURRENT_SOURCE_DIR}/Libraries/iLLD/TC39B/Tricore/_Impl/IfxStm_cfg.c
${CMAKE_CURRENT_SOURCE_DIR}/Libraries/iLLD/TC39B/Tricore/_Impl/IfxPort_cfg.c
${CMAKE_CURRENT_SOURCE_DIR}/Libraries/iLLD/TC39B/Tricore/_Impl/IfxCpu_cfg.c
${CMAKE_CURRENT_SOURCE_DIR}/Libraries/Service/CpuGeneric/StdIf/IfxStdIf_Timer.c
${FREERTOS_DIRECTORY}/croutine.c
#${FREERTOS_DIRECTORY}/event_groups.c
${FREERTOS_DIRECTORY}/list.c
#${FREERTOS_DIRECTORY}/queue.c
#${FREERTOS_DIRECTORY}/stream_buffer.c
${FREERTOS_DIRECTORY}/tasks.c
${FREERTOS_DIRECTORY}/timers.c
${FREERTOS_DIRECTORY}/portable/MemMang/heap_4.c
${FREERTOS_DIRECTORY}/portable/TriCore/port.c
${CMAKE_CURRENT_SOURCE_DIR}/os/os_cfg.c
)
set(OS_INCLUDE_LIST
${CMAKE_CURRENT_SOURCE_DIR}/Libraries/iLLD/TC39B/Tricore/
${CMAKE_CURRENT_SOURCE_DIR}/Libraries/iLLD/TC39B/Tricore/Cpu/Std
${CMAKE_CURRENT_SOURCE_DIR}/Libraries/iLLD/TC39B/Tricore/Cpu/Trap
${CMAKE_CURRENT_SOURCE_DIR}/Libraries/iLLD/TC39B/Tricore/Stm/Std
${CMAKE_CURRENT_SOURCE_DIR}/Libraries/iLLD/TC39B/Tricore/Stm/Timer
${CMAKE_CURRENT_SOURCE_DIR}/Libraries/iLLD/TC39B/Tricore/Scu/Std
${CMAKE_CURRENT_SOURCE_DIR}/Libraries/iLLD/TC39B/Tricore/Pms/Std
${CMAKE_CURRENT_SOURCE_DIR}/Libraries/Infra/Sfr/TC39B/_Reg
${CMAKE_CURRENT_SOURCE_DIR}/Libraries/Infra/Ssw/TC39B/Tricore
${CMAKE_CURRENT_SOURCE_DIR}/Libraries/Infra/Platform
${CMAKE_CURRENT_SOURCE_DIR}/Libraries/Infra/Platform/Tricore/Compilers
${CMAKE_CURRENT_SOURCE_DIR}/Libraries/Service/CpuGeneric
${CMAKE_CURRENT_SOURCE_DIR}/Libraries/Service/CpuGeneric/StdIf/
${CMAKE_CURRENT_SOURCE_DIR}/Configurations
${FREERTOS_DIRECTORY}/include
${FREERTOS_DIRECTORY}/portable/TriCore
${CMAKE_CURRENT_SOURCE_DIR}/os
)

if(${TOOLCHAIN_TRICORE_TASKING})
set(CSTART_SRC_LIST
${CMAKE_CURRENT_SOURCE_DIR}/cstart/sync_on_halt.c
${CMAKE_CURRENT_SOURCE_DIR}/cstart/cstart.c
${CMAKE_CURRENT_SOURCE_DIR}/cstart/cstart_tc1.c
${CMAKE_CURRENT_SOURCE_DIR}/cstart/cstart_tc2.c
${CMAKE_CURRENT_SOURCE_DIR}/cstart/cstart_tc3.c
${CMAKE_CURRENT_SOURCE_DIR}/cstart/cstart_tc4.c
${CMAKE_CURRENT_SOURCE_DIR}/cstart/cstart_tc5.c
${CMAKE_CURRENT_SOURCE_DIR}/cstart/trap.c
#${CMAKE_CURRENT_SOURCE_DIR}/cstart/bmhd.c
)
elseif(${TOOLCHAIN_TRICORE_HIGHTEC})
set(CSTART_SRC_LIST
${CMAKE_CURRENT_SOURCE_DIR}/cstart/crt0-tc39x.c
)
endif()
set(CSTART_INCLUDE_LIST
${CMAKE_CURRENT_SOURCE_DIR}/cstart/
)

add_library(cstart STATIC ${CSTART_SRC_LIST})
add_library(os STATIC ${OS_SRC_LIST})
set_target_properties(cstart PROPERTIES LINKER_LANGUAGE C)

include_directories(
${CSTART_INCLUDE_LIST}
${OS_INCLUDE_LIST}
)
add_executable(${PROJECT_NAME}
${CMAKE_CURRENT_SOURCE_DIR}/main.c
)

set_target_properties(${PROJECT_NAME} PROPERTIES LINKER_LANGUAGE C
SUFFIX
.elf)
target_link_libraries(${PROJECT_NAME}
$<TARGET_OBJECTS:cstart>
$<TARGET_OBJECTS:os>
)
