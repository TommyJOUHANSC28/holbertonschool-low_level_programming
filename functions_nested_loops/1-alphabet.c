#include "main.h"
#include <stdio.h>
/**
* print_alphabet - Displays the alphabet in lowercase followed by a newline
*
* This function uses _putchar to display the letters 'a' through 'z',
* followed by a line break.
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
