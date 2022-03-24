/*
 * ejemplo.h
 *
 *  Created on: 24 mar. 2022
 *      Author: Lenovo
 */


#ifndef EJEMPLO_H_		//if not defined
#define EJEMPLO_H_

/*INCLUDES*/
#include <stdio.h>

/**
 * define, ifndef, ifdef, warning, error, if, elif, else, #, ##
 */
#define NUM1		10

#ifdef 	NUM1			/*verifica si anteriormente está definido*/
#undef 	NUM1			/*elimina la definicion*/
#define NUM1		12	/*define un nuevo valor*/
#endif

#ifndef NUM1
//#warning "no esta definido la constante"
#error "no esta definido la constante"
#endif

#if NUM1<10

#elif NUM1 == 10

#else

#endif


#endif /* EJEMPLO_H_ */
