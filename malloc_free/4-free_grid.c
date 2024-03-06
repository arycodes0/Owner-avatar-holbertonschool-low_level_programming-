#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a 2d grid
 * @grid: Pointer to pointer array
 * @height: Size of the grid
 * Return: The number of free cells in the grid
 */
void free_grid(int **grid, int height)
{
	int idx;
	for (idx = 0; idx < height; idx++)
		free(grid[idx]);
	free(grid);
}
