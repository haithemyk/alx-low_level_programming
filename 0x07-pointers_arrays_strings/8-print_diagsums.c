#include "main.h"
#include <stdio.h>
/**
* print_diagsums - will print sum of diagonals
* @a:the 2d array that contains the numbers
*/
void print_diagsums(int *a, int size)
{
int i, j, sum1, sum2;
sum1 = 0;
sum2 = 0;
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
if (i == j)
sum1 += a[i][j];
if (size - j - 1 == i)
sum2 += a[i][j];
}
printf("%d, %d",sum1 ,sum2);
_putchar('\n');
}
}
