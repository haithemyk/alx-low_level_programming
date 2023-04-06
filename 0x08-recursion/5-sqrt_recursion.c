#include "main.h"
/**
* _sqrt_recursion - will return the sqrt of n
* @n:the number that will be manipulated
* Return:sqrt of n
*/
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
return (sqrtr(n, n / 2));
}
/**
* sqrtr - return the sqrt of number
* @n:see the previous function
* @guess: guess
* Return: the sqrt
*/
int sqrtr(int n, int guess)
{
int new_guess = (guess + x / guess) / 2.0;
if (new_guess == guess)
{
return (guess);
}
else
{
return (sqrtr(n, new_guess));
}
}

