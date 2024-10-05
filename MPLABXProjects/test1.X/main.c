/**
  Generated main.c file from MPLAB Code Configurator

  @Company
    Microchip Technology Inc.

  @File Name
    main.c

  @Summary
    This is the generated main.c using PIC24 / dsPIC33 / PIC32MM MCUs.

  @Description
    This source file provides main entry point for system initialization and application code development.
    Generation Information :
        Product Revision  :  PIC24 / dsPIC33 / PIC32MM MCUs - 1.171.4
        Device            :  PIC24FJ128GA705
    The generated drivers are tested against the following:
        Compiler          :  XC16 v2.10
        MPLAB 	          :  MPLAB X v6.05
*/

/*
    (c) 2020 Microchip Technology Inc. and its subsidiaries. You may use this
    software and any derivatives exclusively with Microchip products.

    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED
    WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A
    PARTICULAR PURPOSE, OR ITS INTERACTION WITH MICROCHIP PRODUCTS, COMBINATION
    WITH ANY OTHER PRODUCTS, OR USE IN ANY APPLICATION.

    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS
    BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE
    FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN
    ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
    THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.

    MICROCHIP PROVIDES THIS SOFTWARE CONDITIONALLY UPON YOUR ACCEPTANCE OF THESE
    TERMS.
*/

/**
  Section: Included Files
*/
#include "mcc_generated_files/system.h"
#include "mcc_generated_files/pin_manager.h"
#include "mcc_generated_files/tmr1.h"
#include "mcc_generated_files/rtc.h"
#include "mcc_generated_files/adc1.h"



//float konwertuj(uint16_t zmienna){
//    return zmienna/1023.0;
//}




unsigned int rightZero(unsigned int n) {
    // Sprawdzenie, czy n nie przekracza rozmiaru typu unsigned int w bitach
    if (n >= sizeof(unsigned int)*8) {
        return 0;
    }

    // Je?eli n jest równe 0, zwracamy liczb? z wszystkimi bitami ustawionymi na 1
    if (n == 0) {
        return ~0;
    }

    // Tworzenie liczby z n m?odszymi bitami równymi 0 i pozosta?ymi starszymi równymi 1
    // Przesuni?cie bitowe 1 o n pozycji w lewo, a nast?pnie odj?cie 1, aby uzyska? n bitów równych 0
    // Nast?pnie u?ywamy negacji, aby zamieni? 0 na 1 i na odwrót
    return ~(1 << n) + 1;
}

uint16_t odczyt = 0;
float odczyt_skal;
    
zegar_RTC zegar;
kal_RTC kal;
/*
                         Main application
 */
unsigned int var1;
int main(void)
{
    // initialize the device
    SYSTEM_Initialize();
//    TMR1_Start();
    ADC1_Initialize();
    
    redLED_SetHigh();
    yellowLED_SetHigh();    
    greenLED_SetHigh();
    blueLED_SetHigh();
    
  

    
    
    
//    blueLED_SetLow();
    while (1)
    {
        var1=rightZero(5);
        //odczyt = ADC1_GetConversion(8);
//        odczyt_skal = konwertuj(odczyt);
//        TMR1_Tasks_16BitOperation();
//        if (TMR1_GetElapsedThenClear()){
//            redLED_Toggle();
//            blueLED_Toggle();
//            
//        }
        

        
//        redLED_SetLow();
//        for(uint32_t i=0;i<500000;i++){
//            Nop();
//        }
//        redLED_SetHigh();
//        for(uint32_t i=0;i<500000;i++){
//            Nop();
//        }
        
//        if (SW0_GetValue()==1){
//        redLED_SetLow();
//        blueLED_SetHigh();
//        }else{
//        redLED_SetHigh();
//        blueLED_SetLow();
//        }
  
    }

    return 1;
}
/**
 End of File
*/

