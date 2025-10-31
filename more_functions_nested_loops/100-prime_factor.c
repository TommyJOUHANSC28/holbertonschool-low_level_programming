#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always largest_prime (Success)
 */
int main(void)
{
long prime = 612852475143;
long largest_prime = -1, i = 2;
while (i * i <= prime)
{
while (prime % i == 0)
{
largest_prime = i;
prime = prime / i;
}
i = i + 1;
}
if (prime > 1)
{
largest_prime = prime;
}
printf("%ld\n", largest_prime);
return (0);
}
