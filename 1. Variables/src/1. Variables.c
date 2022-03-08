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

/************************************************************/
/*defines*/
#define PI 3.14


/**
 *numericos
 * int, float, double, long
 *letras
 *char
 */
//VARIABLES GLOBALES (se declaran fuera de cualquier funcion)
//Se almacenan en la memoria RAM
/*<tipo de var> <nombre> (opcional: valor inicial)*/
int edad = 20; //edad == 0



int main(void) {

	/*const <tipo> <nombre> = <volar>;*/
	const int MESES = 12;   //se almacena en la memoria flash

	//VARIABLES LOCALES(se declaran dentro de una funcion)
	//se almacenan en el stack( pila)
	int numAlumnos = 56;


	system("PAUSE");
	return EXIT_SUCCESS;
}
