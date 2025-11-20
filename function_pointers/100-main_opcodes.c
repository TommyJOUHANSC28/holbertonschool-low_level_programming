#include "function_pointers.h"
#include "3-calc.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>
/**
* main - A program that prints the opcodes of its own main function
* @argc: the number of args
* @argv: argument vector
* Return: Always 0.
 */
int main(int argc, char **argv)
{
int i;
if (argc != 2)
{
printf("Error\n");
exit(1);
}
if (atoi(argv[1]) < 0)
{
printf("Error\n");
exit(2);
}
while (i < atoi(argv[1]))
{
printf("%x", *((unsigned char *)main + i));
i++;
if (i < atoi(argv[1]))
putchar(' ');
}
putchar('\n');
return (0);
}
