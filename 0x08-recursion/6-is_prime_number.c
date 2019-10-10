#include "holberton.h"
/**
 * is_prime_number - main function
 * @n: parameter
 * Return: 0
 */
int is_prime_number(int n)

{

	if (n <= 1)
		return (0);
	if (n == 0)
		return (0);
	return (some_pizza(2, n));
}

/**
 * some_pizza - secondary function
 * @a: integer
 * @k: integer
 * Return: 0
 */
int some_pizza(int a, int k)

{

	if (a == k)
		return (1);
	else if (k % a == 0)
		return (0);
	else
		return (some_pizza(a + 1, k));
}
