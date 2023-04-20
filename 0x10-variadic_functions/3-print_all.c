#include "variadic_functions.h"
/**
* print_all - will print all args seperated by ","
* @format: string that match data type
*/
void print_all(const char * const format, ...)
{
va_list args;
char *str;
unsigned i;
va_start(args, format);
i = 0;
while (format != NULL && format[i] != '\0')
{
switch (format[i])
{
case 'i':
printf("%d", va_arg(args, int));
break;
case 's':
str = va_arg(args, char *);
if (str != NULL)
{
printf("%s", str);
break;
}
printf("(nil)");
break;
case 'f':
printf("%f", va_arg(args, double));
break;
case 'c':
printf("%c", va_arg(args, int));
break;
default:
i++;
continue;
}
if (format[i + 1] != '\0')
printf(", ");
}
printf("\n");
va_end(args);
}
