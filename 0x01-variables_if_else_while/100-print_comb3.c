#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - will print all numbers usin ascii code seperated with comma ',' all
* possible combination
* Return: if the program works perfectly
*/
int main(void)
{
int i;
int j;
for (i = 0 ; i < 9 ; i++)
{

for (j = i + 1 ; j < 10 ; j++)
{
putchar((char) i + 48);
putchar((char) j + 48);
if (i != 8 || j != 9)
{
putchar(',');
putchar(' ');
}

}

}
putchar('\n');
return (0);
}
