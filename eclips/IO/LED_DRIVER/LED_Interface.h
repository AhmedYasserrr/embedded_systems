/*
 * LED_Interface.h
 *
 *  Created on: Sep 8, 2023
 *      Author: HP
 */

#ifndef LED_DRIVER_LED_INTERFACE_H_
#define LED_DRIVER_LED_INTERFACE_H_

uint8 SET_LED_ON(uint8 copy_uint8_port, uint8 copy_uint8_pin);
uint8 SET_LED_OFF(uint8 copy_uint8_port, uint8 copy_uint8_pin);
uint8 TOGGLE_LED(uint8 copy_uint8_port, uint8 copy_uint8_pin);

#endif /* LED_DRIVER_LED_INTERFACE_H_ */
