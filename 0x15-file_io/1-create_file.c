#include "holberton.h"
/**
 *
 *
 *
 */
int create_file(const char *filename, char *text_content)
{
	int fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	int len = 0;
	int wrt;

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";
	while (text_content[len] != '\0')
		len++;

	wrt = write(fd, text_content, len);
	if (wrt == -1)
		return (-1);
	close(fd);
	return (1);
}
