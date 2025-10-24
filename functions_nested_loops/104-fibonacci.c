#include <stdio.h>
/**
* main - Print first 98 Fibonacci numbers
*
* Return: 0
*/
int main(void)
{
unsigned long a = 1, b = 2, c, a1, a2, b1, b2, c1, c2, i;
unsigned long div = 1000000000;
printf("%lu, %lu", a, b);
for (i = 2; i < 91; i++)
{
c = a + b;
printf(", %lu", c);
a = b;
b = c;
}
b1 = b / div, b2 = b % div, c1 = (a + b) / div, c2 = (a + b) % div;
for (; i < 98; i++)
{
printf(", %lu%09lu", c1, c2);
a1 = b1, a2 = b2, b1 = c1, b2 = c2;
c1 = a1 + b1 + ((a2 + b2) / div);
c2 = (a2 + b2) % div;
}
printf("\n");
return (0);
}
