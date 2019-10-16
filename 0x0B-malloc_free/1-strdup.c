#include "holberton.h"
#include <stdlib.h>
/**
 * _strdup - main function
 * @str: array
 * Return: 0
 */
char *_strdup(char *str)

{

	char *array;
	int e, len;

	array = malloc(sizeof(str));

	e = len = 0;
	while (str[e] != '\0')
	{
		len++;
		e++;
	}
	if (array == NULL)
		return (NULL);
	e = 0;
	while (str[e] != '\0')
	{
		array[e] = str[e];
		e++;
	}
	return (array);
}
