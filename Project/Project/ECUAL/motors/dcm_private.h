/*
 * DCM_private.h
 *
 *     Created on: Apr 11, 2023
 *         Author: Mahmoud Mowafey - https://github.com/Mahmoud-Mowafy
 *  Description: This file contains all Direct Current Motor (DCM) pre-build configurations, through which user can configure before using the DCM peripheral.
 *		MCU Datasheet: AVR ATmega32
 *                  https://ww1.microchip.com/downloads/en/DeviceDoc/Atmega32A-DataSheet-Complete-DS40002072A.pdf
 */


#ifndef DCM_PRIVATE_H_
#define DCM_PRIVATE_H_

/*******************************************************************************************************************************************************************/
/* DCM Macros */
/*******************************************************************************************************************************************************************/
/* MCAL */
#include "../../MCAL/dio/dio.h"
#include "../../MCAL/timer/timer_interface.h"
 /********************* Motor_0 Configurations ***********************/
#define	    MOT0_EN_PIN_NUMBER_0	  4
#define		MOT0_EN_PIN_NUMBER_1	  5	
#define		MOT0_PWM_PIN_NUMBER		  0
#define		MOT0_EN_PORT_NUMBER		  DIO_PORTC
#define		MOT0_PWM_PORT_NUMBER	  DIO_PORTC
 /********************* Motor_1 Configurations ***********************/
#define	    MOT1_EN_PIN_NUMBER_0	  6
#define		MOT1_EN_PIN_NUMBER_1	  7
#define		MOT1_PWM_PIN_NUMBER		  1
#define		MOT1_EN_PORT_NUMBER		  DIO_PORTC
#define		MOT1_PWM_PORT_NUMBER	  DIO_PORTC

/* End of Configurations */

/*******************************************************************************************************************************************************************/

#endif /* DCM_PRIVATE_H_ */