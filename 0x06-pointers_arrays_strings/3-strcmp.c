#include "holberton.h"
/**
 * _strcmp - main function
 * @s1: first stirng
 * @s2: second string
 * Return: -, or 0
 */
int _strcmp(char *s1, char *s2)

{

	if (*s1 != *s2)
	{
		return (*s1 - *s2);
	}
	else
		return (0);
}
