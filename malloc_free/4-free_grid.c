#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* free_grid - function that frees a 2 dimensional grid from last function.
* @grid: the pointer to the grid.
* @height: the height of the grid.
* Return: NULL if width or height is negative or equal to 0.
*/

void free_grid(int **grid, int height)
{
int h = 0;
if (grid == NULL)
return;
for (h = 0; h < height; h++)
{
free(grid[h]);
}
free(grid);
}
