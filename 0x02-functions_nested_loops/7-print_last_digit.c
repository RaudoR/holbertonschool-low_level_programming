#include "holberton.h"
/**
 * print_last_digit - function that computes the absolute value of an integer
 * @c:  is the int that will use for the argument of the function
 * Return: 0
 */
int print_last_digit(int c)
{
	int n;

	if (c >= 0)
		n = c % 10;
	else
		n = (c % 10) * -1;
	_putchar(n + '0');
	return (n);
}
