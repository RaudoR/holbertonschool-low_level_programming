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
