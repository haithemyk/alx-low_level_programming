#include "main.h"
/**
* _isalpha - check if character is alpha letter or no
* @c: the character that will be checked
*
* Return: if the character is lowercase will return 1 or it will return 0
* otherwise
*/
int _isalpha(int c)
{
if ((c < 123 && c > 96) || (c < 91 && c > 64))
return (1);
else
return (0);
}
