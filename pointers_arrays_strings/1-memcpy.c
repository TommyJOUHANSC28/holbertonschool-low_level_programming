#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* _memcpy - fills memory with a constant byte
* @dest: pointer to the memory area
* @src: pointer to the memory area
* @n: number of bytes to fill
*
* Return: pointer to the memory area dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int index;
for (index = 0; n > 0; index++)
{
dest[index] = src[index];
n--;
}
return (dest);
}
