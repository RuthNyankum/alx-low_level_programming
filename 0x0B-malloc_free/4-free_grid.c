#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* free_grid - a function that frees a 2 dimensional grid
* @grid: 2d grid
* @height: height
* Return: 0
*/

void free_grid(int **grid, int height)
{
int t;

for (t = 0; t < height; t++)
free(grid[t]);
free(grid);
}
