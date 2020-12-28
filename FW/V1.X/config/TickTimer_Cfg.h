#ifndef TICKTIMER_CFG_H
#define TICKTIMER_CFG_H

#define TICK_PER_SEC                        3875 // Clock source of timer 1
#define TICK_PER_MS                         4
#define USE_SOFT_TMR                        1
#define Tick_Timer_Read()                   TMR1_ReadTimer()
#define Tick_Timer_Set_SwTmr_Isr(Tmr_Isr)   TMR1_SetInterruptHandler(Tmr_Isr)

#endif