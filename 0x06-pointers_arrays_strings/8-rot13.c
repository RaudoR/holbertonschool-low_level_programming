#include "holberton.h"
/**
 * rot13 - main function
 * @s: string
 * Return: s
 */
char *rot13(char *s)

{

	int a, b;

	char tiger[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char zulu[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; tiger[b] != '\0'; b++)
		{
			if (s[a] == tiger[b])
			{
				s[a] = zulu[b];
				break;
			}
		}
	}
	return (s);
}
