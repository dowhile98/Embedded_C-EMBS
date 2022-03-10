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
#include <stddef.h>

int main(void) {

	int edad;
	int *ptrEdad = NULL;		//NO APUNTA A NINGUNA DIRECCION
	void *ptr = NULL;


	/*Se referencia las direcciones*/
	ptr = &edad;
	ptrEdad = &edad;

	printf("EJEMPLO DE PUNTEROS\n");
/**********************************************/
	printf("INGRESE EL VALOR DE SU EDAD->");
	scanf("%d",ptrEdad);

	printf("\\VALOR DE EDAD->%u\\\n",edad);
	printf("\'VALOR DE EDAD->%d\'\n",*((int*)ptr));


	system("PAUSE");
	return EXIT_SUCCESS;
}
