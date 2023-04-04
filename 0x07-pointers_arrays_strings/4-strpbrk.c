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
i = 0;
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
if (*(accept + j) != '\0')
break;
i++;
}
return (s + i);
}
