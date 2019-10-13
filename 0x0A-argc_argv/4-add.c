#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * main - main function
 * @argc: size of argv
 * @argv: size of array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int sum, val, a;

	sum = 0;
	if (argc < 1)
		printf("%d\n", 0);
	while (argc-- && argc > 0)
	{
		for (a = 0; argv[argc][a] != '\0'; a++)
		{
			if (!(isdigit(argv[argc][a])))
			{
				printf("Error\n");
				return (1);
			}
		}
		val = atoi(argv[argc]);
		sum += val;
	}
	printf("%d\n", sum);
	return (0);
}
