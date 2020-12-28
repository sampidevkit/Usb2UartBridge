#include "libcomp.h"

void ADC_Init(void) // <editor-fold defaultstate="collapsed" desc="ADC Init">
{
    // ADFM right; ADPREF VDD; ADCS Frc; 
    ADCON1=0xF0;
    // TRIGSEL no_auto_trigger; 
    ADCON2=0x00;
    // ADRESL 0; 
    ADRESL=0x00;
    // ADRESH 0; 
    ADRESH=0x00;
    // GO_nDONE stop; ADON enabled; CHS AN0; 
    ADCON0=0x01;
    // select the A/D channel
    ADCON0bits.CHS=0x3;
    // Turn on the ADC module
    ADCON0bits.ADON=1;
    __delay_us(20);
} // </editor-fold>

void main(void) // <editor-fold defaultstate="collapsed" desc="Main">
{
    uint32_t preVol;
    uint32_t prvVol=0;
    uint16_t LogicTime=0;
    uint16_t ButtonTime=0;

    SYSTEM_Initialize();
    Tick_Timer_Init();
    DbWriteStr("USB To UART Bridge v");
    INTERRUPT_GlobalInterruptEnable();
    INTERRUPT_PeripheralInterruptEnable();

    while(1)
    {
        CLRWDT();

        if(BUTTON_GetValue()==0)
        {
            if(ButtonTime==0)
                ButtonTime=Tick_Timer_Read();
        }
        else if(ButtonTime>0)
        {
            ButtonTime=Tick_Timer_Read()-ButtonTime;
            ButtonTime/=TICK_PER_MS;

            if(ButtonTime>=2000) // Save config
            {

            }
            else if(ButtonTime>=100) // Change logic
            {

            }

            ButtonTime=0;
        }
        // Get voltage
        if(ADCON0bits.ADGO==0)
        {
            preVol=((uint16_t) ((ADRESH<<8)+ADRESL));
            // Start new conversion
            ADCON0bits.ADGO=1;
            preVol&=0b0000001111111111;
            preVol*=5000; // Vref
            preVol>>=10; // div 1024
        }
        // compare
    }
} // </editor-fold>