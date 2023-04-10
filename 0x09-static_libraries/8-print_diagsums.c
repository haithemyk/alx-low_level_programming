#include "main.h"
#include <stdio.h>
/**
* print_diagsums - will print sum of diagonals
* @a:the 2d array pointer that contains the numbers
* @size:the size of array
*/
void print_diagsums(int *a, int size)
{
int i, sum1, sum2;
sum1 = 0;
sum2 = 0;
for (i = 0; i < size; i++)
{
sum1 += *(a + i * size + i);
sum2 += *(a + i * size + size - i - 1);
}
printf("%d, %d\n", sum1, sum2);
}
