#include "main.h"
#include <stdio.h>
/**
* rev_string - print string of character reversed
* @s:the string that will be treated
*/
void rev_string(char *s)
{
int i;
int len;
len = 0;
while (s[len] != '\0')
{
len++;
}
i = len - 1;
while (i >= 0)
{
putchar(s[i]);
i--;
}
putchar('\n');
}
