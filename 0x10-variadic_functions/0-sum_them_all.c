#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - function that assists main sum integers
 * @n: constant unsigned int
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)

{
	unsigned int sum = 0, india = 0;
	va_list lst;

	va_start(lst, n);

	for (; india < n; india++)
	{
		sum += va_arg(lst, unsigned int);
	}
	va_end(lst);

	return (sum);
}
