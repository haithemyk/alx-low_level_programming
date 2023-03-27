#include "main.h"
/**
* reset_to_98 - will swap two between two integers
* @a:the first integer that will be treated
* @b:the second //      //   //  // //
*/
void swap_int(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;
}
