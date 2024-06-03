
/******************************************************************************/
/*----------------------------------Includes----------------------------------*/
/******************************************************************************/
#include "Ifx_Cfg_Ssw.h"
#include "FreeRTOS.h"
#include "task.h"
#include <stdio.h>
/******************************************************************************/
/*------------------------------Global variables------------------------------*/
/******************************************************************************/


/******************************************************************************/
/*-------------------------Private Variables/Constants------------------------*/
/******************************************************************************/

#define CORE0_TASK_PERIOD_MS             (1000)
#define CORE0_TASK_PRIORITY              (1)

#define CORE1_TASK_PERIOD_MS		     (500)
#define CORE1_TASK_PRIORITY				 (2)

#define CORE2_TASK_PERIOD_MS             (200)
#define CORE2_TASK_PRIORITY              (3)

#define CORE3_TASK_PERIOD_MS             (100)
#define CORE3_TASK_PRIORITY              (4)

#define CORE4_TASK_PERIOD_MS             (50)
#define CORE4_TASK_PRIORITY              (5)

#define CORE5_TASK_PERIOD_MS             (20)
#define CORE5_TASK_PRIORITY              (6)

/******************************************************************************/
/*--------------------------Function Implementations--------------------------*/
/******************************************************************************/
volatile uint32 Core0TaskCount= 0UL;
static void Core0Task(void *arg)
{
    (void)arg;

    while (1)
    {
        vTaskDelay(CORE0_TASK_PERIOD_MS);
        Core0TaskCount++;
        {
            printf("Core0Task\n");
        }
    }
}

volatile uint32 Core1TaskCount= 0UL;
static void Core1Task(void *arg)
{
    (void)arg;

    while (1)
    {
        vTaskDelay(CORE1_TASK_PERIOD_MS);
        Core1TaskCount++;
        {
            __nop();
        }
    }
}

volatile uint32 Core2TaskCount= 0UL;
static void Core2Task(void *arg)
{
    (void)arg;

    while (1)
    {
        vTaskDelay(CORE2_TASK_PERIOD_MS);
        Core2TaskCount++;
        {
            __nop();
        }
    }
}

volatile uint32 Core3TaskCount= 0UL;
static void Core3Task(void *arg)
{
    (void)arg;

    while (1)
    {
        vTaskDelay(CORE3_TASK_PERIOD_MS);
        Core3TaskCount++;
        {
            __nop();
        }
    }
}

volatile uint32 Core4TaskCount= 0UL;
static void Core4Task(void *arg)
{
    (void)arg;

    while (1)
    {
        vTaskDelay(CORE4_TASK_PERIOD_MS);
        Core4TaskCount++;
        {
            __nop();
        }
    }
}

volatile uint32 Core5TaskCount= 0UL;
static void Core5Task(void *arg)
{
    (void)arg;

    while (1)
    {
        vTaskDelay(CORE5_TASK_PERIOD_MS);
        Core5TaskCount++;
        {
            __nop();
        }
    }
}
volatile uint32 ulIdleCycleCount = 0UL;
void vApplicationIdleHook( void )
{
	/* This hook function does nothing but increment a counter. */
	ulIdleCycleCount++;
	{
		/******************************************************************
		 *                        IDLE Task START                         *
		 ******************************************************************/
	    __nop();
		/******************************************************************
		 *                         IDLE Task END                          *
		 ******************************************************************/
	}
}

IFX_ALIGN(4) IfxCpu_syncEvent g_cpuSyncEvent = 0;

void os_init_core0(void)
{
    IFX_CFG_SSW_CALLOUT_PLL_INIT();

    IfxScuWdt_disableSafetyWatchdog(IfxScuWdt_getSafetyWatchdogPassword());

	/* Create tasks. */
    xTaskCreate(Core0Task,
                "Core0 Task",
                configMINIMAL_STACK_SIZE,
                NULL,
                CORE0_TASK_PRIORITY,
                NULL);
}

void os_init_core1(void)
{
    xTaskCreate(Core1Task,
                "Core1 Task",
                configMINIMAL_STACK_SIZE,
                NULL,
                CORE1_TASK_PRIORITY,
                NULL);
}

void os_init_core2(void)
{
    xTaskCreate(Core2Task,
                "Core2 Task",
                configMINIMAL_STACK_SIZE,
                NULL,
                CORE2_TASK_PRIORITY,
                NULL);
}

void os_init_core3(void)
{
    xTaskCreate(Core3Task,
                "Core3 Task",
                configMINIMAL_STACK_SIZE,
                NULL,
                CORE3_TASK_PRIORITY,
                NULL);
}

void os_init_core4(void)
{
    xTaskCreate(Core4Task,
                "Core4 Task",
                configMINIMAL_STACK_SIZE,
                NULL,
                CORE4_TASK_PRIORITY,
                NULL);
}

void os_init_core5(void)
{
    xTaskCreate(Core5Task,
                "Core5 Task",
                configMINIMAL_STACK_SIZE,
                NULL,
                CORE5_TASK_PRIORITY,
                NULL);
}

void os_init(void)
{
    /* Initialize operating system tasks */

    /* !!WATCHDOG0 AND SAFETY WATCHDOG ARE DISABLED HERE!!
     * Enable the watchdogs and service them periodically if it is required
     */
    IfxScuWdt_disableCpuWatchdog(IfxScuWdt_getCpuWatchdogPassword());
    /* Wait for CPU sync event */
    IfxCpu_emitEvent(&g_cpuSyncEvent);
    IfxCpu_waitEvent(&g_cpuSyncEvent, 50);

    if ( portGET_CORE_ID() == 0 )
    {
        os_init_core0();
    }
    if ( portGET_CORE_ID() == 1 )
    {
        os_init_core1();
    }
    if ( portGET_CORE_ID() == 2 )
    {
        os_init_core2();
    }
    if ( portGET_CORE_ID() == 3 )
    {
        os_init_core3();
    }
    if ( portGET_CORE_ID() == 4 )
    {
        os_init_core4();
    }
    if ( portGET_CORE_ID() == 6 )
    {
        os_init_core5();
    }
    IfxCpu_enableInterrupts();

    vTaskStartScheduler();
}
