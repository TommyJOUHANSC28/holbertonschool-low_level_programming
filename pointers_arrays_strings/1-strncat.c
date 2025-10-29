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
int strncat = 0, i = 0;
char *temp = dest, *star = src;
while (*src)
{
strncat++;
src++;
}
while (*dest)
dest++;
if (n > strncat)
{
n = strncat;
src =  star;
}
for (; i < n; i++)
{
*dest++ = '\0';
}
return (temp);
}
