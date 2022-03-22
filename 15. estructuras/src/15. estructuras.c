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
/*definicion de la estructura*/
typedef struct {
	char nombre[20];
	char apellidos [50];
	int edad;
	float altura;
}persona;

/*declaracion de variables del tipo definido por la estructura*/
persona Jeffry, Pepe;

typedef persona *ptrPersona;

ptrPersona Juan;


/**
 * brief añadir informacion
 */
ptrPersona InfoPersona(void);


int main(void) {
	printf("ingrese informacion del usuario\n");
	printf("nombre: ");
	scanf("%s",Jeffry.nombre);
	printf("apellido: ");
	scanf("%s",Jeffry.apellidos);
	printf("altura: ");
	scanf("%f",&Jeffry.altura);
	printf("edad: ");
	scanf("%d",&Jeffry.edad);

	//Juan = InfoPersona();


	printf("nombre es: %s\n",Jeffry.nombre);
	system("PAUSE");
	return EXIT_SUCCESS;
}

/**
 * brief añadir informacion
 */
/*ptrPersona InfoPersona(void){
	ptrPersona xPersona;
	printf("ingrese informacion del usuario\n");
	printf("nombre: ");
	scanf("%s",xPersona->nombre);
	printf("apellido: ");
	scanf("%s",xPersona->apellidos);
	printf("altura: ");
	scanf("%f",&xPersona->altura);
	printf("edad: ");
	scanf("%d",&xPersona->edad);

	return xPersona;
}*/
