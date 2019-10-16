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
	unsigned int a = 0;

	array = malloc(size * sizeof(c));

	while (a < size)
	{
		if (array == NULL)
		{
			return (NULL);
		}
		array[a] = c;
		a++;
	}
	return (array);
}
