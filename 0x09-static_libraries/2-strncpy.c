#include "main.h"
/**
* _strncpy - will copy the src string to dest string with overwriten
* @dest:where we will append
* @src:what we will append
* @n:the number of bytes
* Return:dest string after adding the second string
*/
char *_strncpy(char *dest, char *src, int n)
{
int j;
int i;
i = 0;
j = 0;
while (j < n)
{
dest[j] = src[i];
if (src[i] != '\0')
i++;
j++;
}
return (dest);
}
