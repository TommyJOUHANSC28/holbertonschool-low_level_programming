#include "main.h"
#include <stdio.h>
/**
* print_array - Displays n elements of an integer array
* @a: integer array to display
* @n: number of array elements to display
*
* This function displays the first n elements of array a,
* separated by a comma and a space.
*/
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i < n - 1)
printf(", ");
}
printf("\n");
}
