#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - main function
 * @size: sizeof array
 * @c: char
 * Return: 0
 */
char *create_array(unsigned int size, char c)

{

	char *array;
	unsigned int e;

	if (size == 0)
	{
		return (NULL);
	}
	array = malloc((size) * sizeof(char));
	if (array == NULL)
	{
		return (NULL);
	}
	e = 0;
	while (e < size)
	{
		array[e] = c;
		e++;
	}
	array[e] = '\0';
	return (array);
}
