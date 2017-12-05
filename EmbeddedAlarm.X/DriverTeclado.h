/* 
 * File:   DriverTeclado.h
 * Author: Gaston
 *
 * Created on 26 de noviembre de 2017, 14:55
 */

#ifndef DRIVERTECLADO_H
#define	DRIVERTECLADO_H

#ifdef	__cplusplus
extern "C" {
#endif

void KeyPadInit(void);
char KeyPadScan(void);

int KeyPadAcquire(void);


#ifdef	__cplusplus
}
#endif

#endif	/* DRIVERTECLADO_H */

