#include "dog.h"
#include <stdlib.h>
/**
* free_dog - a function that frees dogs
* @d: pointer of struct dog_t
* Return: value of free dog
*/
void free_dog(dog_t *d)
{
free(d);
}
