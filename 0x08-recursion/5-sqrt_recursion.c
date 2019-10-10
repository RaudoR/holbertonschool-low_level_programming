#include "holberton.h"
/**
 * _sqrt_recursion - main function
 * @n: paramater
 * Return: 0, 1, -1
 */
int _sqrt_recursion(int n)

{

	if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (square(n, 1));
}

/**
 * square - secondary function
 * @n: number
 * @c: increment
 * Return: -1
 */

int square(int n, int c)

{

	if (n == (c * c))
		return (c);
	else if (n > (c * c))
		return (square(n, c + 1));
	else
		return (-1);
}
