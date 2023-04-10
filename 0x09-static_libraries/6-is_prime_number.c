#include "main.h"
/**
* is_prime_number - will show if number is prime or no
* @n:the number that will be manipulated
* Return:1 if prime 0 else
*/
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (divide(n, n - 1));
}
/**
* divide - will divide n to m
* @n:the number will be divide
* @m:the number will divide to
* Return: if m exist 0 else 1
**/
int divide(int n, int m)
{
if (m == 1)
return (1);
else if (n % m == 0)
return (0);
else
return (divide(n, m - 1));
}
