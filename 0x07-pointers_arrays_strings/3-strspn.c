#include "main.h"
/**
* _strchr - will search for char c
* @s:the array that will be manipulated
* @accept:the valid characters
* Return: the segment length
*/
unsigned int _strspn(char *s, char *accept)
{
int i, j;
char k;
while (*(s + i) != '\0')
{
k = *(s + i);
j = 0;
while (*(accept + j) != '\0')
{
if (*(accept + j) == k)
break;
j++;
}
if (*(accept + j) == '\0')
break;
i++;
}
return (i);
}
