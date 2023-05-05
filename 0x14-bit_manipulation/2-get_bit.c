#include "main.h"
/**
* print_binary - print binary number.
* @n:the integer that will be treated.
*/
int get_bit(unsigned long int n, unsigned int index)
{
unsigned int us_indx;
unsigned long int shift, curr;
shift = n;
us_indx = 0;
while (us_indx != index + 1)
{
	if (shift == 0)
		return (-1);
	curr = shift;
	while (curr > 1)
		curr -= 2;
	shift = shift >> 1;
	us_indx++;
}
return (curr);
}
