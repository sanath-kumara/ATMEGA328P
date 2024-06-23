/*
 * UART.c
 *
 * Created: 6/21/2024 4:54:26 PM
 * Author : User
 */ 

#include "global.h"
#include "USART.h"

int main(void)
{
	initUART0(9600);
	while (1)
	{
		sendCharUSART0('A');
		_delay_ms(200);
		sendCharUSART0('B');
		_delay_ms(200);
		sendCharUSART0('C');
		_delay_ms(200);
	}
}

