#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - main function
 * @s1: destination
 * @s2: source
 * Return: pinter
 */

char *str_concat(char *s1, char *s2)

{

	char *ca;
	int size1, size2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	size1 = _strlen(s1);
	size2 = _strlen(s2);

	ca = malloc(((size1 + size2) + 1) * sizeof(char));
	if (ca == NULL)
	{
		return (NULL);
	}
	_strncat(ca, s1, size1);
	_strncat(ca, s2, size2);
	ca += '\0';
	return (ca);
}

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

#include "holberton.h"
/**
 * _strlen - main function
 * @s: integer
 * Return: n
 */
int _strlen(char *s)
{
	int n;

	for (n = 0; *s != '\0'; s++)
		n++;
	return (n);
}
