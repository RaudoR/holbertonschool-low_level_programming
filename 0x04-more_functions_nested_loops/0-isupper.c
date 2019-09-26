#include "holberton.h"
/**
 * _isupper - identifies uppercase characters
 * @c: integer
 * Return: 0
 */
int _isupper(int c)

{

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
