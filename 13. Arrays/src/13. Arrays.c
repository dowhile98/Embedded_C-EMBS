/*
 ============================================================================
 Name        : .c
 Author      : Quino B. Jeffry
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

/*Escriba un programa que lea los valores de todos los elementos de dos vectores de
enteros introducidos por el usuario, copie esos dos vectores en un tercero (uno a
continuación del otro) y muestre sus valores por pantalla. Los tamaños de los dos
vectores deben declararse como constantes.*/
#include <stdio.h>
#include <stdlib.h>

/*****************************/
#define LENGTH(ARRAY)   (sizeof(ARRAY)/sizeof(*(ARRAY)))

#define LEN1		2
#define LEN2		3
#define LEN3 		(LEN1 + LEN2)
/*<tipo> <nombre><dimenciones>*/

int array1[LEN1];
int array2[LEN2];
int array3[LEN3];


/**
 * @brief funcion que nos permite leer vectores
 */
void InputArray(int ptr[],int len);
/**
 * @brief copia de vectores a un tercer vector
 */
void ArrayCopy(int *dest,int *scr1,int *scr2, int len1,int len2);

/**
 * @brief resultado
 */
void ShowRes(int *ptr, int len);

int main(void) {
	printf("INGRESE LOS VALORES DEL ARRAY1\n");
	InputArray(array1, LENGTH(array1));
	printf("INGRESE LOS VALORES DEL ARRAY2\n");
	InputArray(array2, LENGTH(array2));
/*****************************************************/
	ArrayCopy(array3, array1, array2, LEN1, LEN2);
/*****************************************************/
	ShowRes(array3, LENGTH(array3));


	system("PAUSE");
	return EXIT_SUCCESS;
}

/**
 * @brief funcion que nos permite leer vectores
 */
void InputArray(int ptr[],int len){
	for(int i = 0;i<len;i++){
		printf("elemento->[%d]: ",i);
		scanf("%d",&ptr[i]);
	}
}

/**
 * @brief copia de vectores a un tercer vector
 */
void ArrayCopy(int *dest,int *scr1,int *scr2, int len1,int len2){
	for(int i = 0;i<len1;i++)
		dest[i] = scr1[i];		//copia del primer array
	/////////////////////////////
	for(int i = len1;i<(len1 + len2);i++)
		dest[i] = scr2[i-len1];		//copia el segundo array
}

/**
 * @brief resultado
 */
void ShowRes(int *ptr, int len){
	for(int i = 0;i<len;i++)
		printf("elemento[%d]:%d\n ",i,*(ptr++));

	return;
}
