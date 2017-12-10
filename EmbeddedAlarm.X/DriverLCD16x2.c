#include  "mcc_generated_files/mcc.h"
#include  "devices.h"
#include "DriverLCD16x2.h"

#define lcd                   PORTB
#define DB7_PORT              PORTBbits.RB0
#define DB6_PORT              PORTBbits.RB1
#define DB5_PORT              PORTBbits.RB2
#define DB4_PORT              PORTBbits.RB3
#define LEDA_PORT             PORTBbits.RB4
#define RW_PORT               PORTBbits.RB5
#define RS_PORT               PORTBbits.RB6
#define Enable_PORT           PORTBbits.RB7

void lcd_lat()
{
    //---Latching function high to low
    Enable_PORT = 1;    //----Enable Pin is high
    Delay(1);  //----1ms delay
    Enable_PORT = 0;    //----Enable Pin is Low
}

void lcd_cmd(unsigned char x)
{
    RS_PORT = 0;            //----Register Selected is Command register
    lcd &= 0xF0;            //----Masking Higher 4-bit of PORTB
    lcd |= ((x & 0xF0)>>4); //----Masking Lower 4-bit of Command
    lcd_lat();         //----Latching it to lcd
 
    lcd &= 0xF0;       //----Masking Higher 4-bit of PORTD
    lcd |= ((x & 0x0F)); //----Masking Higher 4-bit of Command
    lcd_lat();         //----Latching it to lcd
}

void lcd_cmd_hf(unsigned char x)
{
    RS_PORT = 0;            //----Register Selected is Command register
    lcd &= 0xF0;            //----Masking Lower 4-bit of PORTB
    lcd |= ((x & 0xF0)>>4); //----Masking Lower 4-bit of Command
    lcd_lat();         //----Latching it to lcd
}

void lcd_dwr(unsigned char x)
{
    RS_PORT = 1;        // Resgister Select pin is set to Data Register
    lcd &= 0xF0;
    lcd |= ((x & 0xF0)>>4); //----Masking Lower 4-bit of Command
    lcd_lat();         //----Latching it to lcd
    
    lcd &= 0xF0;       //----Masking Higher 4-bit of PORTD
    lcd |= ((x & 0x0F)); //----Masking Higher 4-bit of Command
    lcd_lat();         //----Latching it to lcd
    
}

void lcd_msg(unsigned char *c)
{
    while (*c != 0)
    {
        lcd_dwr(*c++);
    }
}

void lcd_init(void)
{
    RW_PORT = 0;
    LEDA_PORT = 1;
    lcd_cmd_hf(0x30);
    Delay(10);
    lcd_cmd_hf(0x20);
    Delay(1);
    lcd_cmd(0x28);  // Command to select 4 bit operation 
    Delay(1);
    lcd_cmd(0x0E);  // Cursor Blinking 
    Delay(1);
    lcd_cmd(0x01); // Clear Display 
    Delay(1);
    lcd_cmd(0x06); // Auto increment LCD 
    Delay(1);
    lcd_cmd(0x80);   //Location address 
    Delay(1);
}

void DisplayClear(void)
{
    lcd_cmd(ClearDisplay);
    Delay(1);
}

void HomeReturn(void)
{
    lcd_cmd(ReturnHome);
    Delay(1);
}

void DisplayONCursorONToggleON(void)
{
    lcd_cmd(DisplayCursorToggleON);
    Delay(1);
}

void DisplayONCursorOFFToggleOFF(void)
{
    lcd_cmd(DisplayONCursorToggleOFF);
    Delay(1);
}

void DisplayOFF(void)
{
    lcd_cmd(DisplayControlOFF);
    Delay(1);
}

void CursorGOTOxy(int x,int y)
{   
    int i;
    if (y==1)
    {
        lcd_cmd(FirstLineAddress);
        Delay(1);
    }
    else if(y==2)
         {
            lcd_cmd(SecondLineAddress);
            Delay(1);
         }
    for (i=0;i<x-1;i++)
    {
        lcd_cmd(CursorShiftRight);
        Delay(1);
    }
    
}

