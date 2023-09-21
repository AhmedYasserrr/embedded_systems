/*
 * Register.h
 *
 *  Created on: Sep 1, 2023
 *      Author: HP
 */


#ifndef DIO_REGISTER_H_
#define DIO_REGISTER_H_

#include "Config.h"
#include "../LIB/STD_TYPES.h"

#if (MCU_TYPE == ATMEGA32)

#define PORTA  (*(volatile uint8 *) (0x3b))
#define PORTB  (*(volatile uint8 *) (0x38))
#define PORTC  (*(volatile uint8 *) (0x35))
#define PORTD  (*(volatile uint8 *) (0x32))

#define DDRA  (*(volatile uint8 *) (0x3a))
#define DDRB  (*(volatile uint8 *) (0x37))
#define DDRC  (*(volatile uint8 *) (0x34))
#define DDRD  (*(volatile uint8 *) (0x31))

#define PINA  (*(volatile uint8 *) (0x39))
#define PINB  (*(volatile uint8 *) (0x36))
#define PINC  (*(volatile uint8 *) (0x33))
#define PIND  (*(volatile uint8 *) (0x30))



#elif (MCU_TYPE == ATMEGA328P)

#define PORTA   (*(volatile uint8 *)0x20)

#define PORTB  (*(volatile uint8 *)0x25)
#define PORTC  (*(volatile uint8 *)0x28)
#define PORTD  (*(volatile uint8 *)0x2b)

#define DDRA  (*(volatile uint8 *)0x22)
#define DDRB  (*(volatile uint8 *)0x24)
#define DDRC  (*(volatile uint8 *)0x27)
#define DDRD  (*(volatile uint8 *)0x2a)

#define PINA  (*(volatile uint8 *)0x21)
#define PINB  (*(volatile uint8 *)0x23)
#define PINC  (*(volatile uint8 *)0x26)
#define PIND  (*(volatile uint8 *)0x29)

#endif


#endif /* DIO_REGISTER_H_ */
