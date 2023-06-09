#include "main.h"
/**
* get_bit - get bit at certain index
* @index: the index of wanted bit
* @n: the number that will be treated
* Return:the bit
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (n >> index == 0)
		return (-1);
   
    return (n >> index) & 1;

}
