#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* _strdup - will copy the array s and return pointer to it
* @str:the size of buffer
* Return: pointer to array
*/
char *_strdup(char *str)
{
char *arr;
unsigned int size;
unsigned int i;
if (str == NULL)
return (NULL);
i = 0;
while (str[i] != '\0')
{
i++;
}
size = i;
arr = (char *)  malloc(sizeof(char) * size);
if (arr == NULL)
return (NULL);
for (i = 0; i < size; i++)
{
arr[i] = str[i];
}
return (arr);
}
