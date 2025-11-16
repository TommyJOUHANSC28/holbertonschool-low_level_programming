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
void *mult_alloc(long long a, long long b)
{
long long *res;
res = malloc(sizeof(long long));
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
long long *p, a, b;
if (argc != 3)
{
printf("Error\n");
exit(98);
}
a = strtoll(argv[1], NULL, 10);
b = strtoll(argv[2], NULL, 10);
p = mult_alloc(a, b);
if (p == NULL)
{
printf("Error\n");
exit(98);
}
printf("%lld\n", *p);
free(p);
return (0);
}


