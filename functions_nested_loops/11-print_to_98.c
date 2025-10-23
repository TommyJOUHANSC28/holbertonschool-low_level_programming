#include "main.h"
#include <stdio.h>
/**
* print_to_98 - Prints an integer with _putchar
* @n: the integer to print
*/
void print_number(int n)
{
if (n < 0)
{
_putchar('-');
n = -n;
}
if (n / 10)
print_number(n / 10);
_putchar((n % 10) + '0');
}
void print_to_98(int n)
{
int step = (n <= 98) ? 1 : -1;
for (; n != 99; n += step)
{
print_number(n);
if (n != 98)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
