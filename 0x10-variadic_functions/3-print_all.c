#include "variadic_functions.h"
/**
* print_all - will print all args seperated by ","
* @format: string that match data type
*/
void print_all(const char * const format, ...)
{
va_list args;
char *str;
char *copy_format;
char *sep;
copy_format = strdup(format);
sep = "";
if (copy_format == NULL)
return;
va_start(args, format);
while (*copy_format)
{
switch (*copy_format)
{
case 'i':
printf("%s%d", sep, va_arg(args, int));
break;
case 's':
str = va_arg(args, char*);
if (str == NULL)
str = "(nil)";
printf("%s%s", sep, str);
break;
case 'f':
printf("%s%f", sep, va_arg(args, double));
break;
case 'c':
printf("%s%c", sep, va_arg(args, int));
break;
default:
copy_format++;
continue;
}
sep = ", ";
copy_format++;
}

puts("");
va_end(args);
}
