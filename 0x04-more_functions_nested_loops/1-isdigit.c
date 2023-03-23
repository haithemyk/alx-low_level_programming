#include "main.h"
/**
* _isdigit - check if digit or no
* @c: the character that will be checked
*
* Return: if the character is digit will return 1 or it will return 0
* otherwise
*/
int _isdigit(int c);
{
if (c >= '0' && c <= '9')
return (1);
else
return (0);
}
