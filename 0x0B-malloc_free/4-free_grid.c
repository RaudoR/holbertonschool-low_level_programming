#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - function
 * @grid: point
 * @height: int
 * Return: 0
 */

void free_grid(int **grid, int height)

{

	int a;

	if (grid == NULL || grid == 0)
	{
		return;
	}
	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}
	free(grid);
}
