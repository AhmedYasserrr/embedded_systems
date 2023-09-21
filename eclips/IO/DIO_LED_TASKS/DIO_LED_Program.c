/*
 * main.c
 *
 *  Created on: Sep 2, 2023
 *      Author: HP
 */

#include "../LIB/STD_TYPES.h"
#include "../DIO/Interface.h"
#include <util/delay.h>

void LED2(void){
	DIO_uint8_SetPortDirection(DIO_uint8_PORTD , DIO_uint8_PORT_OUTPUT);
	DIO_uint8_SetPortValue(DIO_uint8_PORTD, DIO_uint8_LOW);

	sint8 i = 0;
	while(1){
		for(i = 0; i < 8; i++ ){
		    DIO_uint8_SetPinValue(DIO_uint8_PORTD, i,  DIO_uint8_HIGH);
			_delay_ms(100);
			DIO_uint8_SetPinValue(DIO_uint8_PORTD, i,  DIO_uint8_LOW);
		}

		for(i = 7; i > 0; i--){
		    DIO_uint8_SetPinValue(DIO_uint8_PORTD, i,  DIO_uint8_HIGH);
			_delay_ms(100);
			DIO_uint8_SetPinValue(DIO_uint8_PORTD, i,  DIO_uint8_LOW);
		}
	}

}


void LED3(void){
	DIO_uint8_SetPortDirection(DIO_uint8_PORTD , DIO_uint8_PORT_OUTPUT);
	DIO_uint8_SetPortValue(DIO_uint8_PORTD, DIO_uint8_LOW);

	sint8 i = 0;
	while(1){
		for(i = 0; i < 256; i++ ){
			DIO_uint8_SetPortValue(DIO_uint8_PORTD, i);
			_delay_ms(20);
		}
	}
}


void LED4(void){
	DIO_uint8_SetPortDirection(DIO_uint8_PORTD , DIO_uint8_PORT_OUTPUT);
	DIO_uint8_SetPortValue(DIO_uint8_PORTD, DIO_uint8_LOW);

	sint8 i = 0;
	while(1){
		while (i <= 4){
		    DIO_uint8_SetPinValue(DIO_uint8_PORTD, i,  DIO_uint8_HIGH);
		    DIO_uint8_SetPinValue(DIO_uint8_PORTD, (7-i),  DIO_uint8_HIGH);
			_delay_ms(100);
			i++;
		}
		i--;
		while (i >= 0){
		    DIO_uint8_SetPinValue(DIO_uint8_PORTD, i,  DIO_uint8_LOW);
		    DIO_uint8_SetPinValue(DIO_uint8_PORTD, (7-i),  DIO_uint8_LOW);
			_delay_ms(100);
			if(i == 0){
				break;
			}
			i--;
		}
	}
}

