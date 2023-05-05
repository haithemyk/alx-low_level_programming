#include "main.h"
/**
* print_binary - print binary number.
* @n:the integer that will be treated.
*/
int get_bit(unsigned long int n, unsigned int index)
{
unsigned int cp_shift, us_indx;
int i;
unsigned long int shift;
shift = n;
i = 0;
us_indx = 0;
while (shift != 0)
{
	cp_shift = shift;
	while (cp_shift > 1)
		cp_shift -= 2;
	shift = shift >> 1;
	if (us_indx == index)
		break;
	else if (us_indx != index && shift == 0)
		return (-1);
	i++;
	us_indx++;
}
return (cp_shift);
}
