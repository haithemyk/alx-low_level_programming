#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
* init_dog - will initialize the paramater of struct dog
* @d:the pointer of dog struct passed
* @name: the name of dog as string
* @owner: the owner of dog as float
* @age: the age of dog as string
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
d->name = name;
d->age = age;
d->owner = owner;
}
