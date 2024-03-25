/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.8
        Device            :  PIC18F45K20
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.36 and above
        MPLAB 	          :  MPLAB X 6.00	
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set LED0 aliases
#define LED0_TRIS                 TRISDbits.TRISD0
#define LED0_LAT                  LATDbits.LATD0
#define LED0_PORT                 PORTDbits.RD0
#define LED0_SetHigh()            do { LATDbits.LATD0 = 1; } while(0)
#define LED0_SetLow()             do { LATDbits.LATD0 = 0; } while(0)
#define LED0_Toggle()             do { LATDbits.LATD0 = ~LATDbits.LATD0; } while(0)
#define LED0_GetValue()           PORTDbits.RD0
#define LED0_SetDigitalInput()    do { TRISDbits.TRISD0 = 1; } while(0)
#define LED0_SetDigitalOutput()   do { TRISDbits.TRISD0 = 0; } while(0)

// get/set LED1 aliases
#define LED1_TRIS                 TRISDbits.TRISD1
#define LED1_LAT                  LATDbits.LATD1
#define LED1_PORT                 PORTDbits.RD1
#define LED1_SetHigh()            do { LATDbits.LATD1 = 1; } while(0)
#define LED1_SetLow()             do { LATDbits.LATD1 = 0; } while(0)
#define LED1_Toggle()             do { LATDbits.LATD1 = ~LATDbits.LATD1; } while(0)
#define LED1_GetValue()           PORTDbits.RD1
#define LED1_SetDigitalInput()    do { TRISDbits.TRISD1 = 1; } while(0)
#define LED1_SetDigitalOutput()   do { TRISDbits.TRISD1 = 0; } while(0)

// get/set LED2 aliases
#define LED2_TRIS                 TRISDbits.TRISD2
#define LED2_LAT                  LATDbits.LATD2
#define LED2_PORT                 PORTDbits.RD2
#define LED2_SetHigh()            do { LATDbits.LATD2 = 1; } while(0)
#define LED2_SetLow()             do { LATDbits.LATD2 = 0; } while(0)
#define LED2_Toggle()             do { LATDbits.LATD2 = ~LATDbits.LATD2; } while(0)
#define LED2_GetValue()           PORTDbits.RD2
#define LED2_SetDigitalInput()    do { TRISDbits.TRISD2 = 1; } while(0)
#define LED2_SetDigitalOutput()   do { TRISDbits.TRISD2 = 0; } while(0)

// get/set LED3 aliases
#define LED3_TRIS                 TRISDbits.TRISD3
#define LED3_LAT                  LATDbits.LATD3
#define LED3_PORT                 PORTDbits.RD3
#define LED3_SetHigh()            do { LATDbits.LATD3 = 1; } while(0)
#define LED3_SetLow()             do { LATDbits.LATD3 = 0; } while(0)
#define LED3_Toggle()             do { LATDbits.LATD3 = ~LATDbits.LATD3; } while(0)
#define LED3_GetValue()           PORTDbits.RD3
#define LED3_SetDigitalInput()    do { TRISDbits.TRISD3 = 1; } while(0)
#define LED3_SetDigitalOutput()   do { TRISDbits.TRISD3 = 0; } while(0)

// get/set LED4 aliases
#define LED4_TRIS                 TRISDbits.TRISD4
#define LED4_LAT                  LATDbits.LATD4
#define LED4_PORT                 PORTDbits.RD4
#define LED4_SetHigh()            do { LATDbits.LATD4 = 1; } while(0)
#define LED4_SetLow()             do { LATDbits.LATD4 = 0; } while(0)
#define LED4_Toggle()             do { LATDbits.LATD4 = ~LATDbits.LATD4; } while(0)
#define LED4_GetValue()           PORTDbits.RD4
#define LED4_SetDigitalInput()    do { TRISDbits.TRISD4 = 1; } while(0)
#define LED4_SetDigitalOutput()   do { TRISDbits.TRISD4 = 0; } while(0)

// get/set LED5 aliases
#define LED5_TRIS                 TRISDbits.TRISD5
#define LED5_LAT                  LATDbits.LATD5
#define LED5_PORT                 PORTDbits.RD5
#define LED5_SetHigh()            do { LATDbits.LATD5 = 1; } while(0)
#define LED5_SetLow()             do { LATDbits.LATD5 = 0; } while(0)
#define LED5_Toggle()             do { LATDbits.LATD5 = ~LATDbits.LATD5; } while(0)
#define LED5_GetValue()           PORTDbits.RD5
#define LED5_SetDigitalInput()    do { TRISDbits.TRISD5 = 1; } while(0)
#define LED5_SetDigitalOutput()   do { TRISDbits.TRISD5 = 0; } while(0)

// get/set LED6 aliases
#define LED6_TRIS                 TRISDbits.TRISD6
#define LED6_LAT                  LATDbits.LATD6
#define LED6_PORT                 PORTDbits.RD6
#define LED6_SetHigh()            do { LATDbits.LATD6 = 1; } while(0)
#define LED6_SetLow()             do { LATDbits.LATD6 = 0; } while(0)
#define LED6_Toggle()             do { LATDbits.LATD6 = ~LATDbits.LATD6; } while(0)
#define LED6_GetValue()           PORTDbits.RD6
#define LED6_SetDigitalInput()    do { TRISDbits.TRISD6 = 1; } while(0)
#define LED6_SetDigitalOutput()   do { TRISDbits.TRISD6 = 0; } while(0)

// get/set LED7 aliases
#define LED7_TRIS                 TRISDbits.TRISD7
#define LED7_LAT                  LATDbits.LATD7
#define LED7_PORT                 PORTDbits.RD7
#define LED7_SetHigh()            do { LATDbits.LATD7 = 1; } while(0)
#define LED7_SetLow()             do { LATDbits.LATD7 = 0; } while(0)
#define LED7_Toggle()             do { LATDbits.LATD7 = ~LATDbits.LATD7; } while(0)
#define LED7_GetValue()           PORTDbits.RD7
#define LED7_SetDigitalInput()    do { TRISDbits.TRISD7 = 1; } while(0)
#define LED7_SetDigitalOutput()   do { TRISDbits.TRISD7 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/