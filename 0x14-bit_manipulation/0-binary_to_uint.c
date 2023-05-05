#include "main.h"
#include <stdio.h>
/**
* binary_to_uint - convert binary string to unsigned base 10 int.
* @b:the string that will be treated.
* Return:the number if there is no error.
*/
unsigned int binary_to_uint(const char *b)
{
unsigned int pow, sum, bit;
int i;
i = 0;
while (b[i] != '\0')
	i++;
printf("i =[%d]", i);
i -= 1;
sum = 0;
pow = 1;
if (b == NULL)
	return (0);
while (i > -1)
{
	if (b[i] > '1' || b[i] < '0')
		return (0);
	bit = (b[i] - '0') * pow;
	sum += bit;
	pow = pow * 2;
	i -= 1;
}
return (sum);
}
