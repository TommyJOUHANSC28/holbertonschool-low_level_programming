#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* _multiply - A function takes two integers as input and returns their product.
*
* @a: First integer
* @b: Second integer
* Return: The product of a and b
*/
int _multiply(int a, int b)
{
return (a * b);
}
/**
* main -  A program that multiplies two numbers
* @argc: Number of arguments
* @argv: Array of arguments
* Return: Always 0 (Success)
*/
int main(int argc, char **argv)
{
int num1, num2, result;
if (argc != 3)
{
printf("Error\n");
return (1);
}
else
{
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
result = _multiply(num1, num2);
printf("%d\n", result);
}
return (0);
}
