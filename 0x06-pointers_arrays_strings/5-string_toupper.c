#include "main.h"
/**
* string_toupper - will turn all lowercase letters to uppercase
* @a:array that will be treated
* Return:the result array
*/
char *string_toupper(char *a);
{
int i;
i = 0;
while (a[i] != '\0')
{
if (a[i] < 123 && a[i] > 96)
a[i] = a[i] - 32;
i++;
}
return (a);
}
