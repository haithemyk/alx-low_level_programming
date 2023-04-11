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
int x;
int y;
int result;
if (argc != 3)
{
printf("Error");
return (1);
}
x = atoi(argv[1]);
y = atoi(argv[2]);
result = x * y;
printf("%d\n", result);
return (0);
}
