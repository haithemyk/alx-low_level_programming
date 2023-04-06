#include "main.h"
/**
* _puts_recursion - will print the string s
* @s:the array that will be manipulated
*/
void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
return;
}
_putchar(*s);
_puts_recursion(s+1);
}
