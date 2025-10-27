#include "main.h"
/**
* more_numbers - Prints numbers from 0 to 14 ten times
*
* This function uses _putchar to print the numbers from 0 to 14,
* ten times, each followed by a newline.
*/
void more_numbers(void)
{
int i, j = 0;
for (; j < 10; j++)
{
for (i = 0; i <= 14; i++)
{
if (i > 9)
_putchar(i / 10 + '0');
_putchar(i % 10 + '0');
}
_putchar('\n');
}
}
