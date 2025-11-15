#include <stdio.h>
#include <math.h>
#include <stdlib.h>
/**
* main - Check the code
* @argc: number of arguments
* @argv: arguments
* Return: Nothing
*/
int main(int argc, char **argv)
{
int numero1, numero2, resultat;
if (argc != 3)
{
printf("Error\n");
exit(98);
}
else
{
numero1 = atoi(argv[1]);
numero2 = atoi(argv[2]);
resultat = numero1 * numero2;
printf("%d\n", resultat);
return (0);
}
}
