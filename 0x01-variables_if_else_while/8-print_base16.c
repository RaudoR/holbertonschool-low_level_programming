#include <stdio.h>
/**
 * main - this is the main program
 * Description: a program that prints all the numbers of base 16 in lowercase
 * Return: 0
 */
int main(void)

{

	char c;

	for (c = '0'; c <= 'f'; c++)
	{
		putchar(c);
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
