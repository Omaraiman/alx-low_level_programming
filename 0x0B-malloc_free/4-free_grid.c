#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * free_grid - frees a 2 dimensional grid.
 *
 * Description: a function that frees a 2D grid created by alloc_grid function.
 * @grid: address of the two dimensional grid
 * @height: array height
 *
 * Return: nothing
 **/

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
	{
		return;
	}

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
