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
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.6
        Device            :  PIC12F1572
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.30 and above
        MPLAB 	          :  MPLAB X 5.40	
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

// get/set RA0 procedures
#define RA0_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define RA0_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define RA0_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define RA0_GetValue()              PORTAbits.RA0
#define RA0_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define RA0_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define RA0_SetPullup()             do { WPUAbits.WPUA0 = 1; } while(0)
#define RA0_ResetPullup()           do { WPUAbits.WPUA0 = 0; } while(0)
#define RA0_SetAnalogMode()         do { ANSELAbits.ANSA0 = 1; } while(0)
#define RA0_SetDigitalMode()        do { ANSELAbits.ANSA0 = 0; } while(0)

// get/set BUTTON aliases
#define BUTTON_TRIS                 TRISAbits.TRISA1
#define BUTTON_LAT                  LATAbits.LATA1
#define BUTTON_PORT                 PORTAbits.RA1
#define BUTTON_WPU                  WPUAbits.WPUA1
#define BUTTON_OD                   ODCONAbits.ODA1
#define BUTTON_ANS                  ANSELAbits.ANSA1
#define BUTTON_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define BUTTON_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define BUTTON_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define BUTTON_GetValue()           PORTAbits.RA1
#define BUTTON_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define BUTTON_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define BUTTON_SetPullup()          do { WPUAbits.WPUA1 = 1; } while(0)
#define BUTTON_ResetPullup()        do { WPUAbits.WPUA1 = 0; } while(0)
#define BUTTON_SetPushPull()        do { ODCONAbits.ODA1 = 0; } while(0)
#define BUTTON_SetOpenDrain()       do { ODCONAbits.ODA1 = 1; } while(0)
#define BUTTON_SetAnalogMode()      do { ANSELAbits.ANSA1 = 1; } while(0)
#define BUTTON_SetDigitalMode()     do { ANSELAbits.ANSA1 = 0; } while(0)

// get/set LED_CLK aliases
#define LED_CLK_TRIS                 TRISAbits.TRISA2
#define LED_CLK_LAT                  LATAbits.LATA2
#define LED_CLK_PORT                 PORTAbits.RA2
#define LED_CLK_WPU                  WPUAbits.WPUA2
#define LED_CLK_OD                   ODCONAbits.ODA2
#define LED_CLK_ANS                  ANSELAbits.ANSA2
#define LED_CLK_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define LED_CLK_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define LED_CLK_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define LED_CLK_GetValue()           PORTAbits.RA2
#define LED_CLK_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define LED_CLK_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define LED_CLK_SetPullup()          do { WPUAbits.WPUA2 = 1; } while(0)
#define LED_CLK_ResetPullup()        do { WPUAbits.WPUA2 = 0; } while(0)
#define LED_CLK_SetPushPull()        do { ODCONAbits.ODA2 = 0; } while(0)
#define LED_CLK_SetOpenDrain()       do { ODCONAbits.ODA2 = 1; } while(0)
#define LED_CLK_SetAnalogMode()      do { ANSELAbits.ANSA2 = 1; } while(0)
#define LED_CLK_SetDigitalMode()     do { ANSELAbits.ANSA2 = 0; } while(0)

// get/set VDET aliases
#define VDET_TRIS                 TRISAbits.TRISA4
#define VDET_LAT                  LATAbits.LATA4
#define VDET_PORT                 PORTAbits.RA4
#define VDET_WPU                  WPUAbits.WPUA4
#define VDET_OD                   ODCONAbits.ODA4
#define VDET_ANS                  ANSELAbits.ANSA4
#define VDET_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define VDET_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define VDET_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define VDET_GetValue()           PORTAbits.RA4
#define VDET_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define VDET_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define VDET_SetPullup()          do { WPUAbits.WPUA4 = 1; } while(0)
#define VDET_ResetPullup()        do { WPUAbits.WPUA4 = 0; } while(0)
#define VDET_SetPushPull()        do { ODCONAbits.ODA4 = 0; } while(0)
#define VDET_SetOpenDrain()       do { ODCONAbits.ODA4 = 1; } while(0)
#define VDET_SetAnalogMode()      do { ANSELAbits.ANSA4 = 1; } while(0)
#define VDET_SetDigitalMode()     do { ANSELAbits.ANSA4 = 0; } while(0)

// get/set LED_SDO aliases
#define LED_SDO_TRIS                 TRISAbits.TRISA5
#define LED_SDO_LAT                  LATAbits.LATA5
#define LED_SDO_PORT                 PORTAbits.RA5
#define LED_SDO_WPU                  WPUAbits.WPUA5
#define LED_SDO_OD                   ODCONAbits.ODA5
#define LED_SDO_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define LED_SDO_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define LED_SDO_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define LED_SDO_GetValue()           PORTAbits.RA5
#define LED_SDO_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define LED_SDO_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define LED_SDO_SetPullup()          do { WPUAbits.WPUA5 = 1; } while(0)
#define LED_SDO_ResetPullup()        do { WPUAbits.WPUA5 = 0; } while(0)
#define LED_SDO_SetPushPull()        do { ODCONAbits.ODA5 = 0; } while(0)
#define LED_SDO_SetOpenDrain()       do { ODCONAbits.ODA5 = 1; } while(0)

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