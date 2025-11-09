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
/**
* check_palindrome - a function a string is a palindrome and 0 if not
* @s: Pointeur s
* @i: interger i
* @j: interger j
* Return: always 1 or 0.
*/
int check_palindrome(char *s, int i, int j)
{
if (i >= j)
return (1);
else if (s[i] == s[j])
return (check_palindrome(s, i + 1, j - 1));
return (0);
}
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
