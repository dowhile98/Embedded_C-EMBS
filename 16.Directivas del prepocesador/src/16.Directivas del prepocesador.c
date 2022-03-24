/*
 ============================================================================
 Name        : Directivas.c
 Author      : Quino B. Jeffry
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "ejemplo.h"

#define NUM_UNO		1
#define NUM_DOS		2
#define NUM_TRES	3
#define NUM_CUATRO	4

#define SUMA(x,y)	x+y

#define GET_NUM(x)	NUM_ ## x

#define DDRA		0xFF
#define DDRB		0xCF


#define LED			B , 5

#define OUTPUT_PIN_(a, b)  DDR ## a |= 1U<<b
#define OUTPUT_PIN(a)
/**
 * define, ifndef, ifdef, warning, error, if, elif, else, #, ##
 */

int main(void) {
	int num;
	printf("suma->%d + %d->%d\n",4,5,SUMA(4,5));

	num = GET_NUM(UNO);
	printf("num->%d\n",num);

	num = GET_NUM(DOS);
	printf("num->%d\n",num);

	num = GET_NUM(TRES);
	printf("num->%d\n",num);

	num = GET_NUM(CUATRO);
	printf("num->%d\n",num);

	OUTPUT_PIN(LED);





	system("PAUSE");
	return EXIT_SUCCESS;
}
