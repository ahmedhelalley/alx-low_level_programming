#include "main.h"
/**
 * free_grid - sdkj ijiodsj ivcvionsd
 * @grid: 2d array
 * @height: height of array
*/
void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; i++)
		free(grid[i]);
	free(grid);
}
