#include "main.h"
/**
* _isupper - check if letter is lower case or upper case
* @c: the character that will be checked
*
* Return: if the character is uppercase will return 1 or it will return 0
* otherwise
*/
int _isupper(int c)
{
if (c < 91 && c > 64)
return (1);
else
return (0);
}
