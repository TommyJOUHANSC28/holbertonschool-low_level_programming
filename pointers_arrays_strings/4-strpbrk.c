#include "main.h"
#include <string.h>
/**
* _strpbrk - a function that searches a string for any of a set of bytes
* @s: The string to analyze
* @accept: The character to search
* Return: A pointer to the first occurrence of c in s, or NULL if not found
*/
char *_strpbrk(char *s, char *accept)
{
int i, j;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
return (&s[i]);
}
}
return (NULL);
}