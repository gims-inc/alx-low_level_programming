#include "main.h"

/**
 * alloc_grid - create a 2d integer grid using malloc.
 * Description: Each element of the grid should be initialized to 0.
 * @width: int size width
 * @height: int size height
 * Return: Pointer to new grid
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int count, drawgrid;

	if (width + height < 2 || width < 1 || height < 1)
		return (NULL);

	grid = malloc(height * sizeof(*grid));
	if (grid == NULL)
		return (NULL);

	for (count = 0; count < height; count++)
	{
		grid[count] = malloc(width * sizeof(**grid));
		if (grid[count] == NULL)
		{
			for (count--; count >= 0; count--)
				free(grid[count]);
			free(grid);
			return (NULL);
		}
		for (drawgrid = 0; drawgrid < width; drawgrid++)
			grid[count][drawgrid] = 0;
	}

	return (grid);
}
