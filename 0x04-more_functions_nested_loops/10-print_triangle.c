#include "main.h"
/**
* print_triangle - print left triangle in n lines
* @n: the number of "\"
*/
void print_triangle(int size)
{
int i, j;
for (i = 1; i <= size; i++)
{
for (j = 1 ; j < size - i + 1; j++)
{
_putchar(' ');
}
for (j = 1 ; j <= i; j++)
{
_putchar('#');
}
_putchar('\n');
}
if (size <= 0)
_putchar('\n');
}
