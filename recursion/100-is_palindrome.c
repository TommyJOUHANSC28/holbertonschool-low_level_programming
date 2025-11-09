#include "main.h"
/**
* is_palindrome - a function a string is a palindrome and 0 if not
* @s: Pointeur s
* Return: always 1 or 0.
*/
int is_palindrome(char *s)
{
int len = _strlen_recursion(s);
if (len == 0 || len == 1)
return (0);
return (check_palindrome(s, 0, len - 1));
}
