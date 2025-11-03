#include "main.h"
#include <unistd.h>
#include <string.h>
/**
* _strstr - Locate a substring
* @haystack: The string to search in
* @needle: The substring to find
*
* Return: Pointer to the beginning of the located substring,
* or NULL if the substring is not found.
*/
char *_strstr(char *haystack, char *needle)
{
int i, j;
i = 0;
if (*needle == '\0')
return (haystack);
while (haystack[i] != '\0')
{
j = 0;
while (haystack[i + j] == needle[j])
{
j++;
if (needle[j] == '\0')
return (&haystack[i]);
}
i++;
}
return (NULL);
}
