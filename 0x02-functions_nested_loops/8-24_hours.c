#include "main.h"
/**
* jack_bauer - will print time from 00:00 to 23:59
*/
void jack_bauer(void)
{
int i;
int j;
int first_digit;
int second_digit;
for (j = 0 ; j < 23 ; j++)
{
for (i = 0 ; i < 59 ; i++)
{
first_digit = j % 10;
second_digit = j / 10;
_putchar('0' + second_digit);
_putchar((char) first_digit + '0');
_putchar(':');

first_digit = i % 10;
second_digit = i / 10;
_putchar('0' + second_digit);
_putchar((char) first_digit + '0');

_putchar('\n');
}
}
}
