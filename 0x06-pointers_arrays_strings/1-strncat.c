#include "holberton.h"
/**
 * _strncat - main function
 * @dest: destination
 * @src: source
 * @n: bytes
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)

{

	int a, b;

	for (a = 0; dest[a] != '\0'; a++)
		;
	for (b = 0; b < n; b++, a++)
	{
		dest[a] = src[b];
	}
	return (dest);
}
