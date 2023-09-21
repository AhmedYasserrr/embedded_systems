/*
 * 7_SEGMENTS_Interface.h
 *
 *  Created on: Sep 14, 2023
 *      Author: HP
 */

#ifndef SEGMENTS_INTERFACE_H
#define SEGMENTS_INTERFACE_H

uint8 SEVEN_SEGMENTS_uint8_SET_number(uint8 copy_uint8_number, uint8 copy_uint8_port);
uint8 SEVEN_SEGMENTS_uint8_count(uint8 *copy_uint8_number,
		uint8 copy_uint8_count_state,
		uint8 copy_uint8_port);

#endif
