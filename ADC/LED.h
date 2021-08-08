/*
 * LED.h
 *
 * Created: 10/09/2019 05:44:16 م
 *  Author: new
 */ 


#ifndef LED_H_
#define LED_H_

//1_initialize the pin as an output to connect the led
void LED_init(char port, char pin);

//2_turn on the led connected to the given port and pin
void LED_turn_on(char port, char pin);

//3_turn off the led connected to the given port and pin
void LED_turn_off(char port, char pin);

//4_toggle the led connected on the given port and pin
void LED_toggle(char port, char pin);

#endif /* LED_H_ */