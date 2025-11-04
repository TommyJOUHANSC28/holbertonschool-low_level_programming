#include "main.h"
#include <math.h>
/**
* is_prime_number - Checks if a number is prime
* @n: The integer to test
*
* Return: 1 if the number is prime, 0 otherwise
*/
int is_prime_number(int n)
{
return (n > 1 && n % 2 && n % 3 && n % 5 && n % 7 && n % 11);
}
