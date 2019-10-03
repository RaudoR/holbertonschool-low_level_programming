#include "holberton.h"
/**
 * _strcat - main function for concatenation
 * @dest: null to be removed
 * @src: string to be appended
 * Return: dest
 */
char *_strcat(char *dest, char *src)

{

	int a, b;

	for (b = 0; dest[b] != '\0'; b++)
		;
	for (a = 0; src[a] != '\0'; a++, b++)
	{
		dest[b] = src[a];
	}
	src[a] = '\0';
	return (dest);
}
