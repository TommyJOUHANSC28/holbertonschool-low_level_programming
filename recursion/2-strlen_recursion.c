#include "main.h"
#include <stdio.h>
/**
* _strlen_recursion -  that returns the length of a string
* @s: char arg
*
* Return: void
*/
int _strlen_recursion(char *s)
{
if (!*s)
{
return (0);
}
return (1 + _strlen_recursion(s + 1));
}
