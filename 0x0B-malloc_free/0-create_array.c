#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* _puts_recursion - will print the string s
* @size:the size of buffer
* @c: special character
*/
char *create_array(unsigned int size, char c)
{
char* arr;
int i;
if (size == 0)
return NULL;
arr = (char*)  malloc(sizeof(char) * size);
for (i = 0; i < size; i++)
{
arr[i] = c;
}
return arr;
}
