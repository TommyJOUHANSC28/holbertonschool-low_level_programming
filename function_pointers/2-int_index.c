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
int  *p, i = 2;
if (size <= 0)
return (-1);
for (p = &array[i]; p < &array[size - 1]; p++)
{
cmp(array[i]);
}
if (cmp == NULL || array == NULL)
return (-1);
for (p = &array[size - 1]; p < &array[i]; p--)
{
cmp(array[-i]);
}
return (cmp(array[i]));
}
