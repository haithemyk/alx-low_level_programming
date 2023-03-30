#include "main.h"
/**
* cap_string - will capitalize all words
* @a:array that will be treated
* Return:the result array
*/
char *cap_string(char *a)
{
int i;
i = 0;

while (a[i] != '\0')
{
if (i == 0 || a[i - 1] == '\n' || a[i - 1] == '\t' || a[i - 1] == ',' ||
a[i - 1] == '.' || a[i - 1] == '(' || a[i - 1] == ')' || a[i - 1] == '{' ||
a[i - 1] == '}' || a[i - 1] == '?' || a[i - 1] == ';' ||
a[i - 1] == '!' || a[i - 1] == '"' || a[i - 1] == ' ')
{
if (a[i] < 123 && a[i] > 96)
a[i] = a[i] - 32;
}
i++;
}
return (a);
}
