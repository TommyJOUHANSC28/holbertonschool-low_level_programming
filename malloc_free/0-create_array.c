#include "main.h"
#include <stdlib.h>
/**
* *create_array -  function that creates an array of chars
* and initializes it with a specific char
* @size: interger for size
* @c: charactere c
* Return : NUll is null = 0.
* Return: value of pointer to array
*/
char *create_array(unsigned int size, char c)
{
unsigned int count;
char *char1;
if (size == 0)
{
return (NULL);
}
char1 = malloc(sizeof(char) * size);
if (char1 == NULL)
{
return (NULL);
}
for (count = 0; count < size; count++)
{
char1[count] = c;
}
char1[count] = '\0';
return (char1);
}

