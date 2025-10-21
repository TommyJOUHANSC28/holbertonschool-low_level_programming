#include <stdio.h>
/**
* main - All possible different combinations of three digits.
*
* Return: Always 0 (Success)
*/
int main(void)
{
int a = 0, b, c;
while (a <= 7)
{
b = a + 1;
while (b <= 8)
{
c = b + 1;
while (c <= 9)
{
putchar(48 + a);
putchar(48 + b);
putchar(48 + c);
if (!(a == 7 && b == 8 && c == 9))
{
putchar(',');
putchar(' ');
}
c++;
}
b++;
}
a++;
}
putchar('\n');
return (0);
}
