#include "main.h"
/**
* reverse_array - will reverse an array
* @a:the array that will be reversed
* @n:the size of array
*/
void reverse_array(int *a, int n)
{
int j;
int i;
int temp;
i = 0;
j = n - 1;
while (i < j)
{
temp = a[i];
a[i] = a[j];
a[j] = temp;
i++;
j--;
}
}
