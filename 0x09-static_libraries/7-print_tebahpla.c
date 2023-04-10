#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - will print all alphabet letters in reverse
* Return: if the program works perfectly
*/
int main(void)
{
int i;
for (i = 122 ; i > 96 ; i--)
{
putchar((char) i);
}
putchar('\n');
return (0);
}
