/*
 ============================================================================
 Name        : .c
 Author      : Quino B. Jeffry
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>


uint8_t DDRB = 0;


#define BIT_SET(REG,BIT_NUMBER)		REG |= 1U<<BIT_NUMBER
#define BIT_CLEAR(REG,BIT_NUMBER)	REG &=~ (1U<<BIT_NUMBER)

int main(void)
{
	//uint8_t a = 0xA0;	//0b1010 0000 <> 160 -> 160
	//a = a | 0xA;		//0b1010 0000 | 0b100 -> 0b1010 0100
	/*establecer*/
	BIT_SET(DDRB,2);
	printf("DDRB->0x%X\n",DDRB);
	DDRB |= 1U<<3 | 1U<<7;
	printf("DDRB->0x%X\n",DDRB);
	/*CLEAR*/
	//DDRB &=~ (1U<<7 | 1U<<2);
	BIT_CLEAR(DDRB,7);
	printf("DDRB->0x%X\n",DDRB);
	/*COMPLEMENTO*/
	DDRB ^= 1U<<3;
	printf("DDRB->0x%X\n",DDRB);
	DDRB ^= 1U<<3;
	printf("DDRB->0x%X\n",DDRB);
	/*NEGACION BIT A BIT*/
	DDRB = ~DDRB;
	printf("DDRB->0x%X\n",DDRB);
    /* Loop forever */
	system("PAUSE");
	return 0;
}
