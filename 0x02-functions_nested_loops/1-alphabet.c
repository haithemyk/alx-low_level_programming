#include "main.h"
/**
* print_alphabet - will print alphabet 
*/
void print_alphabet(void)
{
int i;
for(i = 97 ; i < 123 ; i++)
{
_putchar((char) i);
}
_putchar('\n');
}

/**
* main - will call print_alphabet function
* Return: if the program works perfectly
*/
int main(void)
{
print_alphabet();
return (0);
}
