#include <stdio.h>
/**
* main - Function to find the largest prime factor of a positive
* @n: interger number
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
int main(void)
{
long n = 1231952;
printf("%ld\n", maxPrimeFactors(n));
n = 612852475143;
printf("%ld\n", maxPrimeFactors(n));
return (0);
}
