#include "main.h"
/**
* _strlen_recursion - will return the length of string s
* @s:the array that will be manipulated
* Return:the size of array
*/
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
return (_strlen_recursion(s + 1) + 1);
}
