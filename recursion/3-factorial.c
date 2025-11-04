#include "main.h"
#include <stdio.h>
/**
* factorial - Calculates the factorial of a non-negative integer.
*
* @n: The integer for which to compute the factorial.
* Return: The factorial of the input number n.
*/
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
if (n <= 1)
{
return (1);
}
return (n * factorial(n - 1));
}
