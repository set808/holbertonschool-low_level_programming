#include <stdlib.h>
#include "holberton.h"

/**
 * free_grid - frees a 2 deimensional grid previously created by alloc_grid
 * @grid: grid to be freed
 * @height: columns or rows of the grid (who knows which it actually is)
 *
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int x;

	if (grid == NULL)
		return;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}
	free(grid);
}
