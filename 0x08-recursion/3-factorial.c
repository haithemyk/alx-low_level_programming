#include "main.h"
/**
* factorial - will return the factorial of integer n
* @n:the number that will be manipulated
* Return:fact of n
*/
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else
{
if (n == 0)
return (1);

return (factorial(n - 1) * n);
}
}
