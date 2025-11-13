#include "dog.h"
#include <stdlib.h>
/**
* *new_dog - a function that creates a new dog
* @name: string name
* @age: float age
* @owner: string owner
* Return: NULL if the function fails
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *newDog = malloc(sizeof(dog_t));
int len_name = 0, len_owner = 0, i;
if (!newDog)
return (NULL);
while (name[len_name])
len_name++;
while (owner[len_owner])
len_owner++;
newDog->name = malloc(len_name + 1);
if (!newDog->name)
{
free(newDog);
return (NULL);
}
newDog->owner = malloc(len_owner + 1);
if (!(newDog->owner))
{
free(newDog->name);
free(newDog);
return (NULL);
}
for (i = 0; i <= len_name; i++)
newDog->name[i] = name[i];
for (i = 0; i <= len_owner; i++)
newDog->owner[i] = owner[i];
newDog->age = age;
return (newDog);
}
