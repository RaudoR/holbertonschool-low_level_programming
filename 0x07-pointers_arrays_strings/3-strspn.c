#include "holberton.h"
/**
 * _strspn - main function
 * @s: string
 * @accept: number of bytes
 * Return: cheese
 */
unsigned int _strspn(char *s, char *accept)

{

	int cheese, pizza;

	for (cheese = 0; s[cheese]; cheese++)
	{
		for (pizza = 0; accept[pizza]; pizza++)
		{
			if (accept[pizza] == s[cheese])
				break;
		}
		if (!accept[pizza])
			break;
	}
	return (cheese);
}
