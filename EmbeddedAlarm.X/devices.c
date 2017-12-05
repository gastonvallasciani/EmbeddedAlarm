#include "mcc_generated_files/mcc.h"
#include "mcc_generated_files/tmr4.h"
#include  "mcc_generated_files/pin_manager.h"

int TMR4_Ticked = 0;

void Delay(uint16_t DelayCount)
{
    TMR4_Ticked=0;
    while(DelayCount>0)
    {
        if (TMR4_Ticked==1)
        {
             //IO_RD0_SetLow();
            DelayCount=DelayCount-1;
            TMR4_Ticked=0;
        }
    }
    
}

void TMR4_Interrupt(void)
{
    TMR4_Ticked = 1;
}