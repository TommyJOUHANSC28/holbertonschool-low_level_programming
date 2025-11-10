#include "main.h"
#include <stdlib.h>
/**
* alloc_grid - A function that returns a pointer to a 2D array of integers
* @width: interger width
* @height: interger height
*
* Return: NULL
*/
int **alloc_grid(int width, int height)
{
int **grid;
int i;
grid = (int **)malloc(width * sizeof(int *));
for (i = 0; i < width; i++)
{
grid[i] = (int *)malloc(height * sizeof(int));
}
return (grid);
}
