#include "main.h"
/**
* _memcpy - will copy src array to dest array
* @s:the array that will be manipulated
* @b:the char
* @n:the number of cases that we will treated
* Return: s array
*/
char *_memset(char *s, char b, unsigned int n);
{
unsigned int i;
for (i = 0; i < n; i++)
{
*(s + i) = b;
}
return (s);
}
