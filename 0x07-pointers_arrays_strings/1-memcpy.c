#include  "holberton.h"
/**
 * _memcpy - main function
 * @dest: destination file
 * @src: source file
 * @n: number of bytes
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)

{
	unsigned int zulu;

	for (zulu = 0; zulu < n; zulu++)
	{
		dest[zulu] = src[zulu];
	}
	return (dest);
}
