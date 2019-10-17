#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * malloc_checked - main function
 * @b: the int
 * Return: 0
 */
void *malloc_checked(unsigned int b)

{

	void *cheese;

	cheese = malloc(b);
	if (cheese == NULL)
	{
		exit(98);
	}
	else
	return (cheese);
}
