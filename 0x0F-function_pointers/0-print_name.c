#include "function_pointers.h"
/**
* print_name - will call f to print name
* @name: the name as string
* @f: the pointer of function
*/
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;
(*f)(name);
}
