MESSAGE(STATUS "Using toolchain file: ${CMAKE_TOOLCHAIN_FILE}")
if(CMAKE_TOOLCHAIN_FILE)
endif()
set(TOOLCHAIN_TRICORE_TASKING 1)
set(CMAKE_SYSTEM_NAME Generic)
set(CMAKE_TRY_COMPILE_TARGET_TYPE STATIC_LIBRARY)
set(TOOLCHAIN_PATH "C:/Infineon/AURIX-Studio-1.9.20/tools/Compilers/Tasking_1.1r8/ctc")
set(CMAKE_ASM_COMPILER "${TOOLCHAIN_PATH}/bin/astc.exe")
set(CMAKE_C_COMPILER "${TOOLCHAIN_PATH}/bin/cctc.exe")
set(CMAKE_CXX_COMPILER "${TOOLCHAIN_PATH}/bin/cctc.exe")
set(CMAKE_LINKER "${TOOLCHAIN_PATH}/bin/ltc.exe")
set(CMAKE_AR "${TOOLCHAIN_PATH}/bin/artc.exe")

set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/build/output/lib)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/build/output/s19)

set(CMAKE_C_FLAGS
"--cpu=tc39x                \
--core=tc1.6.2              \
--create=o                  \
-g3                         \
--tradeoff=4                \
--default-near-size=0       \
--misrac-mandatory-warnings \
")

set(CMAKE_CXX_FLAGS
"--c++11              \
--io-streams=cpp11    \
--default-near-size=0 \
--core=tc1.6.2        \
--create=o            \
-g3                   \
--wchar_t-keyword     \
--exceptions          \
--tradeoff=4          \
")

set(LINKER_SCRIPT "${PROJECT_SOURCE_DIR}/Lcf_Tasking_Tricore_Tc.lsl")
set(CMAKE_C_LINK_FLAGS
"--core=mpe:vtc                       \
-D__CPU__=tc39xb                      \
-D__PROC_TC39XB__                     \
--munch                               \
-lcpsx_fpu -lcs_fpu -lfp_fpu -lrt     \
-L${TOOLCHAIN_PATH}/lib/tc162         \
-mcrfiklSmNOuQ                        \
-M                                    \
-o:IHEX                               \
-o:SREC                               \
-o:ELF                                \
-d${LINKER_SCRIPT}")

set(CMAKE_CXX_LINK_FLAGS
"--core=mpe:vtc                       \
-D__CPU__=tc39xb                      \
-D__PROC_TC39XB__                     \
--munch                               \
-lcpx -lcw -lcxxx -lfp -lrt           \
-L${TOOLCHAIN_PATH}/lib/tc162         \
-mcrfiklSmNOuQ                        \
-M                                    \
-o:IHEX                               \
-o:SREC                               \
-o:ELF                                \
-d${LINKER_SCRIPT}")

set(CMAKE_C_COMPILE_OBJECT "<CMAKE_C_COMPILER> <INCLUDES> ${CMAKE_C_FLAGS} -o <OBJECT> <SOURCE>")
set(CMAKE_C_CREATE_STATIC_LIBRARY "${CMAKE_AR} -r <TARGET> <LINK_FLAGS> <OBJECTS>")
set(CMAKE_C_LINK_EXECUTABLE "${CMAKE_LINKER} -o <TARGET> -c <TARGET>:BIN:0 <OBJECTS> <LINK_LIBRARIES> <CMAKE_C_LINK_FLAGS> <LINK_FLAGS>")
set(CMAKE_CXX_COMPILE_OBJECT "<CMAKE_CXX_COMPILER> <INCLUDES> <DEFINES> <FLAGS> -o <OBJECT> <SOURCE>")
set(CMAKE_CXX_CREATE_STATIC_LIBRARY "${CMAKE_AR} -r <TARGET> <LINK_FLAGS> <OBJECTS>")
set(CMAKE_CXX_LINK_EXECUTABLE "${CMAKE_LINKER} -o <TARGET> -c <TARGET>:BIN:0 <OBJECTS> <LINK_LIBRARIES> <CMAKE_CXX_LINK_FLAGS> <LINK_FLAGS>")