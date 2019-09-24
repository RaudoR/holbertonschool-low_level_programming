#include "holberton.h"
/**
 * print_alphabet_x10 - rint the alphabet 10x
 * Return: void
 */
void print_alphabet_x10(void)

{
	char c, i, newline = '\n';

	for (i = '0'; i <= '9'; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar(newline);
	}

}
