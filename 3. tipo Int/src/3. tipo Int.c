/*
 ============================================================================
 Name        : .c
 Author      : Quino B. Jeffry
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>     //investigar


#define CONST 	2.4E-3	//2.4x10^-3
#define FOSC	8E+6


/**
 * int8_t / uint8_t     (Entero de 8 bits con/sin signo)
 * int16_t / uint16_t   (entero de 16 bits con/sin signo)
 * int32_t / uint32_t   (entero de 32 bits con/sin signo)
 */


int main(void) {

	uint16_t numOctal = 013;  	//decimal 		-> 11
	uint32_t numHex = 0x13;		//decimal		-> 19
	uint8_t numBin = 0b1010;	//decimal		-> 10
	float pi = 3.14;
	int res;
/*****************************************************/

	printf("NUMERO OCTAL->%d\n",numOctal);
	printf("NUMERO HEX->0x%x\n",numHex);
	printf("NUMERO BIN->%d\n",numBin);
/****************************************************/
	char ch = 'a'/*<valor>*/;
	printf("letra->%c\n",ch);

	ch = 98;
	printf("letra->%d\n",ch);
/*****************************************************/
	res = (int)(pi * numBin + 4.5553434);				//conversion de tipos

/**
 * UBRR = (float)FOSC/(16 * BAUD) - 1
 * (float)11 / 5 = 2.2
 */

	system("PAUSE");
	return EXIT_SUCCESS;
}
