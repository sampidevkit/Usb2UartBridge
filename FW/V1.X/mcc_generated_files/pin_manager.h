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

#define INPUT                       1
#define OUTPUT                      0

#define HIGH                        1
#define LOW                         0

#define ANALOG                      1
#define DIGITAL                     0

#define PULL_UP_ENABLED             1
#define PULL_UP_DISABLED            0

// get/set RA0 procedures
#define RA0_SetHigh()               (LATAbits.LATA0=1)
#define RA0_SetLow()                (LATAbits.LATA0=0)
#define RA0_Toggle()                (LATAbits.LATA0=~LATAbits.LATA0)
#define RA0_GetValue()              PORTAbits.RA0
#define RA0_SetDigitalInput()       (TRISAbits.TRISA0=1)
#define RA0_SetDigitalOutput()      (TRISAbits.TRISA0=0)
#define RA0_SetPullup()             (WPUAbits.WPUA0=1)
#define RA0_ResetPullup()           (WPUAbits.WPUA0=0)
#define RA0_SetAnalogMode()         (ANSELAbits.ANSA0=1)
#define RA0_SetDigitalMode()        (ANSELAbits.ANSA0=0)

// get/set GLED aliases
#define GLED_TRIS                   TRISAbits.TRISA1
#define GLED_LAT                    LATAbits.LATA1
#define GLED_PORT                   PORTAbits.RA1
#define GLED_WPU                    WPUAbits.WPUA1
#define GLED_OD                     ODCONAbits.ODA1
#define GLED_ANS                    ANSELAbits.ANSA1
#define GLED_SetHigh()              (LATAbits.LATA1=1)
#define GLED_SetLow()               (LATAbits.LATA1=0)
#define GLED_Toggle()               (LATAbits.LATA1=~LATAbits.LATA1)
#define GLED_GetValue()             PORTAbits.RA1
#define GLED_SetDigitalInput()      (TRISAbits.TRISA1=1)
#define GLED_SetDigitalOutput()     (TRISAbits.TRISA1=0)
#define GLED_SetPullup()            (WPUAbits.WPUA1=1)
#define GLED_ResetPullup()          (WPUAbits.WPUA1=0)
#define GLED_SetPushPull()          (ODCONAbits.ODA1=0)
#define GLED_SetOpenDrain()         (ODCONAbits.ODA1=1)
#define GLED_SetAnalogMode()        (ANSELAbits.ANSA1=1)
#define GLED_SetDigitalMode()       (ANSELAbits.ANSA1=0)

// get/set RLED aliases
#define RLED_TRIS                   TRISAbits.TRISA2
#define RLED_LAT                    LATAbits.LATA2
#define RLED_PORT                   PORTAbits.RA2
#define RLED_WPU                    WPUAbits.WPUA2
#define RLED_OD                     ODCONAbits.ODA2
#define RLED_ANS                    ANSELAbits.ANSA2
#define RLED_SetHigh()              (LATAbits.LATA2=1)
#define RLED_SetLow()               (LATAbits.LATA2=0)
#define RLED_Toggle()               (LATAbits.LATA2=~LATAbits.LATA2)
#define RLED_GetValue()             PORTAbits.RA2
#define RLED_SetDigitalInput()      (TRISAbits.TRISA2=1)
#define RLED_SetDigitalOutput()     (TRISAbits.TRISA2=0)
#define RLED_SetPullup()            (WPUAbits.WPUA2=1)
#define RLED_ResetPullup()          (WPUAbits.WPUA2=0)
#define RLED_SetPushPull()          (ODCONAbits.ODA2=0)
#define RLED_SetOpenDrain()         (ODCONAbits.ODA2=1)
#define RLED_SetAnalogMode()        (ANSELAbits.ANSA2=1)
#define RLED_SetDigitalMode()       (ANSELAbits.ANSA2=0)

// get/set RA4 procedures
#define RA4_SetHigh()               (LATAbits.LATA4=1)
#define RA4_SetLow()                (LATAbits.LATA4=0)
#define RA4_Toggle()                (LATAbits.LATA4=~LATAbits.LATA4)
#define RA4_GetValue()              PORTAbits.RA4
#define RA4_SetDigitalInput()       (TRISAbits.TRISA4=1)
#define RA4_SetDigitalOutput()      (TRISAbits.TRISA4=0)
#define RA4_SetPullup()             (WPUAbits.WPUA4=1)
#define RA4_ResetPullup()           (WPUAbits.WPUA4=0)
#define RA4_SetAnalogMode()         (ANSELAbits.ANSA4=1)
#define RA4_SetDigitalMode()        (ANSELAbits.ANSA4=0)

// get/set BUTTON aliases
#define BUTTON_TRIS                 TRISAbits.TRISA5
#define BUTTON_LAT                  LATAbits.LATA5
#define BUTTON_PORT                 PORTAbits.RA5
#define BUTTON_WPU                  WPUAbits.WPUA5
#define BUTTON_OD                   ODCONAbits.ODA5
#define BUTTON_SetHigh()            (LATAbits.LATA5=1)
#define BUTTON_SetLow()             (LATAbits.LATA5=0)
#define BUTTON_Toggle()             (LATAbits.LATA5=~LATAbits.LATA5)
#define BUTTON_GetValue()           PORTAbits.RA5
#define BUTTON_SetDigitalInput()    (TRISAbits.TRISA5=1)
#define BUTTON_SetDigitalOutput()   (TRISAbits.TRISA5=0)
#define BUTTON_SetPullup()          (WPUAbits.WPUA5=1)
#define BUTTON_ResetPullup()        (WPUAbits.WPUA5=0)
#define BUTTON_SetPushPull()        (ODCONAbits.ODA5=0)
#define BUTTON_SetOpenDrain()       (ODCONAbits.ODA5=1)

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