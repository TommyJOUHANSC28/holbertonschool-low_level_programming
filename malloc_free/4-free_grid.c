#include "main.h"
#include <stdlib.h>
/**
* free_grid - Frees a 2D array previously allocated by alloc_grid
 * @grid: Pointer to the 2D array
 * @height: Number of rows in the array
 *
 * This function releases the memory allocated for a 2D grid.
 */
void free_grid(int **grid, int height)
{
int i;
if (grid == NULL)
return;
for (i = 0; i < height; i++)
{
return (free_grid(grid[i]));
}
return (free_grid(grid));
}
