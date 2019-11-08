#include "holberton.h"
unsigned int binary_to_uint(const char *b)

{
	unsigned int decimal = 0;
	unsigned int count = 1;
	unsigned int len = 0;

	while (b[len] != '\0')
	{
		if (b[len] != '0' || b[len] != '1')
			return (-1);
		decimal = (b[len] - '0') * count;
		count = count * 2;
	}
	len++;
	return (decimal);
}
