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
extern void add_asm(void);

int main(int argc, char** argv) {
    
    add_asm();
    while(1);
    
    return (EXIT_SUCCESS);
}

