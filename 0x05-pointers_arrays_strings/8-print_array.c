#include "main.h"
#include <stdio.h>
/**
* print_array - print 
* @a:the string that will be treated
* @n:the number of elements
*/
void print_array(int *a, int n)
{
int i;
i = 0;
while (i < n)
{
if (i == n - 1)
{
printf("%d", a[i]);
break;
}
printf("%d, ",a[i]);
i++;
}
putchar('\n');
}
