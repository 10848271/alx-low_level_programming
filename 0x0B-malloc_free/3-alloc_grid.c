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
	int *inner, **outer, i = 0, j = 0;

	if (width <= 0 || height <= 0)
		return (NULL);
	inner = malloc(width * sizeof(int));
	if (inner == NULL)
		return (NULL);
	outer = malloc(height * sizeof(inner));
	if (outer == NULL)
		return (NULL);
	while (j < height)
	{
		while (i < width)
		{
			inner[i] = 0;
			i++;
		}
		outer[j] = inner;
		j++;
		inner = malloc(width * sizeof(int));
	}

	return (outer);
}
