#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - main function
 * @nmemb: int
 * @size: int
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)

{

	unsigned int counter = 0;
	char *s;

	if (nmemb == 0 || size == 0)
		return (NULL);
	s = malloc(nmemb * size);
	if (s == NULL)
	{
		return (NULL);
	}
	while (counter < nmemb * size)
	{
		s[counter] = 0;
		counter++;
	}
	return (s);
}
