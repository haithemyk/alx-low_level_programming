#include "3-calc.h"
/**
* int_index - will call cmp to print array index that match cmp parameter
* @s: the sign
* Return:the pointer to opt that match the sign
*/
int (*get_op_func(char *s))(int, int)
{
int i;
op_t ops[] =
{
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
i = 0;
while (ops[i].op != NULL)
{
if (strcmp(ops[i].op, s) == 0)
return (ops[i].f);
i++;
}
return (NULL);
}
