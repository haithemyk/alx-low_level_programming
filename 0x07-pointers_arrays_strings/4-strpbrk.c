#include "main.h"
/**
* _strpbrk - will match accept with s
* @s:the array that will be manipulated
* @accept:the valid characters
* Return: the segment length
*/
char *_strpbrk(char *s, char *accept)
{
unsigned int i, j;
char k;
char *p;
while (*s != '\0')
{
for (p = accept; *p != '\0'; p++)
{
if (*s == *p)
return (s);
}
s++;
}
return (NULL);
}
