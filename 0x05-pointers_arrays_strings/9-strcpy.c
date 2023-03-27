#include "main.h"
#include <stdio.h>
/**
* _strcpy - print n elements of array
* @a:the string that will be treated
* @n:the number of elements
*/
char *_strcpy(char *dest, char *src)
{
int len;
len = 0;
while (src[len] != '\0')
{
dest[len] = src[len];
len++;
}
dest[len] = '\0';
return (dest);
}
