#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
* print_name - will call f to print name
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
