/*
 * LED_program.c
 *
 *  Created on: Sep 8, 2023
 *      Author: HP
 */

# include "../LIB/STD_TYPES.h"
# include "../LIB/BIT_MATH.h"

# include "LED_Interface.h"
# include "../DIO/Interface.h"
# include "../DIO/Config.h"
# include "../DIO/Register.h"

uint8 SET_LED_ON (uint8 copy_uint8_port, uint8 copy_uint8_pin){
	uint8 local_uint8_errorState = 0 ;
		if (copy_uint8_pin <= DIO_uint8_PIN7)
		{
			switch(copy_uint8_port)
			{
			case DIO_uint8_PORTA  : DDRA = SET_BIT(DDRA , copy_uint8_pin ); break;
			case DIO_uint8_PORTB  : DDRB = SET_BIT(DDRB , copy_uint8_pin ); break;
			case DIO_uint8_PORTC  : DDRC = SET_BIT(DDRC , copy_uint8_pin ); break;
			case DIO_uint8_PORTD  : DDRD = SET_BIT(DDRD , copy_uint8_pin ); break;
			default : local_uint8_errorState = 1; break;
			}

			switch(copy_uint8_port)
			{
			case DIO_uint8_PORTA  : PORTA = SET_BIT(PORTA , copy_uint8_pin ); break;
			case DIO_uint8_PORTB  : PORTB = SET_BIT(PORTB , copy_uint8_pin ); break;
			case DIO_uint8_PORTC  : PORTC = SET_BIT(PORTC , copy_uint8_pin ); break;
			case DIO_uint8_PORTD  : PORTD = SET_BIT(PORTD , copy_uint8_pin ); break;
			default : local_uint8_errorState = 1; break ;
			}

		}
		else
		{
			local_uint8_errorState = 1;
		}
		return local_uint8_errorState;

}

uint8 SET_LED_OFF(uint8 copy_uint8_port, uint8 copy_uint8_pin){
	uint8 local_uint8_errorState = 0 ;

		if (copy_uint8_pin <= DIO_uint8_PIN7)
		{
			switch(copy_uint8_port)
			{
			case DIO_uint8_PORTA  : DDRA = SET_BIT(DDRA , copy_uint8_pin ); break;
			case DIO_uint8_PORTB  : DDRB = SET_BIT(DDRB , copy_uint8_pin ); break;
			case DIO_uint8_PORTC  : DDRC = SET_BIT(DDRC , copy_uint8_pin ); break;
			case DIO_uint8_PORTD  : DDRD = SET_BIT(DDRD , copy_uint8_pin ); break;
			default : local_uint8_errorState = 1; break;
			}

			switch(copy_uint8_port)
			{
			case DIO_uint8_PORTA  : PORTA = CLR_BIT(PORTA, copy_uint8_pin ); break;
			case DIO_uint8_PORTB  : PORTB = CLR_BIT(PORTB, copy_uint8_pin ); break;
			case DIO_uint8_PORTC  : PORTC = CLR_BIT(PORTC, copy_uint8_pin ); break;
			case DIO_uint8_PORTD  : PORTD = CLR_BIT(PORTD, copy_uint8_pin ); break;
			default : local_uint8_errorState = 1; break;
			}

		}
		else
		{
			local_uint8_errorState = 1;
		}
		return local_uint8_errorState;

}

uint8 TOGGLE_LED(uint8 copy_uint8_port, uint8 copy_uint8_pin){
	uint8 local_uint8_errorState = 0 ;

		if (copy_uint8_pin <= DIO_uint8_PIN7)
		{
			switch(copy_uint8_port)
			{
			case DIO_uint8_PORTA  : DDRA = SET_BIT(DDRA , copy_uint8_pin ); break;
			case DIO_uint8_PORTB  : DDRB = SET_BIT(DDRB , copy_uint8_pin ); break;
			case DIO_uint8_PORTC  : DDRC = SET_BIT(DDRC , copy_uint8_pin ); break;
			case DIO_uint8_PORTD  : DDRD = SET_BIT(DDRD , copy_uint8_pin ); break;
			default : local_uint8_errorState = 1; break;
			}

			switch(copy_uint8_port)
			{
			case DIO_uint8_PORTA  : PORTA = TOGGLE(PORTA, copy_uint8_pin ); break;
			case DIO_uint8_PORTB  : PORTB = TOGGLE(PORTB, copy_uint8_pin ); break;
			case DIO_uint8_PORTC  : PORTC = TOGGLE(PORTC, copy_uint8_pin ); break;
			case DIO_uint8_PORTD  : PORTD = TOGGLE(PORTD, copy_uint8_pin ); break;
			default : local_uint8_errorState = 1; break;
			}

		}
		else
		{
			local_uint8_errorState = 1;
		}
		return local_uint8_errorState;

}
