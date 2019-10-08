#include "holberton.h"
/**
 * _strchr - main function
 * @s: array
 * @c: first occurrence
 * Return: &s
 */
char *_strchr(char *s, char c)

{

	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (c == '\0')
		return (s);
	s = 0;
	return (s);
}
