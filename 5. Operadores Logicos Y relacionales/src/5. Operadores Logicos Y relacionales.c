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
#include <stdint.h>
#include <stdbool.h>


/*unsigned char*/
uint8_t ch;
uint8_t a, b, c;

bool res;

int main(void) {
	printf("OPERADORES LOGICOS Y RELACIONALES\n");

	ch = 'd';

	res = (ch == 'c');
	printf("RES -> %d\n",res);

	a = 3; b = 5; c = 10;

	res = (!((a + b)>(c - b)) && (a * b < c * a));


	printf("RES -> %d\n",res);
	system("PAUSE");
	return EXIT_SUCCESS;
}
