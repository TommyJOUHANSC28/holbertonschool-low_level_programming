#include "main.h"
#include <stdlib.h>
/**
* **strtow - a function that splits a string into words
* @str: string into words
* Return: Null if str == NULL or str == ""
*/
char **strtow(char *str)
{
int i = 0, j = 0, k, wc = 0, in_word = 0, len = 0;
char **words;
if (!str || !*str)
return (NULL);
while (str[i])
{
if (str[i] != ' ' && !in_word)
wc++, in_word = 1;
else if (str[i] == ' ')
in_word = 0;
i++;
}
if (wc == 0)
return (NULL);
words = malloc(sizeof(char *) * (wc + 1));
if (!words)
return (NULL);
i = 0, in_word = 0;
while (str[i])
{
if (str[i] != ' ' && !in_word)
{
for (len = 0; str[i + len] && str[i + len] != ' '; len++)
words[j] = malloc(len + 1);
if (!words[j])
{
while (j--)
free(words[j]);
free(words);
return (NULL);
}
for (k = 0; k < len; k++)
words[j][k] = str[i + k];
words[j++][k] = '\0';
i += len;
in_word = 1;
}
else
in_word = (str[i] != ' ') ? 1 : 0;
i++;
}
words[j] = NULL;
return (words);
}

