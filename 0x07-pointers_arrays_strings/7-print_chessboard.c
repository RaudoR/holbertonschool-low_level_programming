#include "holberton.h"
/**
 * print_chessboard - main function
 * @a: parameter
 * Return: void
 */
void print_chessboard(char (*a)[8])

{

	int e, w;

	for (e = 0; e < 8; e++)
	{
		for (w = 0; w < 8; w++)
		{
			_putchar(a[e][w]);
		}
		_putchar('\n');
	}
}
