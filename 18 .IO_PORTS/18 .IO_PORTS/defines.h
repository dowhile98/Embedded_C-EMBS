/*
 * defines.h
 *
 * Created: 29/03/2022 17:11:43
 *  Author: Lenovo
 */ 


#ifndef DEFINES_H_
#define DEFINES_H_



#define BIT_SET(REG, BIT)		REG |= 1U<<BIT
#define BIT_RESET(REG, BIT)		REG &=~ (1U<<BIT)

#define PIN_OUTPUT_(a,b)		DDR ## a |= 1U<<b
#define PIN_OUTPUT(a)			PIN_OUTPUT_(a)

#define PIN_INPUT_(a,b)			DDR ## a &=~ (1U<<b)
#define PIN_INPUT(a)			PIN_INPUT_(a)

#define PIN_INPUT_PU_(a,b){		DDR ## a &=~ (1U<<b); \
								PORT ## a |= 1U<<b;}		
#define PIN_INPUT_PU(a)			PIN_INPUT_PU_(a)

#define PIN_READ_(a,b)			((PIN ## a) >> b) & 0x1
#define PIN_READ(a)				PIN_READ_(a)

#define PIN_SET_(a,b)			PORT ## a |= 1<<b
#define PIN_SET(a)				PIN_SET_(a)

#define PIN_RESET_(a,b)			PORT ## a &=~ (1<<b)
#define PIN_RESET(a)			PIN_RESET_(a)


#endif /* DEFINES_H_ */