/* 
 * File:   DriverLCD16x2.h
 * Author: Gaston
 *
 * Created on 8 de diciembre de 2017, 15:27
 */

#ifndef DRIVERLCD16X2_H
#define	DRIVERLCD16X2_H

#define ClearDisplay                 0x01
#define ReturnHome                   0b00000010
#define EntryModeSET                 0b00000111
#define DisplayCursorToggleON        0b00001111           // 0b00001DCB     D=1 Sets Entire Display ON, D=0 Sets Entire Display OFF, C=1 Cursor ON, C=0 Cursor OFF, B=1 Blinking of cursor position character ON, B=0 Blinking of cursor position OFF
#define DisplayONCursorToggleOFF     0b00001100
#define DisplayControlOFF            0b00001010
#define CursorShiftRight             0b00010100
#define CursorShiftLeft              0b00010000
#define DisplayShiftRight            0b00011100
#define DisplayShiftLeft             0b00011000
#define CURSORORDISPLAYSHIFT         0b00011100           // 0b0001S/CR/Lxx S/C = 1 DISPLAY SHIFT, S/C =0 CURSOR MOVE, R/L = 1 move to the right, R/L=0 move to the left.
#define FunctionSet                  0b00101100           // 0b 001DLNFxx DL=1 8 bits, DL=0 4bits, N=1 2 LINES, N=0 1 line

#define FirstLineAddress             0b10000000
#define SecondLineAddress            0b11000000

//-------------------------------------Prototype Functions--------------------//
void lcd_cmd(unsigned char x);        // Function to send command to LCD
void lcd_cmd_hf(unsigned char x);     // Function to send 4 bit command to LCD
void lcd_dwr(unsigned char x);        // Function to send data to LCD
void lcd_msg(unsigned char *c);       // Function to send string of data to LCD
void lcd_init(void);                  // LCD initialization
void lcd_lat(void);                   // Toggles Enable PIN from High to Low to lat the information to the LCD
void DisplayClear(void);              // Clear Display
void HomeReturn(void);                // Return the Cursor Home X=1,Y=1
void DisplayONCursorONToggleON(void); // Turn ON the Display with the cursor ang toggle it
void DisplayONCursorOFFToggleOFF(void);// Turn ON the display without the cursor 
void DisplayOFF(void);
void CursorGOTOxy(int x,int y);
//----------------------------------------------------------------------------//

#ifdef	__cplusplus
extern "C" {
#endif




#ifdef	__cplusplus
}
#endif

#endif	/* DRIVERLCD16X2_H */

