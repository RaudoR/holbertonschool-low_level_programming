#include <stdio.h>
/**
 * main - main function
 * @argc: size of argv
 * @argv: size of array
 * Return: 0
 */
int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
