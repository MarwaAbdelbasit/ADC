/*
 * ADC.c
 *
 * Created: 25/11/2019 05:04:21 م
 *  Author: new
 */ 


#include <avr/io.h>
#include "ADC_driver.h"
#include "LED.h"

int main(void)
{
	ADC_init();
	LED_init('D', 0);
	LED_init('D', 1);
	LED_init('D', 2);
	LED_init('D', 3);
	LED_init('D', 4);
	LED_init('D', 5);
	LED_init('D', 6);
	LED_init('D', 7);
    while(1)
    {
        PORTD = ADC_read(); 
    }
}