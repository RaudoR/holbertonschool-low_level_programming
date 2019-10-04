#include "holberton.h"
/**
 * cap_string - main function
 * @s: string
 * Return: string
 */
char *cap_string(char *s)

{

	int counter, b;
	char thing[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(',
			  ')', '{', '}'};

	for (counter = 0; s[counter] != '\0'; counter++)
	{
		for (b = 0; thing[b] != '\0'; b++)
		{
			if (s[0] >= 'a' && s[0] <= 'z')
			{
				s[0] = s[0] - 32;
			}
			if (s[counter] == thing[b])
			{
				if (s[counter + 1] >= 'a' && s[counter + 1] <=
				    'z')
				{
					s[counter + 1] = s[counter + 1] - 32;
				}
			}
		}
	}
	return (s);
}
