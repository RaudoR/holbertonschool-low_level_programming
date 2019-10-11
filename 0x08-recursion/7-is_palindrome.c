#include "holberton.h"
/**
 * is_palindrome - main function
 * @s: parameter
 * Return: something
 */
int is_palindrome(char *s)

{

	int len;

	len = _strlen_recursion(s);
	if (len <= 1)
		return (1);
	return (something(s, len));
}

#include "holberton.h"
/**
 * _strlen_recursion - helper function
 * @s: parameter
 * Return: void
 */
int _strlen_recursion(char *s)

{
	if (*s == '\0')
		return (0);
	return (_strlen_recursion(s + 1) + 1);
}
/**
 * something - helper function
 * @a: parameter
 * @tank: parameter
 * Return: something
 */

int something(char *a, int tank)

{

	if (tank <= 1)
		return (1);
	else if (a[0] != a[tank - 1])
		return (0);
	else
		return (something((a + 1), (tank - 2)));
}
