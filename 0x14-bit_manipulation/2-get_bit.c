#include "main.h"
/**
* get_bit - get bit at certain index
* @index: the index of wanted bit
* @n: the number that will be treated
* Return:the bit
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
