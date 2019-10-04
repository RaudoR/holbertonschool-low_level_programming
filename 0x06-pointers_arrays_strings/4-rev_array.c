#include "holberton.h"
/**
 * reverse_array - main function
 * @a: holds the string
 * @n: lenght of the string
 * Return: void
 */
void reverse_array(int *a, int n)

{

	int x;
	int s;
	int i = 0;

	for (s = 0; s < n; s++, i++)
	{
		n--;

		x = a[n];
		a[n] = a[i];
		a[i] = x;
	}
}
