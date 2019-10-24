#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - main function
 * @array: pointer to array
 * @size: size of array
 * @cmp: pointer to function
 * Return: pointer
 */
int int_index(int *array, int size, int (*cmp)(int))

{

	int lima = 0;

	if (array == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	if (cmp == NULL)
		return (-1);
	for (; lima < size; lima++)
	{
		if (cmp(array[lima]))
			return (lima);
	}
	return (-1);
}
