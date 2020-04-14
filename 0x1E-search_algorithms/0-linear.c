#include "search_algos.h"
/**
 * linear_search - find the matching index to the value
 * @array: array of ints
 * @size: length of the arrray
 * @value: number to match
 * Return: matching index or -1 if none is found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t  index;

	if (array == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		printf("Value checked array[%lu] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);

	}
	index++;
	return (-1);
}
