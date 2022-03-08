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

/*DEFINES*/
#define PI 		3.14159


int main(void) {
	float radio;	//variable que representa el radio de un circulo
	float area;		//para almacenar el area calculado

	printf("\t->AREA DE UN CIRCULO<-\n");
	//leer el valor de radio
	//& -> direccion (obtiene la direccion de memoria donde se almacena una variable)
	//* -> indireccion
	printf("Ingrese radio(>0):");
	scanf("%f",&radio);  	//paso por referencia
	/*calculo del area*/
	area = 2 * PI * pow(radio,2);

	/*escribir el valor calculado*/
	printf("Area-> %.2f\n",area);


	system("PAUSE");
	return EXIT_SUCCESS;
}
