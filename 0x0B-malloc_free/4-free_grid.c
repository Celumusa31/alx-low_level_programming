#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - Entry point
 * @grid: Character to be checked
 * @height: Character to be checked
 *
 * Return: Always void (Success)
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
