#include "holberton.h"
/**
 * _memset - main function
 * @s: character array
 * @n: number of bytes inside the array
 * @b: the constant byte
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)

{

	for (; n > 0; n--)
	{
		*s = b;
		s++;
	}
	return (s);
}
