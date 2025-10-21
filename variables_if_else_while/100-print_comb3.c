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
if (!(a == 8 && b == 9))
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
