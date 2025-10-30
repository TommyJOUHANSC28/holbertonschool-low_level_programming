#include "main.h"
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
int i = 0;
int dest_len = 0;
while (dest[dest_len])
dest_len++;
while (i < n && src[i])
{
dest[dest_len + i] = src[i];
i++;
}
dest[dest_len + i] = '\0';
return (dest);
}
