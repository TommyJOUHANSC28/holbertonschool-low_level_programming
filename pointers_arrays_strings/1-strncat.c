#include "main.h"
#include <stdio.h>
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
int srclen = 0, i = 0;
char *temp = dest, *star = src;
while (*src)
{
srclen++;
src++;
}
while (*dest)
dest++;
if (n > srclen)
{
n = srclen;
src =  star;
}
for (; i < n; i++)
{
*dest++ = '\0';
}
return (temp);
}
