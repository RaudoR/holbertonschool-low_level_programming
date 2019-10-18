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
	unsigned int len1;
	unsigned int len2;
	char *ptr;
	unsigned int bytes = n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (len1 = 0; s1[len1] != '\0'; len1++)
		;
	for (len2 = 0; s2[len2] != '\0'; len2++)
		;

	if (bytes >= len2)
	{
		bytes = len2;
		ptr = malloc(sizeof(char) * (len1 + len2 + 1));
	}
	else
		ptr = malloc(sizeof(char) * (len1 + n + 1));
	if (ptr == NULL)
		return (NULL);
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
