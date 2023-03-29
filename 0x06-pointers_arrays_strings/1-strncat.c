#include "main.h"
/**
* _strncat - will append the src string to dest string
* @dest:where we will append
* @src:what we will append
* @n:the number of bytes
* Return:dest string after adding the second string
*/
char *_strncat(char *dest, char *src, int n)
{
int len;
int i;
len = 0;
while (dest[len] != '\0')
{
len++;
}
i = 0;
while (src[i] != '\0' && i < n)
{
dest[len + i] = src[i];
i++;
}
return (dest);
}
