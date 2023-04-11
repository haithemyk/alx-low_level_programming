#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* main - will print the first argv element
* @argc:the size of argv
* @argv:the arguments of program
* Return: return 0 means succes
*/
int main(int argc, char *argv[])
{
int i;
int y;
int result;
if (argc == 1)
{
printf("0\n");
return (0);
}
result = 0;
for (i = 1; i < argc; i++)
{
y = atoi(argv[i]);
if (y == 0 && argv[i][0] != '0')
{
printf("Error\n");
return (1);
}
result = result + y;
}
printf("%d\n", result);
return (0);
}
