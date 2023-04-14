#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
* array_range - will create space in memory of size min - max
* @min:minemum element
* @max:the maximum element
* Return: pointer to first byte
*/
int *array_range(int min, int max)
{
int *ptr;
int i;
if (min > max)
return (NULL);
ptr = malloc((max - min + 1) * sizeof(int));
if (ptr == NULL)
return (NULL);
for (i = min; i <= max ; i++)
{
ptr[i - min] = i;
}
return (ptr);
}
