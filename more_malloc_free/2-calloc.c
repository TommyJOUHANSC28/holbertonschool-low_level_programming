#include <stdlib.h>
#include "main.h"
/**
* _calloc - A function allocates memory for an array
* @nmemb: interger elements
* @size: interger size each and returns a pointer to the allocated memory
* Return: NULL If nmemb or size is 0
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int count;
char *ptr;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
ptr = malloc(nmemb * size);
if (ptr == NULL)
{
return (NULL);
}
count = 0;
while (count < (nmemb * size))
{
ptr[count] = 0;
count++;
}
return (ptr);
}
