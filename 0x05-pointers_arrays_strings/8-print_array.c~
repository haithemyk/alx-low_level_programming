#include "main.h"
#include <stdio.h>
/**
* puts_half - print the second half of string
* @str:the string that will be treated
*/
void puts_half(char *str)
{
int i;
int len;
int n;
len = 0;
while (str[len] != '\0')
{
len++;
}
if (len % 2 == 0)
n = len / 2;
else
n = (len / 2 - 1) / 2;
i = len - n;
while (i < len)
{
putchar(str[i]);
i++;
}
putchar('\n');
}
