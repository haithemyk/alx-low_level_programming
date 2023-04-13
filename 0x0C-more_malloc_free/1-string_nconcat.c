#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* string_nconcat - will copy content of s1 and s2 to new string
* @s1:the first string that will be treated
* @s2:the second string that will be treated
* Return: pointer to first byte
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i, j, size1, size2;
char *ptr;
if (s1 == NULL)
size1 = 0;
else   
size1 = strlen(s1);
if (s2 == NULL)
{
size2 = 0;
}
else
{
if (n >= strlen(s2))
size2 = strlen(s2);
else
size2 = n;
}
ptr = malloc(size1 + size2 + 1);
if (ptr == NULL)
exit(98);
for (i = 0; i < size1; i++)
{
ptr[i] = s1[i];
}
for (i = size1; i < size1 + size2 && j < size2; i++)
{
ptr[i] = s2[j];
j++;
}
printf("%ld",sizeof(s1));
printf("%ld",sizeof(s2));
printf("%ld",sizeof(ptr));
return (ptr);
}
