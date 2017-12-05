#include  "mcc_generated_files/mcc.h"
#include  <xc.h>
#include  "DriverTeclado.h"
#include  "devices.h"
#include  "mcc_generated_files/pin_manager.h"

void KeyPadInit(void)
{
    ROW8_OUT_SetLow();
    ROW7_OUT_SetLow();
    ROW6_OUT_SetLow();
    ROW5_OUT_SetLow();
}


char KeyPadScan(void)
{
    char KeyPadKey = 0xFF;
    static uint8_t Push = 0;
    
    ROW5_OUT_SetLow();
    ROW6_OUT_SetHigh();
    ROW7_OUT_SetHigh();
    ROW8_OUT_SetHigh();
    
    Push = COLUMN4_IN_GetValue(); 
    if (Push==YES)
    {
        KeyPadKey = '*';
        Push = NO;
    }
    else
        {
            Push = COLUMN3_IN_GetValue();
            if (Push==YES)
            {
                KeyPadKey = '0';
                Push = NO;
            }
            else
                {
                    Push = COLUMN2_IN_GetValue();
                    if (Push==YES)
                    {
                        KeyPadKey = '#';
                        Push = NO;
                    }
                    else
                        {
                            Push = COLUMN1_IN_GetValue();
                            if (Push==YES)
                            {
                                KeyPadKey = 'D';
                                Push = NO;
                            }
                        }
                }
        }
    
    Delay(5);
    
    ROW5_OUT_SetHigh();
    ROW6_OUT_SetLow();
    
    Push = COLUMN4_IN_GetValue();
    if (Push==YES)
    {
        KeyPadKey = '7';
        Push = NO;
    }
    else
        {
            Push = COLUMN3_IN_GetValue();
            if (Push==YES)
            {
                KeyPadKey = '8';
                Push = NO;
            }
            else
                {
                    Push = COLUMN2_IN_GetValue();
                    if (Push==YES)
                    {
                        KeyPadKey = '9';
                        Push = NO;
                    }
                    else
                        {
                            Push = COLUMN1_IN_GetValue();
                            if (Push==YES)
                            {
                                KeyPadKey = 'C';
                                Push = NO;
                            }
                        }
                }
        }
       
    Delay(5);
    
    ROW6_OUT_SetHigh();
    ROW7_OUT_SetLow();
    
    Push = COLUMN4_IN_GetValue();
    if (Push==YES)
    {
        KeyPadKey = '4';
        Push = NO;
    }
    else
        {
            Push = COLUMN3_IN_GetValue();
            if (Push==YES)
            {
                KeyPadKey = '5';
                Push = NO;
            }
            else
                {
                    Push = COLUMN2_IN_GetValue();
                    if (Push==YES)
                    {
                        KeyPadKey = '6';
                        Push = NO;
                    }
                    else
                        {
                            Push = COLUMN1_IN_GetValue();
                            if (Push==YES)
                            {
                                KeyPadKey = 'B';
                                Push = NO;
                            }
                        }
                }
        }
    
    Delay(5);
    
    ROW7_OUT_SetHigh();
    ROW8_OUT_SetLow();
    
    Push = COLUMN4_IN_GetValue();
    if (Push==YES)
    {
        KeyPadKey = '1';
        Push = NO;
    }
    else
        {
            Push = COLUMN3_IN_GetValue();
            if (Push==YES)
            {
                KeyPadKey = '2';
                Push = NO;
            }
            else
            {
                Push = COLUMN2_IN_GetValue();
                if (Push==YES)
                {
                    KeyPadKey = '3';
                    Push = NO;
                }
                else
                    {
                        Push = COLUMN1_IN_GetValue();
                        if (Push==YES)
                        {
                            KeyPadKey = 'A';
                            Push = NO;
                        }
                    }
            }
        }
    
    Delay(5);
    
    ROW8_OUT_SetLow();
    ROW7_OUT_SetLow();
    ROW6_OUT_SetLow();
    ROW5_OUT_SetLow();
    
    return(KeyPadKey);
}

int KeyPressed=NO;

int KeyPadAcquire(void)
{
    char KeyAcquire = 0xFF;
    while (KeyPressed==NO)
    {
        KeyAcquire = KeyPadScan();
        if (KeyAcquire!=0xFF)KeyPressed=YES;
        Delay(150);
    }
    KeyPressed=NO;
    return(KeyAcquire);
}
