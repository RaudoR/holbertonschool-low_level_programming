#include "holberton.h"
#include <stdio.h>
/**
 * print_array - main function
 * @a: first integer
 * @b: second integer
 * Return: 0
 */
void print_array(int *a, int n)
{
	int c;

	for (c = 0; c < n; c++)
	{
		printf("%d", a[c]);
		if (c < (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
