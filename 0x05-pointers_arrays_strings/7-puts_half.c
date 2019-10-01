#include "holberton.h"
/**
 * puts_half - main function
 * @str: integer
 * Return: void
 */
void puts_half(char *str)
{
	int s;
	for (s = 0; str[s] != '\0'; s++)
		s++;
	for (s /= 2; str[s] != '\0'; s++)
	{
		_putchar(str[s]);
	}
	_putchar('\n');
}
