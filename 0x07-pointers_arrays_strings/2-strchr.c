#include "main.h"
/**
* _strchr - will search for char c
* @s:the array that will be manipulated
* @c:the char
* Return: pointer to specefic char
*/
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*(s + i) == c)
return (s);
s++;
}
if (c == '\0')
return (s);

return (NULL);
}
