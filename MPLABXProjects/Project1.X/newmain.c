/* 
 * File:   newmain.c
 * Author: rolni
 *
 * Created on 29 lutego 2024, 21:21
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
extern void addition(void);
extern void substraction(void);
extern void comparation1(void);
extern void comparation2(void);
extern void io_test(void);

int main(int argc, char** argv) {
    
    addition();
    substraction();
    comparation1();
    comparation2();
    io_test();
    while(1);
    
    return (EXIT_SUCCESS);
}

