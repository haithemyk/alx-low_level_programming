#include "main.h"
/**
* _print_rev_recursion - will print the string s in reverse
* @s:the array that will be manipulated
*/
void _print_rev_recursion(char *s)
{
if (*s != '\0')
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
