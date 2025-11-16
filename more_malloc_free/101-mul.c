#include <stdio.h>
#include <math.h>
#include <stdlib.h>
/**
* mult_alloc - Multiply two integers with malloc
* @a: first integer
* @b: second integer
* Return: pointer to result (int), or NULL if malloc fails
*/
int *mult_alloc(int a, int b)
{
int *res;
res = malloc(sizeof(int));
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
int *p;
if (argc != 3)
{
fprintf(stderr, "Error: Usage %s numero 1 numuro 2\n", argv[0]);
exit(98);
}
p = mult_alloc(atoi(argv[1]), atoi(argv[2]));
if (p == NULL)
{
fprintf(stderr, "Error: malloc failed\n");
exit(98);
}
printf("%d\n", *p);
free(p);
return (0);
}
