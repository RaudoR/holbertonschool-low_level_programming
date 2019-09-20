#include <stdio.h>
/**
 * main - main program
 * Description: a program that prints the alphabet in lowercase
 * Return: 0
 */
int main(void)

{

	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
