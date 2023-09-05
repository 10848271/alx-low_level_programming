#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees a 2d array created
 * @grid: a 2D array to free
 * @height: height of array
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
