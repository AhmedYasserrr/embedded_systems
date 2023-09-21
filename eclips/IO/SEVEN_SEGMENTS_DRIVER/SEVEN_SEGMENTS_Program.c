/*
 *  7_SEGMENTS_Program.c
 *
 *  Created on: Sep 14, 2023
 *      Author: HP
 */

#include "../LIB/STD_TYPES.h"
#include "../DIO/Interface.h"
#include <util/delay.h>

#include "SEVEN_SEGMENTS_Interface.h"

uint8 uint8_mapped_numbers[10] = {0x3f, 0x06, 0x5b, 0x4f , 0x66, 0x6d, 0x7d, 0x07, 0x7f, 0x6f};

uint8 SEVEN_SEGMENTS_uint8_SET_number(uint8 copy_uint8_number, uint8 copy_uint8_port){
	uint8 local_uint8_errorState = 0;
	local_uint8_errorState = local_uint8_errorState |
			DIO_uint8_SetPortDirection(copy_uint8_port , DIO_uint8_PORT_OUTPUT);
	local_uint8_errorState = local_uint8_errorState |
			DIO_uint8_SetPortValue(copy_uint8_port, uint8_mapped_numbers[copy_uint8_number]);
	return local_uint8_errorState;

}

uint8 SEVEN_SEGMENTS_uint8_count(uint8 *copy_uint8_number, uint8 copy_uint8_count_state, uint8 copy_uint8_port){
	//count_state 0 for Descending Order
	//count_state 1 for Ascending Order
	uint8 local_uint8_errorState = 0;
	if (copy_uint8_count_state == 1){
		if(*copy_uint8_number == 9){
			*copy_uint8_number = 0;
		}
		else {
			(*copy_uint8_number)++;
		}
		 SEVEN_SEGMENTS_uint8_SET_number(*copy_uint8_number , copy_uint8_port);

	}
	else if (copy_uint8_count_state == 0){
		if(*copy_uint8_number == 0){
			*copy_uint8_number = 9;
		}
		else {
			(*copy_uint8_number)--;
		}
		SEVEN_SEGMENTS_uint8_SET_number(*copy_uint8_number , copy_uint8_port);

	}
	else {
		local_uint8_errorState = 1;
	}
	return local_uint8_errorState;
}
