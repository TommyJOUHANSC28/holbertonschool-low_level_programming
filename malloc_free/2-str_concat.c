#include "main.h"
#include <stdlib.h>
/**
* str_concat - A function that concatenates two strings
* @s1: First string.
* @s2: Second string.
*
* Return: Pointer to a newly allocated string containing s1 followed by s2,
*         or NULL if memory allocation fails.
*/
char *str_concat(char *s1, char *s2)
{
size_t len1 = _strlen(s1);
size_t len2 = _strlen(s2);
char *result = malloc(len1 + len2 + 1);
_memcpy(result, s1, len1);
_memcpy(result + len1,  s2, len2 + 1);
return (result);
}
/**
* _strlen - Calculates the length of a string
* @s: Pointer to the string
*
* Return: Length of the string (int)
*/
int _strlen(char *s)
{
int count = 0;
while (s[count] != '\0')
count++;
return (count);
}
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
