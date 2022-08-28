/* 
 * File:   uart.h
 * Author: chait
 *
 * Created on 23 August, 2022, 11:57 PM
 */


#ifndef UART_H
#define	UART_H

#define FOSC                20000000

void init_uart(unsigned long baud);
unsigned char getcharx(void);
void putchars(unsigned char data);
void putsx(const char *s);

#endif	/* UART_H */