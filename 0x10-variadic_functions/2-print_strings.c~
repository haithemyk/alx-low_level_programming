#include "variadic_functions.h"
/**
* print_numbers - will print all args seperated by separator
* @n: the number of args
* @separator: string will seperate between args
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int i;
char *new_separator;
if (n == 0)
return;
if (separator == NULL)
{
new_separator = malloc(1);
new_separator[0] = '\0';
}
else
{
new_separator = malloc(strlen(separator) + 1);
strncpy(new_separator, separator, strlen(separator) + 1);
}
va_start(ap, n);
for (i = 0; i < n; i++)
{
if (i < n - 1)
printf("%d%s", va_arg(ap, int), new_separator);
else
printf("%d", va_arg(ap, int));
}
va_end(ap);
putchar('\n');
}
