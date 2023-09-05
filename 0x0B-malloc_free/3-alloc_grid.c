#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - create 2D array
 * @width: width of 2D array
 * @height: height of 2D array
 *
 * Return: pointer to 2D array
 */
int **alloc_grid(int width, int height)
{
	int **outer;
	int i, j;

	if (height <= 0)
		return (NULL);
	outer = (int **)malloc(height * sizeof(outer));
	if (outer == NULL)
	{
		free(outer);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		outer[i] = (int *)malloc(width * sizeof(int));
		if (outer[i] == NULL)
		{
			for (j = 0; j <= i; j++)
				free(outer[j]);
			free(outer);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			outer[i][j] = 0;
	}
	return (outer);
}
