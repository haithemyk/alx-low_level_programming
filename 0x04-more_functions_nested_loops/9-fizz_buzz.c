#include "main.h"

/**
* fizz_buzz - instead of 3*k print fizz and bazz instead of 5*k
*/
void fizz_buzz(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if(i % 3 == 0)
{
_putchar('F');
_putchar('i');
_putchar('z');
_putchar('z');
}
if(i % 5 == 0)
{
_putchar('B');
_putchar('u');
_putchar('z');
_putchar('z');
}
if(i % 3 != 0 && i % 5 != 0)
{   
if(i > 9)
_putchar('0' + i / 10);
_putchar('0' + i % 10);
}
_putchar(' ');
}
_putchar('\n');
}
