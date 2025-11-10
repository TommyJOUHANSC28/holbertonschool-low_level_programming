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
int i;
char *s2;
if (str == NULL)
{
return (NULL);
}
s2 = (char *) malloc(20);
for (i = 0; str[i] != '\0'; i++)
{
s2[i] = str[i];
}
return (s2);
}
