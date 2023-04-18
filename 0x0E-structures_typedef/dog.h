#ifndef DOG_H
#define DOG_H
/**
* struct dog - represents a dog with a name, age, and breed
*
* @name: name of the dog
* @age: age of the dog
* @owner: owner of the dog
*/
struct dog
{
char *name;
float age;
char *owner;
};
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif /* DOG_H */