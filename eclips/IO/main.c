/*
 * LED_DRIVER_Main.c
 *
 *  Created on: Sep 8, 2023
 *      Author: HP
 */
#include "LIB/STD_TYPES.h"
#include "LIB/BIT_MATH.h"

#include "DIO/Register.h"
#include "DIO/Interface.h"
#include "LED_DRIVER/LED_Interface.h"
#include <util/delay.h>

#include "LCD/LCD_interface.h"


int main()
{
	LCD_void_Init();

	LCD_void_SendData('A');
	LCD_void_SendData('h');
	LCD_void_SendData('m');
	LCD_void_SendData('e');
	LCD_void_SendData('d');
	LCD_void_SendString(" Yasser");

    return 0;
}
