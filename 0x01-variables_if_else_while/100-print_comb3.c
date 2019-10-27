#include <stdio.h>
/**
 * main - main program
 * Return: 0
 */
int main(void)

{

	int a = 0, b, c;

	while (a < 100)
	{
		b = a % 10;
		c = a / 10;

		if (c < b)
		{
			putchar(c + '0');
			putchar(b + '0');

			if (a < 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
		a++;
	}
	putchar('\n');
	return (0);
}
