#include "holberton.h"
/**
 * factorial - main function
 * @n: parameter
 * Return: -1, 1, or factorial
 */
int factorial(int n)

{

	if (n < 0)
		return (-1);
	if (n >= 1)
		return (n * factorial(n - 1));
	else
		return (1);
}
