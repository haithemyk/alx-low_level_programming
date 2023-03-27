#include "main.h"
#include <stdio.h>
/**
* puts2 - print string of even indices character 
* @str:the string that will be treated
*/
void puts2(char *str)
{
int i;
int len;
len = 0;
while (s[len] != '\0')
{
len++;
}
i = 0;
while (i < len)
{
putchar(s[i]);
i = i + 2;
}
putchar('\n');
}
