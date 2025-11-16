#include <stdio.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
/**
* mult_alloc - Multiply two integers with malloc
* @a: first integer
* @b: second integer
* Return: pointer to result (int), or NULL if malloc fails
*/
long  *mult_alloc(long  a, long  b)
{
long *res;
res = malloc(sizeof(long));
if (res == NULL)
return (NULL);
*res = a * b;
return (res);
}
/**
* main - Check the code
* @argc: number of arguments
* @argv: arguments
* Return: Nothing
*/
int main(int argc, char **argv)
{
long int *p;

if (argc != 3)
{
printf("Error\n");
exit(98);
}
p = mult_alloc(atoi(argv[1]), atoi(argv[2]));
if (p == NULL)
{
printf("Error\n");
exit(98);
}
else
{
printf("%ld\n", *p);
free(p);
return (0);
}
}
