#include "holberton.h"
/**
 * print_alphabet - print the alphabet
 * Return: void
 */
void print_alphabet(void)

{
	char al = 'a';

	for (al = 'a'; al <= 'z'; al++)
	{
		_putchar(al);
	}
	_putchar('\n');
}
