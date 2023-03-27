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
char temp;
int j;
len = 0;
while (s[len] != '\0')
{
len++;
}
i = 0;
j = len - 1;
while (i < j)
{
temp = s[i];
s[i] = s[j];
s[j] = temp;
i++;
j--;
}
}
