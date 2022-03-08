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
#include <string.h>


const char ejp[] = "ESTO ES UNA CADENA\n";

int main(void) {
/*VARIABLE DE TIPO CHAR COMO ARREGLO(cadena de caracteres)*/
	char nombre[30];
	char apellido[30];
	/*asignacion*/
	strcpy(nombre, "JEFFRY");
	strcpy(apellido, "QUINO");
	//escribir
	printf("HOLA %s %s , bienvenido\n",nombre,apellido);
	//lear
	printf("INGRESE SU NOMBRE->");
	scanf("%s",nombre);
	printf("INGRESE SU APELLIDO->");
	scanf("%s",apellido);
	printf("HOLA %s %s , bienvenido\n",nombre,apellido);


	system("PAUSE");
	return EXIT_SUCCESS;
}
