/*
 * uart.h
 *
 *  Created on: 20.6.2012
 *      Author: ohejda
 *
 *  Description: uart module using rx/tx interrupts.
 *  Functions:
 *  	uart_init .. initialization
 *  	uart_putc .. put char function
 *  	uart_puts .. put string function
 */

#ifndef UART_H_
#define UART_H_

void set_debug_value(unsigned int value, unsigned int channel);
unsigned int get_debug_value(unsigned int channel);

void uart_init(void); // initialization
int uart_putc(char c); // put char function
int uart_puts(char *s); // put string function

#endif /* UART_H_ */
