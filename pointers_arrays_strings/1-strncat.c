#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* _strncat - A fontion that concatenates two strings
* @dest: an input string
* @src: an input string
* @n: an input integer
*
* Return: A pointer to the resulting string
*/
char *_strncat(char *dest, char *src, int n)
{
int dest_len = strlen(dest);
int i;
for (i = 0 ; i < n && src[i] != '\0' ; i++)
dest[dest_len + i] = src[i];
dest[dest_len + i] = '\0';
return (dest);
}
