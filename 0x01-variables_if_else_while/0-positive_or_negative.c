#include <stdio.h>
#include <time.h>
/**
* main - will decade if number is positive -negative -null
*
* Return: if the program works perfectly
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 0)
printf("is positive");
else if (n < 0)
printf("is negative");
else
printf("is zero");
}
