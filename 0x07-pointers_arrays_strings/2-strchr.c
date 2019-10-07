#include "holberton.h"
/**
 * _strchr - main function
 * @s: array
 * @c: first occurrence
 * Return: &s
 */
char *_strchr(char *s, char c)

{

	int zulu;

	for (zulu = 0; s[zulu] != '\0' && c != '\0'; zulu++)
	{
		if (s[zulu] == c)
			return (&s[zulu]);
	}
		return ('\0');
}
