#include "main.h"
/**
* print_binary - print binary number.
* @n:the integer that will be treated.
*/
void print_binary(unsigned long int n)
{
unsigned int curr;
curr = n;
while (curr != 0)
{
	while (curr > 1)
		curr -= 2;
	_putchar(curr);
	curr = n >> 1;
}
}
