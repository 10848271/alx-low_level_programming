#include <stdlib.h>

/**
 * alloc_grid - allocates a 2d array
 * @width: column
 * @height: row
 *
 * Return:
 *	pointer to 2d array if successful
 *	NULL if not successful
 *
 */

int **alloc_grid(int width, int height)
{
	int **arr;

	int i, j;

	if (height <= 0)
		return (NULL);

	arr = (int **)malloc(height * sizeof(arr));

	if (!arr)
	{
		free(arr);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		arr[i] = (int *)malloc(width * sizeof(int));
		if (!arr[i])
		{
			for (j = 0; j <= i; j++)
				free(arr[j]);
			free(arr);
			return (NULL);
		}

		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	}
	return (arr);
}
