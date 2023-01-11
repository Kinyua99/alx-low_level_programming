#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2D array
 *  of integers
 *  @width: array width
 *  @height: array height
 *  Return: pointer to array of integers
 */
int **alloc_grid(int width, int height)
{
	int **gridout;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	gridout = malloc(height * sizeof(int *));

	if (gridout == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		gridout[i] = malloc(sizeof(int) * width);
		if (gridout[i] == NULL)
		{
			for (; i >= 0; i++)
				free(gridout[i]);
			free(gridout);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			gridout[i][j] = 0;
	return (gridout);
}
