#include "main.h"
#include <stdlib.h>
/**
* **strtow - a function that splits a string into words
* @str: string into words
* Return: Null if str == NULL or str == ""
*/
char **strtow(char *str)
{
int i = 0, j = 0, k, len, wc = 0, in = 0;
char **w = malloc((wc + 1) * sizeof(char *));;
if (!str || !*str)
return (NULL);
while (str[i])
{
if (str[i] != ' ' && !in)
wc++, in = 1;
else if (str[i++] == ' ' && in)
in = 0;
}
i = 0, j = 0, in = 0;
while (str[i])
{
if (str[i] != ' ')
{
if (!in)
{
len = 0;
while (str[i + len] && str[i + len] != ' ')
len++;
w[j] = malloc(len + 1);
if (!w[j])
{
while (j--)
free(w[j]);
free(w);
return (NULL);
}
for (k = 0; k < len; k++)
w[j][k] = str[i + k];
w[j++][k] = '\0';
in = 1;
}
i++;
}
else
in = 0, i++;
}
w[j] = NULL;
return (w);
}


