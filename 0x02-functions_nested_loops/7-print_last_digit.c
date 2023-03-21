#include "main.h"
/**
* print_last_digit - last digit of number
* @n: the number that will be checked
*
* Return:  485 -> 5
*/
int print_last_digit(int n)
{
if (n < 0)
{
n = -n;
}
_putchar ((n % 10) + '0');
return (n % 10);
}
