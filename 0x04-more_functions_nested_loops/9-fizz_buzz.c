#include "main.h"
#include<stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
fizz_buzz();
return (0);
}
/**
* fizz_buzz - instead of 3*k print fizz and bazz instead of 5*k
*/
void fizz_buzz(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i % 3 == 0)
printf("Fizz");

if (i % 5 == 0)
printf("Buzz");

if(i % 3 != 0 && i % 5 != 0)
{   
if(i > 9)
printf("%d", i / 10);
printf("%d", i % 10);
}
printf(" ");
}
printf("\n");
}
