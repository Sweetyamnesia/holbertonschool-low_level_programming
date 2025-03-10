#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* alloc_grid - function that returns a pointer to a 2 dimensional array.
* @width: the width of the grid.
* @height: the height of the grid.
* Return: NULL if width or height is negative or equal to 0.
*/

int **alloc_grid(int width, int height)
{
int w = 0;
int h = 0;
int **grid = (int **)malloc(sizeof(int *) * height);
if (grid == NULL)
return (NULL);
for (h = 0; h < height; h++)
{
grid[h] = (int *)malloc(sizeof(int) * width);
if (grid[h] == NULL)
{
for (w = 0; w < h; w++)
{
free(grid[w]);
}
free(grid);
return (NULL);
}
}
return (grid);
}
