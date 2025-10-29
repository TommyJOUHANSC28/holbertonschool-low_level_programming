#include "main.h"
/**
 * string_toupper - Converts lowercase letters in a string to uppercase.
 * @s: Pointer to the input string.
 *
 * Return: Pointer to the modified string.
 */
char *string_toupper(char *s)
{
char *start = s;
while (*s)
{
if (*s >= 'a' && *s <= 'z')
*s = *s + ('A' - 'a');
s++;
}
return (start);
}
