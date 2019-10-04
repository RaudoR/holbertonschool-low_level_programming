#include "holberton.h"
/**
 * string_toupper - main function
 * @s: contains the values to be changed
 * Return: s
 */
char *string_toupper(char *s)

{

	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] >= 'a' && s[a] <= 'z')
		{
			s[a] = s[a] - 32;
		}
	}
	return (s);
}
