/* 
 * File:   newmain.c
 * Author: rolni
 *
 * Created on 29 lutego 2024, 21:21
 */

#include <stdio.h>
#include <stdlib.h>
//#include <avr/io.h>

/*
 * 
 */
extern void addition(void);
extern void substraction(void);
extern void comparation1(void);
extern void comparation2(void);
extern void diode(void);
extern void blink(void);
extern void blinkIf(void);

int main(int argc, char** argv) {
    
    addition();
    substraction();
    comparation1();
    comparation2();
    //DDRA = 0x00; ; Set all A ports as an inputs
    diode();
    for(int i=0;i<3;i++){
    blink();
    }
    blinkIf();
    while(1);
    
    return (EXIT_SUCCESS);
}

