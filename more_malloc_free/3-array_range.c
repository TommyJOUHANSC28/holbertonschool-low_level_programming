#include "main.h"
#include <stdlib.h>
/**
* *array_range -  a function that creates an array of integers
* @min: interger min
* @max: interger max
* Return: NULL if min > max
*/
int *array_range(int min, int max)
{
int i;
int *ptr;
if (min > max)
{
return (NULL);
}
ptr = malloc(sizeof(int) * (max - min + 1));
if (ptr == NULL)
{
return (NULL);
}
i = 0;
while (min <= max)
{
ptr[i] = min;
min++;
i++;
}
return (ptr);
}
