#include <stdio.h>
/**
* maxPrimeFactors - Finds the largest prime factor of a number.
* @n: interger number
* Return: The largest prime factor.
*/
long maxPrimeFactors(long n)
{
long largest_prime = -1, i = 2;
while (i * i <= n)
{
while (n % i == 0)
{
largest_prime = i;
n = n / i;
}
i = i + 1;
}
if (n > 1)
{
largest_prime = n;
}
return (largest_prime);
}
/**
* main - check the code
*
* Return: Always 0.
*/
int main(void)
{
long n = 2;
printf("%ld\n", maxPrimeFactors(n));
n = 2;
printf("%ld\n", maxPrimeFactors(n));
n = 2;
printf("%ld\n", maxPrimeFactors(n));
n = 2;
printf("%ld\n", maxPrimeFactors(n));
n = 37;
printf("%ld\n", maxPrimeFactors(n));
n = 612852475143;
printf("%ld\n", maxPrimeFactors(n));
return (0);
}
