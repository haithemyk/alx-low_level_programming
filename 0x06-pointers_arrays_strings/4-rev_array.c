#include "main.h"
/**
* reverse_array - will reverse an array
* @a:the array that will be reversed
* @n:the size of an array
*/
void reverse_array(int *a, int n)
{
int j;
int i;
i = 0;
j = n - 1;
while (i < j)
{
a[i] = a[j];
i++;
j--;
}
}
