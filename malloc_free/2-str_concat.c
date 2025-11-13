#include "main.h"
#include <stdlib.h>
#include <string.h>
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
size_t len1 = strlen(s1);
size_t len2 = strlen(s2);
char *result = malloc(len1 + len2 + 1);
memcpy(result, s1, len1);
memcpy(result + len1,  s2, len2 + 1);
return (result);
}
