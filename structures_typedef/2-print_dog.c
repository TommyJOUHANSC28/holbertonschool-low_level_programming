#include "dog.h"
#include <stdio.h>
/**
* print_dog - a function that prints a struct dog
* @d: struct dog
* Return print  (nil) or NULL
*/
void print_dog(struct dog *d)
{
printf("Name: %s\n", d->name);
printf("Age: %f\n", d->age);
printf("Owner: %s\n", d->owner);
}
