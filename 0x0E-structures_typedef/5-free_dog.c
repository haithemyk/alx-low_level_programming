#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
* free_dog - will free the dog d.
* @d:the pointer of dog struct passed
*/
void free_dog(dog_t *d)
{
if (d == NULL)
return;
free(d->name);
free(d->owner);
free(d);
}
