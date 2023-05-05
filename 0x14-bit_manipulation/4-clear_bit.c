#include "main.h"
/**
* clear_bit - set index in number to 0
* @n: the number that will be treated.
* Return:1 if succed -1 else.
*/
int clear_bit(unsigned long int *n, unsigned int index);
{
	unsigned long int cp;
	cp = *n;
	if (cp >> index == 0)
		 return (-1);
	*n &= (0 << index);
	return (1);
}
