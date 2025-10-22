#include "main.h"
#include <stdio.h>
/**
* main - Prints the alphabet, in lowercase, followed by a new line.
*
* Return: Always 0 (Success)
*/
void print_alphabet(void)
{
int letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
}
_putchar('\n');
}
