#include "holberton.h"
/**
 * swap_int - main function
 * @a: integer
 * @b: integer
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	char x = *a;
	*a = *b;
	*b = x;
}
