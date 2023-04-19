#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
* print_name - will call f to print name
* @name: the name as string
* @f: the pointer of function
*/
void print_name(char *name, void (*f)(char *))
{
if (name == NULL)
return;    
(*f)(name);
}
