#include "main.h"
#include <stdio.h>
/**
* puts_half - print string of even indices character
* @str:the string that will be treated
*/
void puts2(char *str)
{
int i;
int len;
len = 0;
while (str[len] != '\0')
{
len++;
}
if ( len % 2 == 0)
i = len / 2;
else
i = (len / 2 - 1) / 2; 
while (i < len)
{
putchar(str[i]);
i++;
}
putchar('\n');
}
