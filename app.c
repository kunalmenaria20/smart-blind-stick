/***************************************************************************//**
 * @file
 * @brief Application-level Functions
 *******************************************************************************
 * # License
 * <b>Copyright 2019 Silicon Laboratories Inc. www.silabs.com</b>
 *******************************************************************************
 *
 * SPDX-License-Identifier: Zlib
 *
 * The licensor of this software is Silicon Laboratories Inc.
 *
 * This software is provided 'as-is', without any express or implied
 * warranty. In no event will the authors be held liable for any damages
 * arising from the use of this software.
 *
 * Permission is granted to anyone to use this software for any purpose,
 * including commercial applications, and to alter it and redistribute it
 * freely, subject to the following restrictions:
 *
 * 1. The origin of this software must not be misrepresented; you must not
 *    claim that you wrote the original software. If you use this software
 *    in a product, an acknowledgment in the product documentation would be
 *    appreciated but is not required.
 * 2. Altered source versions must be plainly marked as such, and must not be
 *    misrepresented as being the original software.
 * 3. This notice may not be removed or altered from any source distribution.
 *
 ******************************************************************************/
#include "app.h"
#include <stdio.h>
#include "sl_sleeptimer.h"
#include "em_device.h"
#include "em_cmu.h"
#include "em_gpio.h"
#include "em_timer.h"

#define TRIG_PORT gpioPortA
#define TRIG_PIN 7 // Trigger pin on PA07
#define ECHO_PORT gpioPortB
#define ECHO_PIN 1 // Echo1 pin on PB01
#define ECHO2_PORT gpioPortD
#define ECHO2_PIN 3 // Echo2 on PD03
#define LED_PORT gpioPortB
#define LED_PIN 0 // LED on PB00
#define BUZZ_PORT gpioPortC
#define BUZZ_PIN 1 // Buzzer on PC01

void delay_us(uint32_t us)
{
    uint32_t ticks = (SystemCoreClock / 10000000) * us;
    for (volatile uint32_t i = 0; i < ticks; i++)
        ;
}

void initGPIO()
{
    CMU_ClockEnable(cmuClock_GPIO, true);

    // Single Trigger as output
    GPIO_PinModeSet(TRIG_PORT, TRIG_PIN, gpioModePushPull, 0);
    // Echo1 as input
    GPIO_PinModeSet(ECHO_PORT, ECHO_PIN, gpioModeInputPullFilter, 0);
    // Echo2 as input
    GPIO_PinModeSet(ECHO2_PORT, ECHO2_PIN, gpioModeInputPullFilter, 0);
    // LED as output
    GPIO_PinModeSet(LED_PORT, LED_PIN, gpioModePushPull, 0);
    // BUZZER as output
    GPIO_PinModeSet(BUZZ_PORT, BUZZ_PIN, gpioModePushPull, 0);
}

void initTimer()
{
    CMU_ClockEnable(cmuClock_TIMER0, true);

    TIMER_Init_TypeDef timerInit = TIMER_INIT_DEFAULT;
    timerInit.prescale = timerPrescale1024;   // Added this To slow down the timer count rate

    TIMER_Init(TIMER0, &timerInit);
    TIMER_CounterSet(TIMER0, 0);
}

uint32_t measureDistance(GPIO_Port_TypeDef echoPort, uint32_t echoPin)
{
    GPIO_PinOutClear(TRIG_PORT, TRIG_PIN);
    delay_us(2);
    GPIO_PinOutSet(TRIG_PORT, TRIG_PIN);
    delay_us(10);
    GPIO_PinOutClear(TRIG_PORT, TRIG_PIN);
    uint32_t timeout = 1000000;

    while (GPIO_PinInGet(echoPort, echoPin) == 0 && --timeout)
        ;
    if (timeout == 0)
        return 11111;

    TIMER_CounterSet(TIMER0, 0); // Start timer

    while (GPIO_PinInGet(echoPort, echoPin) == 1 && --timeout)
        ;
    if (timeout == 0)
        return 9999;

    uint32_t stop = TIMER_CounterGet(TIMER0);
    uint32_t time_us = (stop * 1000000UL) / (SystemCoreClock / 1024);
    uint32_t distance_cm = (time_us * 343) / (2 * 10000);

    if (distance_cm > 120)
        return 9999;

    return distance_cm;
}

void app_init(void)
{
    printf("System Initialized.\n");
}

void app_process_action(void)
{
    static bool is_initialized = false;
    if (!is_initialized)
    {
        initGPIO();
        initTimer();
        is_initialized = true;
    }

    uint32_t distance1 = measureDistance(ECHO_PORT, ECHO_PIN);   // PB01
    uint32_t distance2 = measureDistance(ECHO2_PORT, ECHO2_PIN); // PD03
    if (distance1 == 9999 && distance2 == 9999)
    {
        printf("No Object Found!\n");
    }
    else
    {
        if (distance1 != 9999)
            printf("Distance 1 (PB01): %lu cm\n", distance1);
        if (distance2 != 9999)
            printf("Distance 2 (PD03): %lu cm\n", distance2);

        delay_us(1000000); // 1 second delay
    }
    // LED Logic ---
    if (distance1 < 100 || distance2 < 100)
    {
        GPIO_PinOutSet(LED_PORT, LED_PIN);
    }
    else
    {
        GPIO_PinOutClear(LED_PORT, LED_PIN);
    }

    // Buzzer Logic ---
    if ((distance1 > 0 && distance1 < 50) || (distance2 > 0 && distance2 < 50))
    {
        // If any sensor detects < 50 cm, continuous buzzer
        GPIO_PinOutSet(BUZZ_PORT, BUZZ_PIN);
    }
    else if ((distance1 >= 20 && distance1 < 100) || (distance2 >= 20 && distance2 < 100))
    {
        // If any detects between 20–100 cm, short beep
        GPIO_PinOutSet(BUZZ_PORT, BUZZ_PIN);
        delay_us(30000);
        GPIO_PinOutClear(BUZZ_PORT, BUZZ_PIN);
    }
    else
    {
        // Otherwise, turn off
        GPIO_PinOutClear(BUZZ_PORT, BUZZ_PIN);
    }

    delay_us(500000); // 500 ms delay
}
