#include <stdlib.h>
#include "main.h"

/**
* alloc_grid - retunrs pointer to 2D array if integers
* @width: width of the grid
* @height: height of the grid
* Return: pointer to 2D array, or NULL if width or heigth is 0 or negative
*/
int **alloc_grid(int width, int height)

{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = (int **)malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			while (i > 0)
			{
				free(grid[--i]);
			}
			free(grid);
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}

	return (grid);
}
