#include "main.h"
/**
 * _strcat - Concatenates two strings
 * @dest: Destination string
 * @src: Source string
 *
 * Return: Pointer to the resulting string `dest`
 */
char *_strcat(char *dest, char *src)
{
char *temp = dest;
while (*dest)
dest++;
while (*src)
*dest++ = *src++;
*dest = '\0';
return (temp);
}
