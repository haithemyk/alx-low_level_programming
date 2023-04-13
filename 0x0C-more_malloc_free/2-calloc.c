#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* _calloc - will create space in memory of size nmemb * size
* @nmemb:number of elements
* @size:the size of memory allocation
* Return: pointer to first byte
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;
if (size == 0 || nmemb == 0)
return (NULL);
ptr = malloc(size * nmemb);
if (ptr != NULL)
memset(ptr, 0, nmemb * size);
return (ptr);
}
