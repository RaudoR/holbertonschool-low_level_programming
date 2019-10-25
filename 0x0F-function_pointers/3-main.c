#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

/**
 * main - Entry point of program
 * @argc: size of array argv and number of command line arguments
 * @argv: An array of size argc
 * Return: Always successful
 */
int main(int argc, char *argv[])
{
	int (*julia)(int, int);
	int alpha, bravo;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	julia = get_op_func(argv[2]);
	alpha = atoi(argv[1]);
	bravo = atoi(argv[3]);

	if (julia == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((argv[2][0] == '%' || argv[2][0] == '/') && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", julia(alpha, bravo));

	return (0);
}
