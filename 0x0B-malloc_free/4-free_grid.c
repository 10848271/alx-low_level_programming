#include <stdlib.h>

/**
 * free_grid - is to free 2d arrary space
 * @grid: 2d to be freed
 * @height: row used
 *
 * Return: void
 *
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
