#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - main function
 * @array: pointer to array of int type
 * @size: size of array
 * @action: pointer to function
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))

{
	unsigned int alpha = 0;

	if (array == NULL)
		return;
	if (action == NULL)
		return;
	if (size <= 0)
		return;

	for (; alpha < size; alpha++)
		action(array[alpha]);
}
