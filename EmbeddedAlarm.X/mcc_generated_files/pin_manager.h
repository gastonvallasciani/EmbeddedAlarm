/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using MPLAB(c) Code Configurator

  @Description:
    This header file provides implementations for pin APIs for all pins selected in the GUI.
    Generation Information :
        Product Revision  :  MPLAB(c) Code Configurator - 4.15
        Device            :  PIC18F46K22
        Version           :  1.01
    The generated drivers are tested against the following:
        Compiler          :  XC8 1.35
        MPLAB             :  MPLAB X 3.40

    Copyright (c) 2013 - 2015 released Microchip Technology Inc.  All rights reserved.

    Microchip licenses to you the right to use, modify, copy and distribute
    Software only when embedded on a Microchip microcontroller or digital signal
    controller that is integrated into your product or third party product
    (pursuant to the sublicense terms in the accompanying license agreement).

    You should refer to the license agreement accompanying this Software for
    additional information regarding your rights and obligations.

    SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND,
    EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF
    MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE.
    IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER
    CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR
    OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
    INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE OR
    CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT OF
    SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
    (INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.

*/


#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set ROW8_OUT aliases
#define ROW8_OUT_TRIS               TRISAbits.TRISA0
#define ROW8_OUT_LAT                LATAbits.LATA0
#define ROW8_OUT_PORT               PORTAbits.RA0
#define ROW8_OUT_ANS                ANSELAbits.ANSA0
#define ROW8_OUT_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define ROW8_OUT_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define ROW8_OUT_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define ROW8_OUT_GetValue()           PORTAbits.RA0
#define ROW8_OUT_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define ROW8_OUT_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define ROW8_OUT_SetAnalogMode()  do { ANSELAbits.ANSA0 = 1; } while(0)
#define ROW8_OUT_SetDigitalMode() do { ANSELAbits.ANSA0 = 0; } while(0)

// get/set ROW7_OUT aliases
#define ROW7_OUT_TRIS               TRISAbits.TRISA1
#define ROW7_OUT_LAT                LATAbits.LATA1
#define ROW7_OUT_PORT               PORTAbits.RA1
#define ROW7_OUT_ANS                ANSELAbits.ANSA1
#define ROW7_OUT_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define ROW7_OUT_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define ROW7_OUT_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define ROW7_OUT_GetValue()           PORTAbits.RA1
#define ROW7_OUT_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define ROW7_OUT_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define ROW7_OUT_SetAnalogMode()  do { ANSELAbits.ANSA1 = 1; } while(0)
#define ROW7_OUT_SetDigitalMode() do { ANSELAbits.ANSA1 = 0; } while(0)

// get/set ROW6_OUT aliases
#define ROW6_OUT_TRIS               TRISAbits.TRISA2
#define ROW6_OUT_LAT                LATAbits.LATA2
#define ROW6_OUT_PORT               PORTAbits.RA2
#define ROW6_OUT_ANS                ANSELAbits.ANSA2
#define ROW6_OUT_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define ROW6_OUT_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define ROW6_OUT_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define ROW6_OUT_GetValue()           PORTAbits.RA2
#define ROW6_OUT_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define ROW6_OUT_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define ROW6_OUT_SetAnalogMode()  do { ANSELAbits.ANSA2 = 1; } while(0)
#define ROW6_OUT_SetDigitalMode() do { ANSELAbits.ANSA2 = 0; } while(0)

// get/set ROW5_OUT aliases
#define ROW5_OUT_TRIS               TRISAbits.TRISA3
#define ROW5_OUT_LAT                LATAbits.LATA3
#define ROW5_OUT_PORT               PORTAbits.RA3
#define ROW5_OUT_ANS                ANSELAbits.ANSA3
#define ROW5_OUT_SetHigh()            do { LATAbits.LATA3 = 1; } while(0)
#define ROW5_OUT_SetLow()             do { LATAbits.LATA3 = 0; } while(0)
#define ROW5_OUT_Toggle()             do { LATAbits.LATA3 = ~LATAbits.LATA3; } while(0)
#define ROW5_OUT_GetValue()           PORTAbits.RA3
#define ROW5_OUT_SetDigitalInput()    do { TRISAbits.TRISA3 = 1; } while(0)
#define ROW5_OUT_SetDigitalOutput()   do { TRISAbits.TRISA3 = 0; } while(0)
#define ROW5_OUT_SetAnalogMode()  do { ANSELAbits.ANSA3 = 1; } while(0)
#define ROW5_OUT_SetDigitalMode() do { ANSELAbits.ANSA3 = 0; } while(0)

// get/set COLUMN4_IN aliases
#define COLUMN4_IN_TRIS               TRISAbits.TRISA4
#define COLUMN4_IN_LAT                LATAbits.LATA4
#define COLUMN4_IN_PORT               PORTAbits.RA4
#define COLUMN4_IN_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define COLUMN4_IN_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define COLUMN4_IN_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define COLUMN4_IN_GetValue()           PORTAbits.RA4
#define COLUMN4_IN_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define COLUMN4_IN_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)

// get/set COLUMN3_IN aliases
#define COLUMN3_IN_TRIS               TRISAbits.TRISA5
#define COLUMN3_IN_LAT                LATAbits.LATA5
#define COLUMN3_IN_PORT               PORTAbits.RA5
#define COLUMN3_IN_ANS                ANSELAbits.ANSA5
#define COLUMN3_IN_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define COLUMN3_IN_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define COLUMN3_IN_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define COLUMN3_IN_GetValue()           PORTAbits.RA5
#define COLUMN3_IN_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define COLUMN3_IN_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define COLUMN3_IN_SetAnalogMode()  do { ANSELAbits.ANSA5 = 1; } while(0)
#define COLUMN3_IN_SetDigitalMode() do { ANSELAbits.ANSA5 = 0; } while(0)

// get/set COLUMN2_IN aliases
#define COLUMN2_IN_TRIS               TRISAbits.TRISA6
#define COLUMN2_IN_LAT                LATAbits.LATA6
#define COLUMN2_IN_PORT               PORTAbits.RA6
#define COLUMN2_IN_SetHigh()            do { LATAbits.LATA6 = 1; } while(0)
#define COLUMN2_IN_SetLow()             do { LATAbits.LATA6 = 0; } while(0)
#define COLUMN2_IN_Toggle()             do { LATAbits.LATA6 = ~LATAbits.LATA6; } while(0)
#define COLUMN2_IN_GetValue()           PORTAbits.RA6
#define COLUMN2_IN_SetDigitalInput()    do { TRISAbits.TRISA6 = 1; } while(0)
#define COLUMN2_IN_SetDigitalOutput()   do { TRISAbits.TRISA6 = 0; } while(0)

// get/set COLUMN1_IN aliases
#define COLUMN1_IN_TRIS               TRISAbits.TRISA7
#define COLUMN1_IN_LAT                LATAbits.LATA7
#define COLUMN1_IN_PORT               PORTAbits.RA7
#define COLUMN1_IN_SetHigh()            do { LATAbits.LATA7 = 1; } while(0)
#define COLUMN1_IN_SetLow()             do { LATAbits.LATA7 = 0; } while(0)
#define COLUMN1_IN_Toggle()             do { LATAbits.LATA7 = ~LATAbits.LATA7; } while(0)
#define COLUMN1_IN_GetValue()           PORTAbits.RA7
#define COLUMN1_IN_SetDigitalInput()    do { TRISAbits.TRISA7 = 1; } while(0)
#define COLUMN1_IN_SetDigitalOutput()   do { TRISAbits.TRISA7 = 0; } while(0)

// get/set DB7 aliases
#define DB7_TRIS               TRISBbits.TRISB0
#define DB7_LAT                LATBbits.LATB0
#define DB7_PORT               PORTBbits.RB0
#define DB7_WPU                WPUBbits.WPUB0
#define DB7_ANS                ANSELBbits.ANSB0
#define DB7_SetHigh()            do { LATBbits.LATB0 = 1; } while(0)
#define DB7_SetLow()             do { LATBbits.LATB0 = 0; } while(0)
#define DB7_Toggle()             do { LATBbits.LATB0 = ~LATBbits.LATB0; } while(0)
#define DB7_GetValue()           PORTBbits.RB0
#define DB7_SetDigitalInput()    do { TRISBbits.TRISB0 = 1; } while(0)
#define DB7_SetDigitalOutput()   do { TRISBbits.TRISB0 = 0; } while(0)
#define DB7_SetPullup()      do { WPUBbits.WPUB0 = 1; } while(0)
#define DB7_ResetPullup()    do { WPUBbits.WPUB0 = 0; } while(0)
#define DB7_SetAnalogMode()  do { ANSELBbits.ANSB0 = 1; } while(0)
#define DB7_SetDigitalMode() do { ANSELBbits.ANSB0 = 0; } while(0)

// get/set DB6 aliases
#define DB6_TRIS               TRISBbits.TRISB1
#define DB6_LAT                LATBbits.LATB1
#define DB6_PORT               PORTBbits.RB1
#define DB6_WPU                WPUBbits.WPUB1
#define DB6_ANS                ANSELBbits.ANSB1
#define DB6_SetHigh()            do { LATBbits.LATB1 = 1; } while(0)
#define DB6_SetLow()             do { LATBbits.LATB1 = 0; } while(0)
#define DB6_Toggle()             do { LATBbits.LATB1 = ~LATBbits.LATB1; } while(0)
#define DB6_GetValue()           PORTBbits.RB1
#define DB6_SetDigitalInput()    do { TRISBbits.TRISB1 = 1; } while(0)
#define DB6_SetDigitalOutput()   do { TRISBbits.TRISB1 = 0; } while(0)
#define DB6_SetPullup()      do { WPUBbits.WPUB1 = 1; } while(0)
#define DB6_ResetPullup()    do { WPUBbits.WPUB1 = 0; } while(0)
#define DB6_SetAnalogMode()  do { ANSELBbits.ANSB1 = 1; } while(0)
#define DB6_SetDigitalMode() do { ANSELBbits.ANSB1 = 0; } while(0)

// get/set DB5 aliases
#define DB5_TRIS               TRISBbits.TRISB2
#define DB5_LAT                LATBbits.LATB2
#define DB5_PORT               PORTBbits.RB2
#define DB5_WPU                WPUBbits.WPUB2
#define DB5_ANS                ANSELBbits.ANSB2
#define DB5_SetHigh()            do { LATBbits.LATB2 = 1; } while(0)
#define DB5_SetLow()             do { LATBbits.LATB2 = 0; } while(0)
#define DB5_Toggle()             do { LATBbits.LATB2 = ~LATBbits.LATB2; } while(0)
#define DB5_GetValue()           PORTBbits.RB2
#define DB5_SetDigitalInput()    do { TRISBbits.TRISB2 = 1; } while(0)
#define DB5_SetDigitalOutput()   do { TRISBbits.TRISB2 = 0; } while(0)
#define DB5_SetPullup()      do { WPUBbits.WPUB2 = 1; } while(0)
#define DB5_ResetPullup()    do { WPUBbits.WPUB2 = 0; } while(0)
#define DB5_SetAnalogMode()  do { ANSELBbits.ANSB2 = 1; } while(0)
#define DB5_SetDigitalMode() do { ANSELBbits.ANSB2 = 0; } while(0)

// get/set DB4 aliases
#define DB4_TRIS               TRISBbits.TRISB3
#define DB4_LAT                LATBbits.LATB3
#define DB4_PORT               PORTBbits.RB3
#define DB4_WPU                WPUBbits.WPUB3
#define DB4_ANS                ANSELBbits.ANSB3
#define DB4_SetHigh()            do { LATBbits.LATB3 = 1; } while(0)
#define DB4_SetLow()             do { LATBbits.LATB3 = 0; } while(0)
#define DB4_Toggle()             do { LATBbits.LATB3 = ~LATBbits.LATB3; } while(0)
#define DB4_GetValue()           PORTBbits.RB3
#define DB4_SetDigitalInput()    do { TRISBbits.TRISB3 = 1; } while(0)
#define DB4_SetDigitalOutput()   do { TRISBbits.TRISB3 = 0; } while(0)
#define DB4_SetPullup()      do { WPUBbits.WPUB3 = 1; } while(0)
#define DB4_ResetPullup()    do { WPUBbits.WPUB3 = 0; } while(0)
#define DB4_SetAnalogMode()  do { ANSELBbits.ANSB3 = 1; } while(0)
#define DB4_SetDigitalMode() do { ANSELBbits.ANSB3 = 0; } while(0)

// get/set LEDA aliases
#define LEDA_TRIS               TRISBbits.TRISB4
#define LEDA_LAT                LATBbits.LATB4
#define LEDA_PORT               PORTBbits.RB4
#define LEDA_WPU                WPUBbits.WPUB4
#define LEDA_ANS                ANSELBbits.ANSB4
#define LEDA_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define LEDA_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define LEDA_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define LEDA_GetValue()           PORTBbits.RB4
#define LEDA_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define LEDA_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define LEDA_SetPullup()      do { WPUBbits.WPUB4 = 1; } while(0)
#define LEDA_ResetPullup()    do { WPUBbits.WPUB4 = 0; } while(0)
#define LEDA_SetAnalogMode()  do { ANSELBbits.ANSB4 = 1; } while(0)
#define LEDA_SetDigitalMode() do { ANSELBbits.ANSB4 = 0; } while(0)

// get/set RW aliases
#define RW_TRIS               TRISBbits.TRISB5
#define RW_LAT                LATBbits.LATB5
#define RW_PORT               PORTBbits.RB5
#define RW_WPU                WPUBbits.WPUB5
#define RW_ANS                ANSELBbits.ANSB5
#define RW_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define RW_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define RW_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define RW_GetValue()           PORTBbits.RB5
#define RW_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define RW_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define RW_SetPullup()      do { WPUBbits.WPUB5 = 1; } while(0)
#define RW_ResetPullup()    do { WPUBbits.WPUB5 = 0; } while(0)
#define RW_SetAnalogMode()  do { ANSELBbits.ANSB5 = 1; } while(0)
#define RW_SetDigitalMode() do { ANSELBbits.ANSB5 = 0; } while(0)

// get/set RS aliases
#define RS_TRIS               TRISBbits.TRISB6
#define RS_LAT                LATBbits.LATB6
#define RS_PORT               PORTBbits.RB6
#define RS_WPU                WPUBbits.WPUB6
#define RS_SetHigh()            do { LATBbits.LATB6 = 1; } while(0)
#define RS_SetLow()             do { LATBbits.LATB6 = 0; } while(0)
#define RS_Toggle()             do { LATBbits.LATB6 = ~LATBbits.LATB6; } while(0)
#define RS_GetValue()           PORTBbits.RB6
#define RS_SetDigitalInput()    do { TRISBbits.TRISB6 = 1; } while(0)
#define RS_SetDigitalOutput()   do { TRISBbits.TRISB6 = 0; } while(0)
#define RS_SetPullup()      do { WPUBbits.WPUB6 = 1; } while(0)
#define RS_ResetPullup()    do { WPUBbits.WPUB6 = 0; } while(0)

// get/set Enable aliases
#define Enable_TRIS               TRISBbits.TRISB7
#define Enable_LAT                LATBbits.LATB7
#define Enable_PORT               PORTBbits.RB7
#define Enable_WPU                WPUBbits.WPUB7
#define Enable_SetHigh()            do { LATBbits.LATB7 = 1; } while(0)
#define Enable_SetLow()             do { LATBbits.LATB7 = 0; } while(0)
#define Enable_Toggle()             do { LATBbits.LATB7 = ~LATBbits.LATB7; } while(0)
#define Enable_GetValue()           PORTBbits.RB7
#define Enable_SetDigitalInput()    do { TRISBbits.TRISB7 = 1; } while(0)
#define Enable_SetDigitalOutput()   do { TRISBbits.TRISB7 = 0; } while(0)
#define Enable_SetPullup()      do { WPUBbits.WPUB7 = 1; } while(0)
#define Enable_ResetPullup()    do { WPUBbits.WPUB7 = 0; } while(0)

// get/set IO_RC2 aliases
#define IO_RC2_TRIS               TRISCbits.TRISC2
#define IO_RC2_LAT                LATCbits.LATC2
#define IO_RC2_PORT               PORTCbits.RC2
#define IO_RC2_ANS                ANSELCbits.ANSC2
#define IO_RC2_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define IO_RC2_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define IO_RC2_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define IO_RC2_GetValue()           PORTCbits.RC2
#define IO_RC2_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define IO_RC2_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define IO_RC2_SetAnalogMode()  do { ANSELCbits.ANSC2 = 1; } while(0)
#define IO_RC2_SetDigitalMode() do { ANSELCbits.ANSC2 = 0; } while(0)

// get/set RC3 procedures
#define RC3_SetHigh()    do { LATCbits.LATC3 = 1; } while(0)
#define RC3_SetLow()   do { LATCbits.LATC3 = 0; } while(0)
#define RC3_Toggle()   do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define RC3_GetValue()         PORTCbits.RC3
#define RC3_SetDigitalInput()   do { TRISCbits.TRISC3 = 1; } while(0)
#define RC3_SetDigitalOutput()  do { TRISCbits.TRISC3 = 0; } while(0)
#define RC3_SetAnalogMode() do { ANSELCbits.ANSC3 = 1; } while(0)
#define RC3_SetDigitalMode()do { ANSELCbits.ANSC3 = 0; } while(0)

// get/set RC4 procedures
#define RC4_SetHigh()    do { LATCbits.LATC4 = 1; } while(0)
#define RC4_SetLow()   do { LATCbits.LATC4 = 0; } while(0)
#define RC4_Toggle()   do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define RC4_GetValue()         PORTCbits.RC4
#define RC4_SetDigitalInput()   do { TRISCbits.TRISC4 = 1; } while(0)
#define RC4_SetDigitalOutput()  do { TRISCbits.TRISC4 = 0; } while(0)
#define RC4_SetAnalogMode() do { ANSELCbits.ANSC4 = 1; } while(0)
#define RC4_SetDigitalMode()do { ANSELCbits.ANSC4 = 0; } while(0)

// get/set IO_RC5 aliases
#define IO_RC5_TRIS               TRISCbits.TRISC5
#define IO_RC5_LAT                LATCbits.LATC5
#define IO_RC5_PORT               PORTCbits.RC5
#define IO_RC5_ANS                ANSELCbits.ANSC5
#define IO_RC5_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define IO_RC5_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define IO_RC5_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define IO_RC5_GetValue()           PORTCbits.RC5
#define IO_RC5_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define IO_RC5_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define IO_RC5_SetAnalogMode()  do { ANSELCbits.ANSC5 = 1; } while(0)
#define IO_RC5_SetDigitalMode() do { ANSELCbits.ANSC5 = 0; } while(0)

// get/set RC6 procedures
#define RC6_SetHigh()    do { LATCbits.LATC6 = 1; } while(0)
#define RC6_SetLow()   do { LATCbits.LATC6 = 0; } while(0)
#define RC6_Toggle()   do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define RC6_GetValue()         PORTCbits.RC6
#define RC6_SetDigitalInput()   do { TRISCbits.TRISC6 = 1; } while(0)
#define RC6_SetDigitalOutput()  do { TRISCbits.TRISC6 = 0; } while(0)
#define RC6_SetAnalogMode() do { ANSELCbits.ANSC6 = 1; } while(0)
#define RC6_SetDigitalMode()do { ANSELCbits.ANSC6 = 0; } while(0)

// get/set RC7 procedures
#define RC7_SetHigh()    do { LATCbits.LATC7 = 1; } while(0)
#define RC7_SetLow()   do { LATCbits.LATC7 = 0; } while(0)
#define RC7_Toggle()   do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define RC7_GetValue()         PORTCbits.RC7
#define RC7_SetDigitalInput()   do { TRISCbits.TRISC7 = 1; } while(0)
#define RC7_SetDigitalOutput()  do { TRISCbits.TRISC7 = 0; } while(0)
#define RC7_SetAnalogMode() do { ANSELCbits.ANSC7 = 1; } while(0)
#define RC7_SetDigitalMode()do { ANSELCbits.ANSC7 = 0; } while(0)

// get/set BUZZER_RD0 aliases
#define BUZZER_RD0_TRIS               TRISDbits.TRISD0
#define BUZZER_RD0_LAT                LATDbits.LATD0
#define BUZZER_RD0_PORT               PORTDbits.RD0
#define BUZZER_RD0_ANS                ANSELDbits.ANSD0
#define BUZZER_RD0_SetHigh()            do { LATDbits.LATD0 = 1; } while(0)
#define BUZZER_RD0_SetLow()             do { LATDbits.LATD0 = 0; } while(0)
#define BUZZER_RD0_Toggle()             do { LATDbits.LATD0 = ~LATDbits.LATD0; } while(0)
#define BUZZER_RD0_GetValue()           PORTDbits.RD0
#define BUZZER_RD0_SetDigitalInput()    do { TRISDbits.TRISD0 = 1; } while(0)
#define BUZZER_RD0_SetDigitalOutput()   do { TRISDbits.TRISD0 = 0; } while(0)
#define BUZZER_RD0_SetAnalogMode()  do { ANSELDbits.ANSD0 = 1; } while(0)
#define BUZZER_RD0_SetDigitalMode() do { ANSELDbits.ANSD0 = 0; } while(0)

// get/set CCP4_RD1 aliases
#define CCP4_RD1_TRIS               TRISDbits.TRISD1
#define CCP4_RD1_LAT                LATDbits.LATD1
#define CCP4_RD1_PORT               PORTDbits.RD1
#define CCP4_RD1_ANS                ANSELDbits.ANSD1
#define CCP4_RD1_SetHigh()            do { LATDbits.LATD1 = 1; } while(0)
#define CCP4_RD1_SetLow()             do { LATDbits.LATD1 = 0; } while(0)
#define CCP4_RD1_Toggle()             do { LATDbits.LATD1 = ~LATDbits.LATD1; } while(0)
#define CCP4_RD1_GetValue()           PORTDbits.RD1
#define CCP4_RD1_SetDigitalInput()    do { TRISDbits.TRISD1 = 1; } while(0)
#define CCP4_RD1_SetDigitalOutput()   do { TRISDbits.TRISD1 = 0; } while(0)
#define CCP4_RD1_SetAnalogMode()  do { ANSELDbits.ANSD1 = 1; } while(0)
#define CCP4_RD1_SetDigitalMode() do { ANSELDbits.ANSD1 = 0; } while(0)

// get/set LED_TEST_RD2 aliases
#define LED_TEST_RD2_TRIS               TRISDbits.TRISD2
#define LED_TEST_RD2_LAT                LATDbits.LATD2
#define LED_TEST_RD2_PORT               PORTDbits.RD2
#define LED_TEST_RD2_ANS                ANSELDbits.ANSD2
#define LED_TEST_RD2_SetHigh()            do { LATDbits.LATD2 = 1; } while(0)
#define LED_TEST_RD2_SetLow()             do { LATDbits.LATD2 = 0; } while(0)
#define LED_TEST_RD2_Toggle()             do { LATDbits.LATD2 = ~LATDbits.LATD2; } while(0)
#define LED_TEST_RD2_GetValue()           PORTDbits.RD2
#define LED_TEST_RD2_SetDigitalInput()    do { TRISDbits.TRISD2 = 1; } while(0)
#define LED_TEST_RD2_SetDigitalOutput()   do { TRISDbits.TRISD2 = 0; } while(0)
#define LED_TEST_RD2_SetAnalogMode()  do { ANSELDbits.ANSD2 = 1; } while(0)
#define LED_TEST_RD2_SetDigitalMode() do { ANSELDbits.ANSD2 = 0; } while(0)

// get/set IO_RD4 aliases
#define IO_RD4_TRIS               TRISDbits.TRISD4
#define IO_RD4_LAT                LATDbits.LATD4
#define IO_RD4_PORT               PORTDbits.RD4
#define IO_RD4_ANS                ANSELDbits.ANSD4
#define IO_RD4_SetHigh()            do { LATDbits.LATD4 = 1; } while(0)
#define IO_RD4_SetLow()             do { LATDbits.LATD4 = 0; } while(0)
#define IO_RD4_Toggle()             do { LATDbits.LATD4 = ~LATDbits.LATD4; } while(0)
#define IO_RD4_GetValue()           PORTDbits.RD4
#define IO_RD4_SetDigitalInput()    do { TRISDbits.TRISD4 = 1; } while(0)
#define IO_RD4_SetDigitalOutput()   do { TRISDbits.TRISD4 = 0; } while(0)
#define IO_RD4_SetAnalogMode()  do { ANSELDbits.ANSD4 = 1; } while(0)
#define IO_RD4_SetDigitalMode() do { ANSELDbits.ANSD4 = 0; } while(0)

// get/set IO_RD5 aliases
#define IO_RD5_TRIS               TRISDbits.TRISD5
#define IO_RD5_LAT                LATDbits.LATD5
#define IO_RD5_PORT               PORTDbits.RD5
#define IO_RD5_ANS                ANSELDbits.ANSD5
#define IO_RD5_SetHigh()            do { LATDbits.LATD5 = 1; } while(0)
#define IO_RD5_SetLow()             do { LATDbits.LATD5 = 0; } while(0)
#define IO_RD5_Toggle()             do { LATDbits.LATD5 = ~LATDbits.LATD5; } while(0)
#define IO_RD5_GetValue()           PORTDbits.RD5
#define IO_RD5_SetDigitalInput()    do { TRISDbits.TRISD5 = 1; } while(0)
#define IO_RD5_SetDigitalOutput()   do { TRISDbits.TRISD5 = 0; } while(0)
#define IO_RD5_SetAnalogMode()  do { ANSELDbits.ANSD5 = 1; } while(0)
#define IO_RD5_SetDigitalMode() do { ANSELDbits.ANSD5 = 0; } while(0)

// get/set IO_RD6 aliases
#define IO_RD6_TRIS               TRISDbits.TRISD6
#define IO_RD6_LAT                LATDbits.LATD6
#define IO_RD6_PORT               PORTDbits.RD6
#define IO_RD6_ANS                ANSELDbits.ANSD6
#define IO_RD6_SetHigh()            do { LATDbits.LATD6 = 1; } while(0)
#define IO_RD6_SetLow()             do { LATDbits.LATD6 = 0; } while(0)
#define IO_RD6_Toggle()             do { LATDbits.LATD6 = ~LATDbits.LATD6; } while(0)
#define IO_RD6_GetValue()           PORTDbits.RD6
#define IO_RD6_SetDigitalInput()    do { TRISDbits.TRISD6 = 1; } while(0)
#define IO_RD6_SetDigitalOutput()   do { TRISDbits.TRISD6 = 0; } while(0)
#define IO_RD6_SetAnalogMode()  do { ANSELDbits.ANSD6 = 1; } while(0)
#define IO_RD6_SetDigitalMode() do { ANSELDbits.ANSD6 = 0; } while(0)

// get/set IO_RD7 aliases
#define IO_RD7_TRIS               TRISDbits.TRISD7
#define IO_RD7_LAT                LATDbits.LATD7
#define IO_RD7_PORT               PORTDbits.RD7
#define IO_RD7_ANS                ANSELDbits.ANSD7
#define IO_RD7_SetHigh()            do { LATDbits.LATD7 = 1; } while(0)
#define IO_RD7_SetLow()             do { LATDbits.LATD7 = 0; } while(0)
#define IO_RD7_Toggle()             do { LATDbits.LATD7 = ~LATDbits.LATD7; } while(0)
#define IO_RD7_GetValue()           PORTDbits.RD7
#define IO_RD7_SetDigitalInput()    do { TRISDbits.TRISD7 = 1; } while(0)
#define IO_RD7_SetDigitalOutput()   do { TRISDbits.TRISD7 = 0; } while(0)
#define IO_RD7_SetAnalogMode()  do { ANSELDbits.ANSD7 = 1; } while(0)
#define IO_RD7_SetDigitalMode() do { ANSELDbits.ANSD7 = 0; } while(0)

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