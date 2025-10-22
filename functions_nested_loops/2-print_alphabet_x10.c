#include "main.h"
#include <stdio.h>
/**
* print_alphabet_x10 - Prints the alphabet 10 times in lowercase
*
* This function uses _putchar to print the alphabet
* from 'a' to 'z' ten times, each time on a new line.
*/
void print_alphabet_x10(void)
{
int letter, counter = 0;
while (counter < 10)
{
for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
}
counter++;
_putchar('\n');
}
}
