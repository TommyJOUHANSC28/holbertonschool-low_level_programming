#include "main.h"
/**
* reverse_array - Reverses the order of the elements in an integer array.
* @a: Array of integers to reverse
* @n: Number of elements in the array
* This function reverses the elements of the existing array.
*/
void reverse_array(int *a, int n)
{
int i = 0;
int aux;
while (i < n--)
{
aux = a[i];
a[i++] = a[n];
a[n] = aux;
}
}
