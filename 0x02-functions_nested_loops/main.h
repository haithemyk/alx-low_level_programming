#include<stdio.h>
#ifndef MAIN_H
#define MAIN_H
void putschar(void)
{
putchar('_');
putchar('p');
putchar('u');
putchar('t');
putchar('c');
putchar('h');
putchar('a');
putchar('r');
putchar('\n');
}
void print_alphabet(void);
{
  int i;
for(i = 97; i < 123; i++)
{
putchar((char) i);
}
putchar('\n');
}
#endif /* MAIN_H */
