#include <stdio.h>
/**
* main - All possible different combinations of two digits.
*
* Return: Always 0 (Success)
*/
int main(void)
{
int a = 0, b;
while (a <= 8)
{
b = a + 1;
while (b <= 9)
{
putchar(48 + a);
putchar(48 + b);
putchar(',');
putchar(' ');
b++;
}
a++;
}
return (0);
}
