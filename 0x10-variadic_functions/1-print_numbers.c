#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_numbers - main function
 * @separator: pointer
 * @n: int
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)

{
	va_list lst;
	unsigned int zulu = 0;

	va_start(lst, n);

	for (; zulu < n; zulu++)
	{
		printf("%d", va_arg(lst, unsigned int));
		if (separator != NULL && (zulu < (n - 1)))
			printf("%s", separator);
	}
	va_end(lst);
	printf("\n");
}
