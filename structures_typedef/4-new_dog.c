#include "dog.h"
#include <stddef.h>
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
dog_t *newDog = malloc(sizeof(struct dog));
int length1 = 0, length2 = 0, i, j;
if (newDog == NULL)
{
return (NULL);
}
while (name[length1++] ||  owner[length2++])
newDog->name = malloc(sizeof(newDog->name) * length1);
if (newDog->name == NULL)
{
free(newDog);
return (NULL);
}
for (i = 0; i < length1; i++)
{
newDog->name[i] = name[i];
newDog->age = age;
newDog->owner = malloc(sizeof(newDog->owner) * length2);
}
if (newDog->owner == NULL)
{
free(newDog->name);
free(newDog);
return (NULL);
}
for (j = 0; j < length2; j++)
newDog->owner[j] = owner[j];
return (newDog);
}
