#include "main.h"
/**
* _pow_recursion - will return the pow of integer x to y
* @x:the number that will be manipulated
* @y:the power coiffecient
* Return:pow of x to y
*/
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else
{
if (x == 0)
return (0);
if (y == 0)
return (1);
return (_pow_recursion(x, y - 1) * x);
}
}
