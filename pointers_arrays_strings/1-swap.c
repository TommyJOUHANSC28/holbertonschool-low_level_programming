#include "main.h"
/**
* swap_int - swaps the values ​​of two integers
* @a: pointer to the first integer
* @b: pointer to the second integer
*
* This function swaps the values ​​pointed to by a and b.
*/
void swap_int(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;
return;
}
