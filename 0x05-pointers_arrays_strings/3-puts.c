#include "main.h"
#include <stdio.h>
/**
* _puts - print string of character similair to stdio lib
* @str:the string that will be treated
*/
void _puts(char *str)
{
int i;
i = 0;
while (str[i] != '\0')
{
putchar(str[i]);
i++;
}
putchar('\n');
}
