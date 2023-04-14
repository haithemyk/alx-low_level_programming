#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
* _calloc - will create space in memory of size nmemb * size
* @nmemb:number of elements
* @size:the size of memory allocation
* Return: pointer to first byte
*/
int *array_range(int min, int max)
{
int *ptr;
int i;
if (min > max)
return (NULL);
ptr = malloc(max - min + 1);
for (i = min; i <= max ; i++)
{
ptr[i - min] = i;
}   
return (ptr);
}
