#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
* new_dog - will create new dog_t type with paramater
* @name: the name of dog as string
* @owner: the owner of dog as float
* @age: the age of dog as string
* Return: 
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t d;
d = malloc(sizeof(struct dog_t));
if (d  == NULL)
return NULL;
d->name = name;
d->age = age;
d->owner = owner;
}
