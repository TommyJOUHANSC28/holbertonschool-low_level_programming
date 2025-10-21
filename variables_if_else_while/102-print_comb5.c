#include <stdio.h>
/**
* main - All possible combinations of two two-digit numbers.
*
* Return: Always 0 (Success)
*/
int main(void)
{
int a = 0, b;
while (a <= 98)
{
b = a + 1;
while (b <= 99)
{
putchar(48 + a / 10);
putchar(48 + a % 10);
putchar(' ');
putchar(48 + b / 10);
putchar(48 + b % 10);
if (!(a == 98 && b == 99))
{
putchar(',');
putchar(' ');
}
b++;
}
a++;
}
putchar('\n');
return (0);
}
