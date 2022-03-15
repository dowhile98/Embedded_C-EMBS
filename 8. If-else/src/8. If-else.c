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
#include <math.h>

int main(void) {
	float x;
	float fx;
	printf("EJEMPLO DE SENTENCIAS CONDICIONALES\n");
	printf("f(x), ingrese x: ");
	scanf("%f",&x);
/***************************************************/
	if(x<=0)
		fx = x + 3;
	else
		fx = pow(x,2) + 2 * x;
/***************************************************/
	printf("\nf(%.2f) = %.2f\n",x,fx);

	system("PAUSE");
	return EXIT_SUCCESS;
}
