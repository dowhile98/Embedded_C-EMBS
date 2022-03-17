/*
 * funciones.c
 *
 *  Created on: 17 mar. 2022
 *      Author: Lenovo
 */

#include "funciones.h"
#include <stdio.h>
/**
 * @fun  	ingresoNumeroPositivo
 * @brief	ingreso de un numero positivo por teclado
 * @param	: none
 * @return	: numero entero
 * @note    :
 * esta funcion se para ingresar el valor valido, que sería
 * un numero positivo, dicho numero va a ser ingresado por teclado
 */
int ingresoNumeroPositivo(void){
	/*variable local*/
	static int count = 1;

	int n;
	/*cuerpo*/
	do{
		printf("ingrese numero positivo %d(>0):",count);
		scanf("%d",&n);
	}while(n <= 0 );
	count++;
	/*retorno*/
	return n;
}

/**
 * @brief esta funcion se usa para realizar la suma de dos numeros
 */
int suma(int n, int m){
	/*variables locales*/
	int res;
	/*cuerpo*/
	if(n == 0)
		return m;
	if(m == 0)
		return n;

	res = n + m;
	/*retorno*/
	return res;
}
