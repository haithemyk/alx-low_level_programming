#include<stdio.h>
/**
*main-this program will print sentence mentioned down.
*Return:just to indicate the success or failure of program.
*/
int main(void)
{
 printf("Size of a char: %lu byte(s)\n",sizeof(char));
 printf("Size of an int: 4 byte(s)\n",sizeof(int));
 printf("Size of a long int: 4 byte(s)\n",sizeof(long int));
 printf("Size of a long long int: 8 byte(s)\n",sizeof(long long int));
 printf("Size of a float: 4 byte(s)\n",sizeof(float));
return (0);
}
