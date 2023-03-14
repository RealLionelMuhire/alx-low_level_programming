#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - free the memory allocated on the grid
 * @grid: a pointer to the grid
 * @height: the height of the grid memory to be freed
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
