#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

void print_all(const char * const format, ...)
/**
 * print_all - main function
 * @format: string
 * Return: void
 */

{

	va_list lst;
	int i = 0;
	int bravo = 0;

	va_start(lst, format);

	while (format[bravo] != '\0')
		bravo++;

		while (format[i] != '\0')
		{
			switch (format[i])
			{
			case 'c':
				printf("%c", (char)va_arg(lst, int));
				break;
			case 'i':
				printf("%d", va_arg(lst, int));
				break;
			case 'f':
				printf("%f", (float)va_arg(lst, double));
				break;
			case 's':
				if (format == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", va_arg(lst, char *));
				break;
			default:
				break;
			}
			if (i != bravo - 1 &&  (format[i] == 'c' || format[i] ==
						'i' || format[i] == 'f' || format[i] == 's'))
			{
				printf(", ");
			}
			i++;
		}
		va_end(lst);
		printf("\n");
}
