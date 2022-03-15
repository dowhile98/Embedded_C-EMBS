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
	int numTerminos;
	int terminos = 0;

	printf("SERIE DE MULTIPLOS DE 5\n");
	do{
		printf("\ningrese la cantidad de terminos(0>): ");
		scanf("%d",&numTerminos);
	}while(numTerminos<=0);

/*****************************************************/
	while(numTerminos>0){
		terminos += 5;						//num = num + 5;
		printf("%d",terminos);
		if(numTerminos != 1)
			printf(" , ");

		numTerminos--;
	}
	printf("\n");
/****************************************************/
	system("PAUSE");
	return EXIT_SUCCESS;
}
