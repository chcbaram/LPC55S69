/*
 * hw.h
 *
 *  Created on: 2020. 9. 16.
 *      Author: Baram
 */

#ifndef SRC_HW_HW_H_
#define SRC_HW_HW_H_


#ifdef __cplusplus
extern "C" {
#endif


#include "hw_def.h"


#include "led.h"
#include "swtimer.h"
#include "button.h"
#include "uart.h"



void hwInit(void);


#ifdef __cplusplus
}
#endif


#endif /* SRC_HW_HW_H_ */
