#include <stdio.h>
/**
 * main - this is the main program
 * Description: this program does some stuff
 * Return: 0
 */
int main(void)

{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
