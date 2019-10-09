#include "holberton.h"
/**
 * _strstr - main function
 * @haystack: paramater
 * @needle: occurrence
 * Return: pointer to beginning
 */
char *_strstr(char *haystack, char *needle)

{

	while (*haystack != '\0')
	{
		char *begg = haystack;
		char *pat = needle;

		while (*pat == *haystack && *pat != '\0' && *haystack != '\0')
		{
			haystack++;
			pat++;
		}
		if (*pat == '\0')
			return (begg);
		haystack = begg + 1;
	}
	return ('\0');
}
