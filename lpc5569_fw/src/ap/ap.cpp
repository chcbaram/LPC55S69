/*
 * ap.cpp
 *
 *  Created on: 2020. 9. 16.
 *      Author: Baram
 */




#include "ap.h"





void apInit(void)
{
  hwInit();
}

void apMain(void)
{
  uint32_t pre_time;

  pre_time = millis();
  while(1)
  {
    if (millis()-pre_time >= 500)
    {
      pre_time = millis();
      ledToggle(_DEF_LED1);
    }

    if (buttonGetPressed(2) == true)
    {
      ledOn(_DEF_LED2);
    }
    else
    {
      ledOff(_DEF_LED2);
    }
  }
}
