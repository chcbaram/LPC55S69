/*
 * led.c
 *
 *  Created on: 2020. 9. 16.
 *      Author: Baram
 */




#include "led.h"
#include "fsl_gpio.h"


typedef struct
{
  uint32_t  port;
  uint32_t  pin;
  uint8_t   on_state;
  uint8_t   off_state;
} led_tbl_t;


static const led_tbl_t led_tbl[LED_MAX_CH] =
    {
        {1, 4, 0, 1},
        {1, 7, 0, 1},
        {1, 6, 0, 1},
    };




bool ledInit(void)
{
  for (int i=0; i<LED_MAX_CH; i++)
  {
    ledOff(i);
  }

  return true;
}

void ledOn(uint8_t ch)
{
  GPIO_PinWrite(GPIO, led_tbl[ch].port, led_tbl[ch].pin, led_tbl[ch].on_state);
}

void ledOff(uint8_t ch)
{
  GPIO_PinWrite(GPIO, led_tbl[ch].port, led_tbl[ch].pin, led_tbl[ch].off_state);
}

void ledToggle(uint8_t ch)
{
  GPIO_PortToggle(GPIO, led_tbl[ch].port, (1<<led_tbl[ch].pin));
}


