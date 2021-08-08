/*
 * CFile1.c
 *
 * Created: 10/09/2019 05:32:25 م
 *  Author: new
 */ 

#include <avr/io.h>
#include "DIO.h"
#include "macros.h"

//1_initialize the pin as an output to connect the led
void LED_init(char port, char pin)
{
	DIO_set_direction(port, pin, 1);
}


//2_turn on the led connected to the given port and pin
void LED_turn_on(char port, char pin)
{
	DIO_write(port, pin, 1);

}


//3_turn off the led connected to the given port and pin
void LED_turn_off(char port, char pin)
{
	DIO_write(port, pin, 0);
}


//4_toggle the led connected on the given port and pin
void LED_toggle(char port, char pin)
{
	DIO_toggle(port, pin);
}