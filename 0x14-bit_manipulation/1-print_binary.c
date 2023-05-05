#include "main.h"
/**
* print_binary - print binary number.
* @n:the integer that will be treated.
*/
void print_binary(unsigned long int n)
{
unsigned int shift, times, cp_times, border;
shift = n;

if (shift == 0)
{
	_putchar('0');
	exit();
}
times = 0;
while (shift != 1)
{
	shift = shift >> 1;
	times++;
}
border = 0;
while (times + 1 != border)
{
	cp_times = times;
	shift = n;
	while (cp_times != border)
	{
		shift = shift >> 1;
		cp_times--;
	}
	while (shift > 1)
		shift -= 2;
	_putchar(shift + '0');
	border++;
}
}
