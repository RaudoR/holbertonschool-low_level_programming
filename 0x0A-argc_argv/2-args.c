#include <stdio.h>
/**
 * main - main function
 * @argc: size of argv
 * @argv: size of array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int cheese;

	for (cheese = 0; cheese < argc; cheese++)
	{
		printf("%s\n", argv[cheese]);
	}
	return (0);
}
