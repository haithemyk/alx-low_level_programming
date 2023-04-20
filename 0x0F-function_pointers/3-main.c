#include "3-calc.h"

/**
* main - check the code
* @argc:the size of argv
* @argv:arguments array
* Return: Always 0.
*/
int main(int argc, char *argv[])
{
char *o;
int a, b;
int (*op_ptr)(int a, int b);
if (argc != 4)
{
printf("Error/n");
return (98);
}
a = atoi(argv[1]);
o = argv[2];
b = atoi(argv[3]);
if (b == 0 && (strcmp(o, "/") == 0 || strcmp(o, "%") == 0))
{
printf("Error\n");
return (100);
}
op_ptr = get_op_func(o);
if (op_ptr == NULL)
{
printf("Error\n");
return (99);
}
printf("%d", op_ptr(a, b));
return (0);
}
