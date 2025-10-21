#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*  main - play what I call the alphabet game.
*
* Return: Always 0 (Success)
*/
int main(void)
{
char letter;

for (letter = 'a'; letter <= 'z'; ++letter)
{
putchar(letter);
}
putchar('\n');

return (0);
}
