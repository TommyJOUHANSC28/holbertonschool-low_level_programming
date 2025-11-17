#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
* int_index - function that searches for an integer
* @array: array
* @size: the number of elements in the  array
* @cmp: pointer to the function to be used
* Return: -1 or the index of the first element
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (cmp == NULL || array == NULL)
return (-1);
if (size <= 0)
return (-1);
for (i = 0; i < size; i++)
if (cmp(array[i]))
return (i);
if (size == 0)
return (-1);
return (-1);
}
