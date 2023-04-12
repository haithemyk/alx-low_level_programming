#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* create_array - will print the array of character c
* @size:the size of buffer
* @c: special character
* Return: pointer to array
*/
char *create_array(unsigned int size, char c)
{
char *arr;
unsigned int i;
if (size == 0)
return (NULL);
arr = (char *)  malloc(sizeof(char) * size);
if (arr == NULL)
return (NULL);
for (i = 0; i < size; i++)
{
arr[i] = c;
}
return (arr);
}
