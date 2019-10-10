#include "holberton.h"
/**
 * _pow_recursion - main function
 * @x: paramater
 * @y: paramater
 * Return: function
 */
int _pow_recursion(int x, int y)

{

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
