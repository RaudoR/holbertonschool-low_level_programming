#include "holberton.h"
void _puts_recursion(char *s)
{

	while (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	if (*s == '\0')
	{
		_putchar('\n');
	}
}
