#include "holberton.h"
/**
 * _puts - main function
 * @str: char
 * Return: void
 */
void _puts(char *str)

{

	for (; *str != 0; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
