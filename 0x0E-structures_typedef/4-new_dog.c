#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* new_dog - will create new dog_t type with paramater
* @name: the name of dog as string
* @owner: the owner of dog as float
* @age: the age of dog as string
* Return: new dog_t pointer
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *d;
char *new_name, *new_owner;
d = malloc(sizeof(dog_t));

if (d  == NULL)
return (NULL);

new_name = strdup(name);
if (new_name == NULL)
{
free(new_name);
return (NULL);
}

new_owner = strdup(owner);
if (new_owner == NULL)
{
free(new_name);
free(d);
return (NULL);
}

d->name = new_name;
d->age = age;
d->owner = new_owner;

return (d);
}
