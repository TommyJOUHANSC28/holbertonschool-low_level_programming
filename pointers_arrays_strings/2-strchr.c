#include "main.h"
#include <string.h>
/**
* _strchr - Searches for the first occurrence of a character in a string
* @s: The string to analyze
* @c: The character to search
* Return: A pointer to the first occurrence of c in s, or NULL if not found
*/
char *_strchr(char *s, char c)
{
while (s[0] != '\0')
{
if (s[0] == c)
return (s);
else if (s[1] == c)
return (s + 1);
s++;
}
return (s + 1);
}
