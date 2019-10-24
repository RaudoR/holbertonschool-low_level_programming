#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - main function
 * @name: name to be printed
 * @f: pointer to function
 * Return: name
 */
void print_name(char *name, void (*f)(char *))

{
	if (name == NULL)
		return;
	f(name);
}
