#include "main.h"
/**
* _strcat - will append the src string to dest string
* @dest:where we will append
* @src:what we will append
* Return:dest string after adding the second string
*/
char *_strcat(char *dest, char *src)
{
int len;
int i;
len = 0;
while (dest[len] != '\0')
{
len++;
}
i = 0;
while (src[i] != '\0')
{
dest[len + i] = src[i];
i++;
}
return (dest);
}
