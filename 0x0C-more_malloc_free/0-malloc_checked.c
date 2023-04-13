#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* malloc_checked - will create space in memory of size b
* @b:the size of memory allocation
* Return: pointer to first byte
*/
void *malloc_checked(unsigned int b)
{
if (b == 0)
return (NULL);
void *ptr = malloc(b);
if (ptr == NULL)
exit(98);
return (ptr);
}
