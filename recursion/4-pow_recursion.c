#include "main.h"
#include <stdio.h>
/**
* _pow_recursion - Function that returns the value of x raised to the pow of y
* @x: integer x
* @y: interger y
*
* Return: value of the input number x and y
*/
int _pow_recursion(int x, int y)
{
int res = 1;
while (y > 0)
{
if (y & 1)
res = res * x;
y = y >> 1;
x = x * x; 
}
return (res);
}
