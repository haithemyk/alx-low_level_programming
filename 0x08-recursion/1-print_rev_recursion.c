#include "main.h"
/**
* _print_rev_recursion - will print the string s in reverse
* @s:the array that will be manipulated
*/
void _print_rev_recursion(char *s)
{
_print_rev_recursion(s + 1);
if (*s != '\0')
{
{
_putchar(*s);
if (s == &s[0])
{
_putchar('\n');
}
}
}
