#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - will print all numbers usin ascii code seperated with comma ','
* Return: if the program works perfectly
*/
int main(void)
{
int i;
for (i = 48 ; i < 58 ; i++)
{
putchar((char) i);

if (i != 57)
{
putchar(',');
putchar(' ');
}

}
putchar('\n');
return (0);
}
