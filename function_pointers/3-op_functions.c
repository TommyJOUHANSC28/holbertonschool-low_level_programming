#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - Additionne deux entiers
 * @a: premier entier
 * @b: deuxième entier
 * Return: la somme de a et b
 */
int op_add(int a, int b)
{
return (a + b);
}
/**
 * op_sub - soustrait deux entiers
 * @a: premier entier
 * @b: deuxième entier
 * Return: la soustration de a et b
 */
int op_sub(int a, int b)
{
return (a - b);
}
/**
 * op_mul - multiplie deux entiers
 * @a: premier entier
 * @b: deuxième entier
 * Return: la multiplication de a et b
 */
int op_mul(int a, int b)
{
return (a * b);
}
/**
 * op_div - Divise deux entiers
 * @a: premier entier
 * @b: deuxième entier
 * Return: la division de a et b
 */
int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a / b);
}
/**
 * op_mod - Module deux entiers
 * @a: premier entier
 * @b: deuxième entier
 * Return: la modulation de a et b
 */
int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}
