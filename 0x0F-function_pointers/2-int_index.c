#include "function_pointers.h"
/**
* int_index - will call cmp to print array index that match cmp parameter
* @array: the pointer to integer array
* @size: the size of array
* @cmp: the pointer of function
* Return:the index if cmp match -1 otherwise
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int i, r;
if (array == NULL || cmp == NULL || size == 0)
return (-1);
for (i = 0; i < size; i++)
{
r = (*cmp)(array[i]);
if (r != 0)
return (i);
}
return (-1);
}
