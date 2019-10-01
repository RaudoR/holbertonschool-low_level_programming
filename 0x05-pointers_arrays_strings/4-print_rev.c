#include "holberton.h"
/**
 * print_rev - main function
 * @s: integer
 * Return:0
 */
void print_rev(char *s)

{
	int c = 0;

	for (; *s != '\0'; s++)
		c++;
	s--;
	for (; c != 0; c--, s--)
	{
		_putchar(*s);
	}
	_putchar('\n');
}
