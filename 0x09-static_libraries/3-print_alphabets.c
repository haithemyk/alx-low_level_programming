#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - will print all alphabet letters lower - upper case
* Return: if the program works perfectly
*/
int main(void)
{
int i;
for (i = 97 ; i < 123 ; i++)
{
putchar((char) i);
}
for (i = 65 ; i < 91 ; i++)
{
putchar((char) i);
}
putchar('\n');
return (0);
}
