#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* main - will print the first argv element
* @argc:the size of argv
* @argv:the arguments of program
* Return: return 0 means succes
*/
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc ; i++) 
{
printf("%s\n", argv[i]);
}
return (0);
}
