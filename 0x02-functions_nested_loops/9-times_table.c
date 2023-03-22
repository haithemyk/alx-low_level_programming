#include "main.h"
/**
* times_table - will numbers to 98
*/
void times_table(void)
{
int i;
int j;
int num;
for (i = 0 ; i < 10 ; i++)
{
for (j = 0 ; j < 10 ; j++)
{
num = i*j;
if (j > 0)
{
_putchar(' ');
if(num / 10 == 0)
_putchar(' ');
}
if(num / 10 > 0)
_putchar(num / 10);

_putchar(num % 10);
}
_putchar('\n');
}
}
