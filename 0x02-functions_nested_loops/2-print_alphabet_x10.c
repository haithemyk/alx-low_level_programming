#include "main.h"
/**
* print_alphabet_x10 - will print alphabet ten times
*/
void print_alphabet_x10(void)
{
int i;
int j;
for (j = 0 ; j < 10 ; j++)
{
for (i = 97 ; i < 123 ; i++)
{
_putchar((char) i);
}
_putchar('\n');
}
}
