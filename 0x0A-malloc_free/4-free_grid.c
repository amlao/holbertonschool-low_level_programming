#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid previously created by alloc_grid
 * @grid: grid to free
 * @height: height of grid
 */
void free_grid(int **grid, int height)
{
	int counter = 0;

	if ((height = '\0') || (grid = NULL))
		return;
	else
		for (counter = 0; counter < height; counter++)
			free(grid[counter]);
	free(grid);
}
