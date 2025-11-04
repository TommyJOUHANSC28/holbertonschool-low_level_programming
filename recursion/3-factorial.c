#include "main.h"
#include <stdio.h>
/**
* factorial - Calculates the factorial of a non-negative integer.
* @n: The integer for which to compute the factorial.
* @return value of 'factorial'
*/
int factorial(int n)
{
if (n == 1)
{
return (1);
}
return (n * factorial(n - 1));
}
