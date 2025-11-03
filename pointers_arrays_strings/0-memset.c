#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* _memset - fills memory with a constant byte
* @s: pointer to the memory area
* @b: the byte to fill with
* @n: number of bytes to fill
*
* Return: pointer to the memory area s
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int index;
for (index = 0; n > 0; index++)
{
s[index] = b;
n--;
}
return (s);
}
