#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* _strdup - will copy the array s1  and s2 into arr.
* @s1:the first array
* @s2:the second array
* Return: pointer to array
*/
char *str_concat(char *s1, char *s2)
{
char *arr;
unsigned int size1;
unsigned int size2;
unsigned int i;
i = 0;
if (s1 != NULL)
{
while (s1[i] != '\0')
{
i++;
}
i++;
}
size1 = i;
i = 0;
if (s2 != NULL)
{
while (s2[i] != '\0')
{
i++;
}
i++;
size2 = i;
}
arr = (char *)  malloc(sizeof(char) * (size1 + size2));
if (arr == NULL)
return (NULL);
for (i = 0; i < (size1 + size2); i++)
{
if (i < size1)
arr[i] = s1[i];
if (i >= size1 && i < (size1 + size2))
arr[i] = s2[i];
}
return (arr);
}
