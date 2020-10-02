/*
 * hw.c
 *
 *  Created on: 2020. 9. 16.
 *      Author: Baram
 */




#include "hw.h"





void hwInit(void)
{
  bspInit();

  swtimerInit();

  ledInit();
  buttonInit();
  uartInit();
  uartOpen(_DEF_UART1, 57600);

}
