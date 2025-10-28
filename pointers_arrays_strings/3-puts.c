#include "main.h"
/**
 * _puts - Prints a string followed by a newline
 * @str: The string to print
 *
 * Return: Nothing
 */
void _puts(char *str)
{
while (*str)
{
_putchar(*str);
str++;
}
_putchar('\n');
}
