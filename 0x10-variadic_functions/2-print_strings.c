#include "variadic_functions.h"
/**
* print_numbers - will print all args seperated by separator
* @n: the number of args
* @separator: string will seperate between args
*/


void print_strings(const char *separator, const unsigned int n, ...)
{
va_list args;
char* str;
va_start(args, n);
for (unsigned int i = 0; i < n; i++) {
str = va_arg(args, char*);
if (str == NULL)
{
printf("(nil)");
}
else
{
printf("%s", str);
}
if (i != n - 1 && separator != NULL) {
printf("%s", separator);
}
}
printf("\n");
va_end(args);
}
