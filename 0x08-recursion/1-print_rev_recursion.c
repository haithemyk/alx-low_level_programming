#include "main.h"
/**
* _print_rev_recursion - will print the string s in reverse
* @s:the array that will be manipulated
*/
void _print_rev_recursion(char *s)
{
_print_rev_recursion(s + 1);
if (*s == '\0')
{
return;
}
_putchar(*s);
if (str == &str[0])
{
_putchar('\n');
}
}
