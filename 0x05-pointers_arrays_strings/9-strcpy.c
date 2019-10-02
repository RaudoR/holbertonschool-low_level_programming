#include "holberton.h"
/**
 * _strcpy - main function to copy the string
 * @dest: destination of copied string
 * @src: to be copied
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{

	int a;

	for (a = 0; src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	dest[a] = '\0';
	return (dest);
}
