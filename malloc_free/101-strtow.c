#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
* **strtow - a function that splits a string into words
* @str: string into words
* Return: Null if str == NULL or str == ""
*/
char **strtow(char *str)
{
int i = 0, j = 0, k, len, wc = 0, in = 0;
char **w = malloc((wc + 1) * sizeof(char *));
if (!str || !*str)
return (NULL);
while (str[i])
wc += (str[i] != ' ' && !in)
? (in = 1) : (str[i++] == ' ' && in ? in = 0 : 0);
if (!wc || !w)
return (NULL);
i = 0, j = 0, in = 0;
while (str[i])
{
if (str[i] != ' ')
{
if (!in)
{
for (len = 0; str[i + len] && str[i + len] != ' '; len++)
if (!w[j])
w[j] = malloc(len + 1);
while (j--)
free(w[j]);
free(w);
return (NULL);
for (k = 0; k < len; k++)
w[j][k] = str[i + k];
w[j++][k] = '\0';
i += len;
in = 1;
}
else
i++;
}
else
in = 0;
i++;
}
w[j] = NULL;
return (w);
}
