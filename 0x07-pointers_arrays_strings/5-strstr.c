#include "main.h"
/**
* _strpbrk - will search for needle in haystack
* @haystack:the array that we search for needle in
* @needle:substring
* Return: the starter point of substring match
*/
char *_strstr(char *haystack, char *needle)
{
char *p;
int i;
i = 0;
while (*haystack != '\0')
{
i = 0;
while (*(haystack + i) == *(needle + i) && *(needle + i) != '\0')
{
i++;
}
if (*(needle + i) == '\0')
return (haystack);
haystack++;
}
return (NULL);
}
