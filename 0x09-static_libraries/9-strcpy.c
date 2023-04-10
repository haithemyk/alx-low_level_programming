#include "main.h"
#include <stdio.h>
/**
* _strcpy - print n elements of array
* @dest:the string that will be paste in
* @src:the string that been copied
* Return: the new copied string
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
