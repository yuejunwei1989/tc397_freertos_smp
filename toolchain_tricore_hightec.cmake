if(CMAKE_TOOLCHAIN_FILE)
endif()
set(TOOLCHAIN_TRICORE_HIGHTEC 1)
set(CMAKE_SYSTEM_NAME   Generic)
set(CMAKE_C_COMPILER_WORKS    1)
set(CMAKE_CXX_COMPILER_WORKS  1)
# Specify the cross compiler
set(TOOLCHAIN_PATH                      "C:/Opt/HighTec/toolchains/tricore/v4.9.3.0-infineon-1.0")
set(CMAKE_ASM_COMPILER                  "${TOOLCHAIN_PATH}/bin/tricore-as.exe")
set(CMAKE_C_COMPILER                    "${TOOLCHAIN_PATH}/bin/tricore-gcc.exe")
set(CMAKE_CXX_COMPILER                  "${TOOLCHAIN_PATH}/bin/tricore-gcc.exe")
set(CMAKE_LINKER                        "${TOOLCHAIN_PATH}/bin/tricore-gcc.exe")
set(CMAKE_OBJCOPY                       "${TOOLCHAIN_PATH}/bin/tricore-objcopy.exe")
set(CMAKE_OBJDUMP                       "${TOOLCHAIN_PATH}/bin/tricore-objdump.exe")
set(CMAKE_SIZE                          "${TOOLCHAIN_PATH}/bin/tricore-size.exe")
set(CMAKE_AR                            "${TOOLCHAIN_PATH}/bin/tricore-ar.exe")
set(LIBRARY_OUTPUT_PATH                 ${PROJECT_SOURCE_DIR}/build/output/lib)
set(EXECUTABLE_OUTPUT_PATH              ${PROJECT_SOURCE_DIR}/build/output/exe)

#set(CMAKE_VERBOSE_MAKEFILE             ON)
set(CMAKE_C_COMPILER_FORCED             ON)
set(CMAKE_CXX_COMPILER_FORCED           ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS       ON)

set(CMAKE_C_USE_RESPONSE_FILE_FOR_OBJECTS 1)
set(CMAKE_C_USE_RESPONSE_FILE_FOR_LIBRARIES 1)

set(LINKER_SCRIPT "${CMAKE_CURRENT_SOURCE_DIR}/Lcf_Gnuc_Tricore_Tc.ld")

set(CMAKE_C_FLAGS
"-std=c99            \
-fno-common          \
-fno-short-enums     \
-funsigned-bitfields \
-O0                  \
-g3                  \
-W                   \
-Wall                \
-Wextra              \
-Wdiv-by-zero        \
-Warray-bounds       \
-Wcast-align         \
-Wignored-qualifiers \
-Wformat             \
-Wformat-security    \
-pipe                \
-D__GNUC__=4         \
-fomit-frame-pointer \
-ffreestanding       \
-fshort-double       \
-mcpu=tc39xx         \
-fdata-sections      \
-ffunction-sections  \
-mversion-info")

set(CMAKE_CXX_FLAGS
"-O0 \
-g3 \
-Wall \
-c \
-fmessage-length=0 \
-fno-common \
-fstrict-volatile-bitfields \
-fdata-sections \
-ffunction-sections \
-mtc162")

set(CMAKE_C_LINK_FLAGS
"-nocrt0 \
-T${LINKER_SCRIPT} \
-Wl,--gc-sections \
-mcpu=tc39xx \
-Wl,--no-warn-flags \
-Wl,-Map=${EXECUTABLE_OUTPUT_PATH}/${CMAKE_PROJECT_NAME}-${PROJECT_VERSION}.map \
-Wl,--cref -fshort-double \
-Wl,-n \
-Wl,--extmap=a")

set(CMAKE_CXX_LINK_FLAGS
"-nocrt0 \
-T${LINKER_SCRIPT} \
-Wl,-Map=${MAP_FILE} \
-Wl,--gc-sections -mtc162")

set(CMAKE_C_COMPILE_OBJECT "<CMAKE_C_COMPILER> -c <INCLUDES> ${CMAKE_C_FLAGS} -o <OBJECT> <SOURCE>")
set(CMAKE_C_CREATE_STATIC_LIBRARY "${CMAKE_AR} -r <TARGET> <LINK_FLAGS> <OBJECTS>")
set(CMAKE_C_LINK_EXECUTABLE "${CMAKE_LINKER} <LINK_LIBRARIES> <CMAKE_C_LINK_FLAGS> <LINK_FLAGS> -o <TARGET> <OBJECTS>")
set(CMAKE_CXX_COMPILE_OBJECT "<CMAKE_CXX_COMPILER> <INCLUDES> <DEFINES> <FLAGS> -o <OBJECT> <SOURCE>")
set(CMAKE_CXX_CREATE_STATIC_LIBRARY "${CMAKE_AR} -r <TARGET> <LINK_FLAGS> <OBJECTS>")
set(CMAKE_CXX_LINK_EXECUTABLE "${CMAKE_LINKER} <LINK_LIBRARIES> <CMAKE_CXX_LINK_FLAGS> <LINK_FLAGS> -o <TARGET> <OBJECTS>")