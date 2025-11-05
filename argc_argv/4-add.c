#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* main -  A program that multiplies two numbers
* @argc: Number of arguments
* @argv: Array of arguments
* Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
int i, sum = 0;
for (i = 1; i < argc; i++)
{
sum += atoi(argv[i]);
}
printf("%d\n", sum);
return (0);
}
