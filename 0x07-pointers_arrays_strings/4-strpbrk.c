#include "holberton.h"
/**
 * _strpbrk - main function
 * @s: main string
 * @accept: number of bytes
 * Return: s
 */
char *_strpbrk(char *s, char *accept)

{

	int k, c, e;

	k = 0;
	while (s[k] != '\0')
	{
		c = 0;
		for (c = 0; accept[c] != '\0'; c++)
		{
			if (s[k] == accept[c])
				e = 1;
		}
		c = 0;
		if (e == 1)
			return (s + k);
		k++;
	}
	return (0);
}
