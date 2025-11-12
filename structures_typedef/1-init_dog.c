#include "dog.h"
/**
* init_dog - a function that initialize a variable of type struct dog
* @d: struct  dog
* @name: string of character name
* @age: float of age
* @owner: string of charactere owner
* Return: value of pointer to initialize a vraible of type struct dog
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
