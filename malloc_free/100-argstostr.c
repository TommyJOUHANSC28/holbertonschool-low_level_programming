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
int counter1, counter2, counter3 = 0;
char *strTemp;
if (ac == 0 || av == NULL)
{
return (NULL);
}
for (counter1 = 0; counter1 < ac; counter1++)
{
for (counter2 = 0; av[counter1][counter2] != '\0'; counter2++, counter3++)
{
;
}
}
strTemp = malloc(sizeof(char) * (counter3 + ac + 1));
if (strTemp == NULL)
{
return (NULL);
}
for (counter1 = 0, counter3 = 0; counter1 < ac; counter1++)
{
for (counter2 = 0; av[counter1][counter2] != '\0'; counter2++, counter3++)
{
strTemp[counter3] = av[counter1][counter2];
}
strTemp[counter3] = '\n';
counter3++;
}
return (strTemp);
}
