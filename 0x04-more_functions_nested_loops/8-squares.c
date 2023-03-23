#include "main.h"
/**
* print_square - print square  n*n using "#"
* @size: the number of side length
*/
void print_square(int size)
{
int i, j;
for (i = 1; i <= size; i++)
{
for (j = 1; j <= size; j++)
{
_putchar('#');
}
}
_putchar('\n');
}
