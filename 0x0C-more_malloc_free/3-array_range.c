#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * array_range - main function
 * @min: int
 * @max: int
 * Return: pointer
 */
int *array_range(int min, int max)

{

	int *s;
	unsigned int array = 0;

	if (min > max)
	{
		return (NULL);
	}
	s = malloc(sizeof(int) * (max - min + 1));
	if (s == NULL)
	{
		return (NULL);
	}
	while (min <= max)
	{
		s[array] = min;
		min++;
		array++;
	}
	return (s);
}
