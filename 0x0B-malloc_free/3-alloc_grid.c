#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * **alloc_grid - main function
 * @width: int
 * @height: int
 * Return: 0
 */

int **alloc_grid(int width, int height)

{

	int **betty;
	int a;
	int e = 0;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	betty = malloc(height * sizeof(int *));
	if (betty == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < height; a++)
	{
		betty[a] = malloc(width * sizeof(int));
		if (betty[a] == NULL)
		{
			for (e = 0; e < a; e++)
				free(betty[e]);
			free(betty);
			return (NULL);
		}
		for (e = 0; e < width; e++)
		{
			betty[a][e] = 0;
		}
	}
	return (betty);
}
