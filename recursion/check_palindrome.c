#include "main.h"
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
