#include "main.h"
/**
 * print_rev - Prints a string in reverse followed by a newline
 * @s: The string to reverse
 */
void print_rev(char *s)
{
if (*s)
{
print_rev(s + 1);
_putchar(*s);
}
return;
}
