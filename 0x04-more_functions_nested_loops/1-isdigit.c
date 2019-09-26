#include "holberton.h"
#include <stdio.h>
/**
 * _isdigit - main function
 * @c: the integer
 * Return: 0
 */
int _isdigit(int c)

{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
		return (0);
}
