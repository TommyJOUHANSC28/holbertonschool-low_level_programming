#include "main.h"
/**
* puts2 - A function that prints every other character of a string
* @str: The string to print every other character of a string
*
* Return: Nothing
*/
void puts2(char *str)
{
while (*str)
{
_putchar(*str);
str++;
}
str = '\0';;
}
