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
#include <stdint.h>

int main(void) {
	uint8_t selector;
	float area = 0.0;
	uint32_t base, base2;
	uint32_t altura;

	printf("\tCALCULO DE AREAS\n");
	printf("-------------------\n");
	printf("1.- calcular area de triangulo\n");
	printf("2.- calcular area de trapecio\n");
	printf("3.- calcular area de rectangulo\n");
	printf("opcion->");
	scanf("%c",&selector);
/***********************************************/
	switch(selector){
	case '1':
		printf("AREA DEL TRIANGULO\n");
		printf("base: ");
		scanf("%d",&base);
		printf("altura: ");
		scanf("%d",&altura);

		area = (float)base * altura / 2;
		break;								//terminar la ejecuccion del switch
	case '2':
		printf("AREA DEL TRAPECIO\n");
		printf("base mayor: ");
		scanf("%d",&base);
		printf("base menor: ");
		scanf("%d",&base2);
		printf("altura: ");
		scanf("%d",&altura);

		area = ((float) (base + base2)/2) * altura;
		break;
	case '3':
		printf("AREA DEL RECTANGULO\n");
		printf("base: ");
		scanf("%d",&base);
		printf("altura: ");
		scanf("%d",&altura);
		area = base * altura;

		break;
	default:
		printf("LA SELECCION NO ES VALIDA!!!!\n");
	}
/*******************************************************/
	if(area>0)
		printf("AREA-> %.2f\n",area);


	system("PAUSE");
	return EXIT_SUCCESS;
}
