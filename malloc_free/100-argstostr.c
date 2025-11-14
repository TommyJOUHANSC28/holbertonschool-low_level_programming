#include "main.h"
#include <stdlib.h>
/**
* argstostr - Concatenates all arguments
 * @ac: argument count
* @av: argument vector
* Return: Pointer to new string, or NULL if it fails
*/
char *argstostr(int ac, char **av)
{
int i, j, k, len = 0;
char *ptr;
for (i = 0; i < ac; i++)
for (j = 0; av[i][j]; j++)
len++;
ptr = malloc(sizeof(char *) * len + ac + 1);
if (ac == 0 || av == NULL)
return (NULL);
k = 0;
for (i = 0; i < ac; i++)
for (j = 0; av[i][j]; j++)
{
ptr[k++] = av[i][j];
ptr[k++] = '\n';
}
ptr[i] = '\0';
return (ptr);
}
