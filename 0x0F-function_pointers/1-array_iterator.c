#include "function_pointers.h"
/**
* array_iterator - will call action to print array
* @array: the pointer to integer array
* @size: the size of array
* @action: the pointer of function
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned long i;
if (array == NULL || action == NULL || size == 0)
return;
for (i = 0; i < size; i++)
(*action)(array[i]);
}
