#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
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

/**
 * _strdup - main function
 * @str: array
 * Return: 0
 */

char *_strdup(char *str)
{
	char *cheese;
	int size;
	int e;

	if (str == NULL)
	{
		return (NULL);
	}
	size = _strlen(str) + 1;
	cheese = malloc(size * sizeof(char));

	e = 0;
	while (e < size)
	{
		if (cheese == NULL)
		{
			return (NULL);
		}
	cheese[e] = str[e];
	e++;
	}
	return (cheese);
}
