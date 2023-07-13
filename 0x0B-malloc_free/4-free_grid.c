#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - a program that frees a 2d array
 * @grid: 2d grid
 * @height: height of the dimension grid
 * Return: (0) always
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
