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
	unsigned int julia;

	for (julia = 0; julia < n; julia++)
	{
		s[julia] = b;
		julia++;
	}
	return (s);
}
