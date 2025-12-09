#include <stdlib.h>
#include "main.h"
/**
*free_grid - free a 2 dimensional grid previously created
*@grid: pointer to pointer to grid
*@height: height of the grif
*Return: nothing
*/
void free_grid(int **grid, int height)
{
	int h;

	for (h = 0; h < height; h++)
	{
		free(grid[h]);
	}
	free(grid);

}
