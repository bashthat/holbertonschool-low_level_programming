#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - frees 2d grid
 * @grid: grid location
 * @height: ya know
 * Return: ruturns pointer or null
 */
void free_grid(int **grid, int height)
{
int q;

for (q = 0; q < height; q++)
	free(grid[q]);
	free(grid);
}
