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
#include "funciones.h"
#include "funciones2.h"

int numeros;

/**
 * brief funcion paso por referencia
 */
void ingresoNumPosRef(int *ptrNum);

int main(void) {
	int n, m, res;
	/*leer valores*/
	n = ingresoNumeroPositivo();  	//por valor valor
	ingresoNumPosRef(&m);	//por referencia

	/*suma*/
	res = suma(n, m);				//PASO POR VALOR

	printf("\nLA SUMA ES->%d\n",res);

	system("PAUSE");
	return EXIT_SUCCESS;
}

/**
 * brief funcion paso por referencia
 */
void ingresoNumPosRef(int *ptrNum){

	static int count = 1;

	/*cuerpo*/
	do{
		printf("ingrese numero positivo %d(>0):",count);
		scanf("%d",ptrNum);
	}while(*ptrNum <= 0 );
	count++;

}
