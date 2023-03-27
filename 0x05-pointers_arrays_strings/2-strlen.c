#include "main.h"
/**
* _strlen - count the number of characters in string
* @s:the string that will be trated
*/
int _strlen(char *s)
{
int i;
i = 0;
while (s[i] != '\0')
{
i++;
}
return i;
}
