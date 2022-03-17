/*
 * funciones.h
 *
 *  Created on: 17 mar. 2022
 *      Author: Lenovo
 */

#ifndef FUNCIONES_H_
#define FUNCIONES_H_

/*includes*/
#include <stdint.h>
/*definicion de los macros*/

/*external defines*/
extern int numeros;
/*typedef*/

/*prototipo de funciones*/
//<tipo de retorno> <nombre><parametros>
/**
 * @fun  	ingresoNumeroPositivo
 * @brief	ingreso de un numero positivo por teclado
 * @param	: none
 * @return	: numero entero
 * @note    :
 * esta funcion se para ingresar el valor valido, que sería
 * un numero positivo, dicho numero va a ser ingresado por teclado
 */
int ingresoNumeroPositivo(void);

/**
 * @brief esta funcion se usa para realizar la suma de dos numeros
 */
int suma(int n, int m);


#endif /* FUNCIONES2_H_ */
