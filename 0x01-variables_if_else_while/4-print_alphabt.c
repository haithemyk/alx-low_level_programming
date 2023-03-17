#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - will print all alphabet letters expect e and q
* Return: if the program works perfectly
*/
int main(void)
{
int i;
for (i = 97 ; i < 123 ; i++)
{
if (i != 101 && i != 113)
putchar((char) i);
}
putchar('\n');
return (0);
}
