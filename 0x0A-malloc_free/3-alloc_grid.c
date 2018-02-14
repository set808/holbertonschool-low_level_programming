#include <stdlib.h>
#include "holberton.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of array
 * @height: height of array
 *
 * Return: returns a pointer to 2 dimensional array. Returns NULL on failure.
 */

int **alloc_grid(int width, int height)
{
	int x, y;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * width);
	if (grid == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < width; x++)
	{
		grid[x] = malloc(sizeof(int) * height);
		if (grid[x] == NULL)
		{
			return (NULL);
		}
	}

	for (x = 0; x < width; x++)
	{
		for (y = 0; y < height; y++)
		{
			grid[x][y] = 0;
		}
	}
	return (grid);
}
