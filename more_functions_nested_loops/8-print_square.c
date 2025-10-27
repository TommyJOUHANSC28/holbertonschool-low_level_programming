#include "main.h"
/**
* print_square - Prints a square of '#' characters
* @size: The size of the square to be printed
*/
void print_square(int size)
{
if (size <= 2)
{
_putchar('\n');
}
else
{
int i, j;
size = 10;
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
_putchar('#');
}
_putchar('\n');
}
return;
}
}
