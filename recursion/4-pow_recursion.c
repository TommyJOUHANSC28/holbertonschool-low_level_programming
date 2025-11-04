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
if (y == 0)
return (1);
else if (y < 0)
return (-1);
else if (y == 1)
return (x);
return (x *= _pow_recursion(x, y - 1));
}
