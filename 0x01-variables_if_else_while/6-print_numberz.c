#include <stdio.h>
/**
 * main - this is the main function
 * Description: a program that prints all single digit numbers of base 10
 * Return: 0
 */
int main(void)

{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}
	putchar('\n');

return (0);
}
