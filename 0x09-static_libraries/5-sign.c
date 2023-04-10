#include "main.h"
/**
* print_sign - check if the number is positive - negative or null
* @n: the number that will be checked
*
* Return:  + -->  1  - --> -1  0 --> null
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('0');
return (0);
}
}
