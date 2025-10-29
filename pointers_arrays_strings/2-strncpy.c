#include <stdio.h>
#include "main.h"
/**
* _strncpy - A function that copies the string
* @dest: An input string
* @src: An input string
* @n: An input interger
* Return: A pointer to the resulting string
*/
char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];
for ( ; i < n; i++)
dest[i] = '\0';
return (dest);
}
