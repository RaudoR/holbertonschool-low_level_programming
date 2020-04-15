#include "search_algos.h"
/**
 * printArray - print elements of array
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * Return: void
 */

void printArray(int *array, size_t size)
{
	size_t index;

	printf("Searching in array: ");
	for (index = 0; index < size; index++)
	{
		if (index > 0 && index < size)
			printf(", ");
		printf("%d", array[index]);
	}
	printf("\n");
}
/**
 * binary_search - match the value to the index using binary search
 * @array: pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: number to match
 * Return: value matched
 */
int binary_search(int *array, size_t size, int value)
{
	size_t mid;
	size_t start;
	size_t end;

	if (array != NULL)
	{
		start = 0;
		end = size - 1;
		while (start <= end)
		{
			printArray(array + start, end + 1 - start);
			mid = (start + end) / 2;
			if (array[mid] < value)
				start = mid + 1;
			else if (array[mid] > value)
				end = mid - 1;
			else
				return (mid);
		}
	}
	return (-1);

}
