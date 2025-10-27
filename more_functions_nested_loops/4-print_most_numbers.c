#include "main.h"
/**
* _print_most_numbers - This fonction to display the numbers 0 to 9,
* As well as the numbers 2 and 4.
* Return: Always 0.
*/
void print_most_numbers(void)
{
int c;
for (c = 0; c <= 9; c++)
{
if (c != 2 && c != 4)
_putchar(c + '0');
}
_putchar('\n');
return;
}
