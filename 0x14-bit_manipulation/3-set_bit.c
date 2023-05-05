#include "main.h"
/**
* set_bit - get bit at certain index
* @index: the index of wanted bit
* @n: the pointer to the number that will be treated
* Return:the bit
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int))
		return (-1);
	*n |= (1 << index);
	return (1);
}
