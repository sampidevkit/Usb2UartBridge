#ifndef LIBCOMP_H
#define	LIBCOMP_H

#include "mcc.h"
#include "LibDef.h"
#include "TickTimer.h"

// Global interrupt
#define Disable_Global_Interrupt()      INTERRUPT_GlobalInterruptDisable()
#define Enable_Global_Interrupt()       INTERRUPT_GlobalInterruptEnable()
// Peripheral interrupt
#define Disable_Peripheral_Interrupt()  INTERRUPT_PeripheralInterruptDisable()
#define Enable_Peripheral_Interrupt()   INTERRUPT_PeripheralInterruptEnable()
// Core timer interrupt
#define Disable_Coretimer_Interrupt()   (PIE1bits.TMR1IE=0)
#define Enable_Coretimer_Interrupt()    (PIE1bits.TMR1IE=1)
#define Clear_Coretimer_Interrupt()     (PIR1bits.TMR1IF=0)
// UART 
#define EUSART_Deinitialize()           (RCSTAbits.SPEN=0)
// Get/set VDET aliases
#define VDET_TRIS                       TRISAbits.TRISA4
#define VDET_LAT                        LATAbits.LATA4
#define VDET_PORT                       PORTAbits.RA4
#define VDET_WPU                        WPUAbits.WPUA4
#define VDET_OD                         ODCONAbits.ODA4
#define VDET_ANS                        ANSELAbits.ANSA4
#define VDET_SetHigh()                  (LATAbits.LATA4=1)
#define VDET_SetLow()                   (LATAbits.LATA4=0)
#define VDET_Toggle()                   (LATAbits.LATA4=~LATAbits.LATA4)
#define VDET_GetValue()                 PORTAbits.RA4
#define VDET_SetDigitalInput()          (TRISAbits.TRISA4=1)
#define VDET_SetDigitalOutput()         (TRISAbits.TRISA4=0)
#define VDET_SetPullup()                (WPUAbits.WPUA4=1)
#define VDET_ResetPullup()              (WPUAbits.WPUA4=0)
#define VDET_SetPushPull()              (ODCONAbits.ODA4=0)
#define VDET_SetOpenDrain()             (ODCONAbits.ODA4=1)
#define VDET_SetAnalogMode()            (ANSELAbits.ANSA4=1)
#define VDET_SetDigitalMode()           (ANSELAbits.ANSA4=0)

void DbWriteStr(const char *pd);
void DbBcd2Hex(uint8_t i);
void DbLong2Hex(int32_t v);

#define __debug(msg, val) //do{DbWriteStr(msg), DbLong2Hex(val);}while(0)
#endif