#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - will judge if the last digit is greater-less than 6 or equal to 0
* Return: if the program works perfectly
*/
int main(void)
{
int n;
int last_digit;
srand(time(0));
n = rand() - RAND_MAX / 2;

printf("Last digit of %d", n);
last_digit = n % 10;

if (last_digit > 5)
printf(" is %d and is greater than 5\n", last_digit);
else if (last_digit == 0)
printf(" is %d and is 0\n", last_digit);
else if (last_digit < 6)
printf(" is %d and is less than 6 and not 0\n", last_digit);
return (0);
}
