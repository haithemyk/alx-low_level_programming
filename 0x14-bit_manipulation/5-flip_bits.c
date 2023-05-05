#include "main.h"
/**
* flip_bit - flip the bits of n to m
* @n: the number that will be treated.
* @m: the second number that will be treated.
* Return:1 if succed -1 else.
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff;
	unsigned int count;
	diff = n ^ m;
	count = 0;
	while (diff > 0)
	{
		count += diff & 1;
		diff >>= 1;
	}
	return (count);
}
