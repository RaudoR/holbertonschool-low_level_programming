#include "holberton.h"
/**
 * leet - main function
 * @s: string
 * Return: s
 */
char *leet(char *s)

{

	int a, b;
	char letters[] = "aeotlAEOTL";
	char numbers[] = "4307143071";

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; letters[b] != '\0'; b++)
		{
			if (s[a] == letters[b])
			{
				s[a] = numbers[b];
			}
		}
	}
	return (s);
}
