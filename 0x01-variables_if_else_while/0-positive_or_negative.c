#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print positive, negative, and zero depending o the number
 * Description: this program prints "positive, negative, and zero"
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("is positive\n",n);
	}
	else if (n == 0)
	{
		printf("is zero\n",n);
	}
	else if (n < 0)
	{
		printf("is negative\n",n);
	}
	return (0);
}
