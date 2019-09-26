#include "holberton.h"
#include <stdio.h>
/**
 * _abs - main function
 * @c: integer
 * Return: 0
 */
int _abs(int c)
{
	if (c > 0 || c == 0)
	{
		return (c);
	}
	else
		return (c * -1);
}
