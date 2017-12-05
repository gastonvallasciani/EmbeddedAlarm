/* 
 * File:   devices.h
 * Author: Gaston
 *
 * Created on November 25, 2017, 6:12 PM
 */

#ifndef DEVICES_H
#define	DEVICES_H



#ifdef	__cplusplus
extern "C" {
#endif
    
#define _10ms 10                  //for timer4 use only
#define _100ms 10*_10ms           // 
#define _1s 10*_100ms             //
    
#define YES 0
#define NO 1

    
void Delay(uint16_t contador);
void TMR4_Interrupt(void);


#ifdef	__cplusplus
}
#endif

#endif	/* DEVICES_H */

