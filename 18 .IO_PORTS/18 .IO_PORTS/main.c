/*
 * main.c
 *
 * Created: 3/29/2022 4:43:11 PM
 *  Author: Lenovo
 */ 

#include <xc.h>

#define F_CPU			16E+6
#include <util/delay.h>
#include "defines.h"

#define LED						B , 2
#define BUTTON					D , 3


int main(void)
{
	/*DATA DIRECTION PIN*/
	PIN_OUTPUT(LED);		//PB1, PB2 -> salida digital
	BIT_SET(DDRB, 1);
	PIN_RESET(LED);
	
	/*DDRD &=~ (1U<<DDD3);				//PD3 -> entrada digital
	PORTD |= 1U<<PORTB3;				//habilita la resistencia pull up para el pin PD3*/
	PIN_INPUT_PU(BUTTON);
	
    while(1)
    {
        //TODO:: Please write your application code 
		PORTB |= 1U<<PORTB2;
		_delay_ms(100);
		PORTB &=~ (1<<PORTB2);
		_delay_ms(100);
		/************************************/
		if( PIN_READ(BUTTON)/*PIND & 1U<<3*/){	
			BIT_SET(PORTB, 1);
		}else{
			BIT_RESET(PORTB, 1);
		}
    }
}