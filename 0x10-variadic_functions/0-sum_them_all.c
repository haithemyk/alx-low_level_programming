#include "variadic_functions.h"
/**
* sum_them_all - will return the sum of all args passed
* @n: the number of args
* Return: the sum of args
*/
int sum_them_all(const unsigned int n, ...)
{
if (n == 0)
return (0);
va_list ap;
int i, sum;
sum = 0;
va_start(ap, n);
for (i = 0; i < n; i++)
{
sum += va_args(ap, int);
}
va_end(ap);
return (sum);
}
