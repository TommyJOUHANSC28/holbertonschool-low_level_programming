#include "main.h"
#include <stdlib.h>
/**
* _strdup -  function returns a pointer to a new string
* which is a duplicate of the string str
* @str: charactere
* Return: 0
*/
char *_strdup(char *str)
{
int i, r;
char *s2;
if (str == NULL)
{
return (NULL);
}
for (i = 0; str[i] != '\0'; i++)
s2 = malloc(sizeof(char) * (i + 1));
if (s2 == NULL)
return (NULL);
for (r = 0; str[r]; r++)
{
s2[r] = str[r];
}
return (s2);
}
