/*
 * File:   main.c
 * Author: Lenovo
 *
 * Created on 29 de marzo de 2022, 05:40 PM
 */

// CONFIG
#pragma config FOSC = XT        // Oscillator Selection bits (XT oscillator)
#pragma config WDTE = OFF       // Watchdog Timer Enable bit (WDT disabled)
#pragma config PWRTE = OFF      // Power-up Timer Enable bit (PWRT disabled)
#pragma config BOREN = ON       // Brown-out Reset Enable bit (BOR enabled)
#pragma config LVP = ON         // Low-Voltage (Single-Supply) In-Circuit Serial Programming Enable bit (RB3/PGM pin has PGM function; low-voltage programming enabled)
#pragma config CPD = OFF        // Data EEPROM Memory Code Protection bit (Data EEPROM code protection off)
#pragma config WRT = OFF        // Flash Program Memory Write Enable bits (Write protection off; all program memory may be written to by EECON control)
#pragma config CP = OFF         // Flash Program Memory Code Protection bit (Code protection off)

// #pragma config statements should precede project file includes.
// Use project enums instead of #define for ON and OFF.


#include <xc.h>

void main(void) {
    //  RB5 -> SALIDA DIGITAL
    TRISB &=~ (1U<<5);
    PORTB |= 1U<<5;
    PORTBbits.RB5 = 1;
    //RA1 -> entrada digital
    TRISA |= 1U<<1;
    ADCON1bits.PCFG = 0x7U;         //TODOS LOS CANALES ANOLOGICOS SE DESHABILITAN
    while(1){
        if(PORTA & 1U<<1){
            PORTB |= 1U<<5;
        }
        else{
            PORTB &=~  (1U<<5);
        }
    }
}
