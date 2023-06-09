#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* string_nconcat - will copy content of s1 and s2 to new string
* @s1:the first string that will be treated
* @s2:the second string that will be treated
* @n:the number of characters of second string
* Return: pointer to first byte
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *result;
unsigned int len1, len2, i;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
len1 = strlen(s1);
len2 = strlen(s2);
if (n >= len2)
{
n = len2;
}
result = malloc(sizeof(char) * (len1 + n + 1));
if (result == NULL)
{
return (NULL);
}
for (i = 0; i < len1; i++)
{
result[i] = s1[i];
}
for (i = 0; i < n; i++)
{
result[len1 + i] = s2[i];
}
result[len1 + n] = '\0';
return (result);
}
