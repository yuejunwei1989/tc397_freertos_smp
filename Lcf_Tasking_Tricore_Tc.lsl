/* Define the start address and size of CSA for each core */
#define CSA_START_TC0      0xD0005000
#define CSA_START_TC1      0xD0005000
#define CSA_START_TC2      0xD0004000
#define CSA_START_TC3      0xD0004000
#define CSA_START_TC4      0xD0004000
#define CSA_START_TC5      0xD0004000
#define CSA_TC0            256
#define CSA_TC1            256
#define CSA_TC2            256
#define CSA_TC3            256
#define CSA_TC4            256
#define CSA_TC5            256

/* Define the size of heap */
#define HEAP               4K

/* Define the size of user stack for each core */
#define USTACK_TC0         32K
#define USTACK_TC1         8K
#define USTACK_TC2         2K
#define USTACK_TC3         2K
#define USTACK_TC4         2K
#define USTACK_TC5         2K

/* Define the size of interrupt stack for each core */
#define ISTACK_TC0         4K
#define ISTACK_TC1         4K
#define ISTACK_TC2         1K
#define ISTACK_TC3         1K
#define ISTACK_TC4         1K
#define ISTACK_TC5         1K

/* Disable BMHD generation in tasking lsl */
#define __BMHD_DISABLE_ALL__
#define __BMHD0_CONFIG __BMHD_GENERATE
#define __BMHD0_BMI   0x00FE

/* Disable SCR location in tasking lsl */
#define NOXC800INIT
#define __DISABLE_SCR_BOOT_MAGIC

/* Define the start address of user code */
#define RESET                0xA00A0000

#define INTTAB          0x800B0000              /* start address of interrupt table */
#define TRAPTAB         (INTTAB + 0xC000)      /* start address of trap table */

/* Include cpu.lsl for the definition of architecture, processor and derivative */
#include "cpu.lsl"

section_layout :vtc:linear
{
    group
    {
        //#include "tc1v1_6_2.bmhd.lsl"
    }
    group RAM_DATA(ordered, contiguous, align = 4, attributes = rw, run_addr = mem:mpe:lmuram0/not_cached)
    {
        select "(.data|.data.*)";
        select "(.bss|.bss.*)";
    }
    group ROM_DATA(ordered, align = 4, run_addr = mem:mpe:pflash0)
    {               
        select "table";
        select "(.data|.data.*)";
        select "(.rodata|.rodata.*)";
        select "(.text|.text.*)";
    }
}
