/*
 * USART.h
 *
 * Created: 6/21/2024 12:24:09 PM
 *  Author: Sanath Kumara
 */ 


#ifndef USART_H_
#define USART_H_

#include "global.h"

void initUART0(uint16_t baud_rate);
void sendCharUSART0(char data);
char receiveCharUSART0();

#endif /* USART_H_ */