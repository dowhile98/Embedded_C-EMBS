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
#include <stdlib.h>

#define LENGTH(ARRAY)   (sizeof(ARRAY)/sizeof(*(ARRAY)))


char str[] = "ESTO\n" ;

char strNum[4];

int num;
int len;


int main(void) {

	strcpy(strNum,"123");

	printf("tama%co->%d\n",164,LENGTH(str));
	printf("tamaño->%d\n",strlen(str));
/***************************************************/
	strNum[3] = '\0';
	num = atoi(strNum);					//conversion de cadena a entero
	//atof
	printf("numero convertido->%d\n",num);
	system("PAUSE");
	return EXIT_SUCCESS;
}
