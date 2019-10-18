#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - main function
 * @s1: destination
 * @s2: source
 * @n: number of bytes
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)

{

	unsigned int count1 = 0;
	unsigned int count2 = 0;
	unsigned int len1 = _strlen(s1);
	unsigned int len2 = _strlen(s2);
	char *ptr;
	unsigned int bytes = n;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (bytes >= len2)
	{
		bytes = *s2;
		ptr = malloc(sizeof(char) * (len1 + len2 + 1));
	}
	if (bytes < len2)
	{
		ptr = malloc(sizeof(char) * (len1 + n + 1));
	}
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (; count1 < len1; count1++)
	{
		ptr[count1] = s1[count1];
	}
	for (; count2 < bytes; count2++)
	{
		ptr[count1++] = s2[count2];
	}
	ptr[count1++] = '\0';
	return (ptr);
}


#include "holberton.h"
/**
 * _strlen - main function
 * @s: integer
 * Return: n
 */
unsigned int _strlen(char *s)
{
	unsigned int n;

	for (n = 0; *s != '\0'; s++)
		n++;
	return (n);
}
