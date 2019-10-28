#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_strings - main function
 * @separator: pointer
 * @n: int
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)

{

	va_list lst;
	char *ptr;
	unsigned int alpha = 0;

	va_start(lst, n);

	for (; alpha < n; alpha++)
	{
		ptr = va_arg(lst, char*);
		if (ptr)
		{
		printf("%s", ptr);
		}
		else
		{
			printf("(nil)");
		}
		if (separator != NULL && (alpha < (n - 1)))
                        printf("%s", separator);
	}
	va_end(lst);
	printf("\n");
}
