/*
 * bsp.h
 *
 *  Created on: 2020. 9. 16.
 *      Author: Baram
 */

#ifndef SRC_BSP_BSP_H_
#define SRC_BSP_BSP_H_


#ifdef __cplusplus
extern "C" {
#endif

#include "def.h"


#include "config/board/clock_config.h"
#include "config/board/pin_mux.h"
#include "config/board/peripherals.h"


#include "fsl_usart.h"


#define logPrintf(...)    printf(__VA_ARGS__)


void bspInit(void);
void bspDeInit(void);

extern void delay(uint32_t delay_ms);
extern uint32_t millis(void);
extern uint32_t micros(void);


#ifdef __cplusplus
}
#endif


#endif /* SRC_BSP_BSP_H_ */
