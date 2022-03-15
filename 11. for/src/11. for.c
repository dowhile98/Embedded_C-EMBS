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
#include <stdint.h>



int main(void) {
	int numero;
	int mayor ;
	int menor ;
	float media;
	int suma = 0;

	for(int i = 0; i<10;i++){
		do{
			printf("ingrese numero %d (0>):",i+1);
			scanf("%d",&numero);
		}while(numero<= 0);							//validación
/***************************************************/
		if(i == 0){
			mayor = numero;
			menor = numero;
		}
/***************************************************/
		//suma
		suma += numero;
		//mayor
		if(numero>mayor)
			mayor = numero;
		//menor
		if(numero<menor)
			menor = numero;
	}
/**************************************************/
	media = (float)suma / 10.0;
	printf("suma->%d\n",suma);
	printf("media->%.2f\n",media);
	printf("numero mayor->%d\n",mayor);
	printf("numero menor->%d\n",menor);

	system("PAUSE");
	return EXIT_SUCCESS;
}
